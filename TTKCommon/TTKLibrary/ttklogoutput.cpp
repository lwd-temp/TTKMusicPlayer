#include "ttklogoutput.h"
#include "ttksingleton.h"

#include <QDir>
#include <QApplication>

#define LOG_MAXSIZE  5 * 1024 * 1024

class TTKLogOutput
{
public:
    /*!
     * Install log output handler.
     */
    void install();
    /*!
     * Uninstall log output handler.
     */
    void uninstall();

    /*!
     * Log output handler.
     */
#if TTK_QT_VERSION_CHECK(5,0,0)
    static void loggerHandler(QtMsgType type, const QMessageLogContext &context, const QString &message);
#else
    static void loggerHandler(QtMsgType type, const char *message);
#endif

private:
    /*!
     * Object constructor.
     */
    TTKLogOutput();
    /*!
     * Object destructor.
     */
    ~TTKLogOutput();

    /*!
     * Open log output file.
     */
    void open();
    /*!
     * Save log output file.
     */
    void save(const QString &message);
    /*!
     * Write log output file.
     */
    void write(QtMsgType type, const QMessageLogContext &context, const QString &message);

private:
    QFile m_file;
    QString m_dateTime;
    QMutex m_mutex;
#if TTK_QT_VERSION_CHECK(5,0,0)
    QtMessageHandler m_defaultHandler;
#else
    class QMessageLogContext {};
    QtMsgHandler m_defaultHandler;
#define qInstallMessageHandler qInstallMsgHandler
#endif

    TTK_DECLARE_SINGLETON_CLASS(TTKLogOutput)
};

#define LOG_DIR_PATH QApplication::applicationDirPath() + "/log"

TTKLogOutput::TTKLogOutput()
    : m_file(),
      m_dateTime(),
      m_mutex(),
      m_defaultHandler(nullptr)
{

}

TTKLogOutput::~TTKLogOutput()
{
    if(m_file.isOpen())
    {
        m_file.close();
    }
}

void TTKLogOutput::install()
{
    const QString &path = LOG_DIR_PATH;
    QDir dir(path);
    if(!dir.exists())
    {
        dir.mkdir(path);
    }

    open();
    m_defaultHandler = qInstallMessageHandler(TTKLogOutput::loggerHandler);
}

void TTKLogOutput::uninstall()
{
    m_defaultHandler = nullptr;
    qInstallMessageHandler(m_defaultHandler);
}

#if TTK_QT_VERSION_CHECK(5,0,0)
void TTKLogOutput::loggerHandler(QtMsgType type, const QMessageLogContext &context, const QString &message)
{
    TTKSingleton<TTKLogOutput>::instance()->write(type, context, message);
}
#else
void TTKLogOutput::loggerHandler(QtMsgType type, const char *message)
{
    TTKSingleton<TTKLogOutput>::instance()->write(type, {}, message);
}
#endif

void TTKLogOutput::open()
{
    m_dateTime = QDate::currentDate().toString(TTK_DATE_FORMAT);
    const QString &fileName = LOG_DIR_PATH + m_dateTime + "_log";

    int index = 1;
    do
    {
        m_file.setFileName(fileName + QString("_%1.txt").arg(index++));
    }
    while(m_file.size() >= LOG_MAXSIZE);

    m_file.open(QIODevice::WriteOnly | QIODevice::Append);
}

void TTKLogOutput::save(const QString &message)
{
    if(m_file.isOpen())
    {
        QTextStream out(&m_file);
        out << message << "\r\n";
        m_file.flush();
    }
}
void TTKLogOutput::write(QtMsgType type, const QMessageLogContext &context, const QString &message)
{
    Q_UNUSED(type);
    Q_UNUSED(context);

    m_mutex.lock();

    m_defaultHandler(type, context, message);

    if(m_file.isOpen())
    {
        const QString &date = QDate::currentDate().toString(TTK_DATE_FORMAT);
        const bool moreLarge = m_file.size() >= LOG_MAXSIZE;
        const bool nextDate = date.compare(m_dateTime, Qt::CaseInsensitive) != 0;

        if(moreLarge || nextDate)
        {
            m_file.close();
            open();
        }
    }

    save(message);
    m_mutex.unlock();
}


void TTK::installLogHandler()
{
    TTKSingleton<TTKLogOutput>::instance()->install();
}

void TTK::uninstallLogHandler()
{
    TTKSingleton<TTKLogOutput>::instance()->uninstall();
}
