#include "musicabstractmovewidget.h"
#include "musicbackgroundmanager.h"
#include "musicwidgetheaders.h"

MusicAbstractMoveWidget::MusicAbstractMoveWidget(QWidget *parent)
    : MusicAbstractMoveWidget(true, parent)
{

}

MusicAbstractMoveWidget::MusicAbstractMoveWidget(bool transparent, QWidget *parent)
    : QWidget(parent)
    , MusicWidgetRenderer()
{
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    setAttribute(Qt::WA_TranslucentBackground, transparent);

    m_moveOption = false;
    m_leftButtonPress = false;
    m_showShadow = true;

    G_BACKGROUND_PTR->addObserver(this);
}

MusicAbstractMoveWidget::~MusicAbstractMoveWidget()
{
    G_BACKGROUND_PTR->removeObserver(this);
}

void MusicAbstractMoveWidget::backgroundChanged()
{
    if(m_background)
    {
        setBackgroundPixmap(size());
    }
}

void MusicAbstractMoveWidget::paintEvent(QPaintEvent *event)
{
    QWidget::paintEvent(event);

    if(m_showShadow)
    {
        QPainter painter(this);
        MusicUtils::Widget::setBorderShadow(this, &painter);
    }
}

void MusicAbstractMoveWidget::mousePressEvent(QMouseEvent *event)
{
    QWidget::mousePressEvent(event);
    if(event->button() == Qt::LeftButton && !m_moveOption)///Press the left key
    {
        m_leftButtonPress = true;
    }
#if TTK_QT_VERSION_CHECK(6,0,0)
    m_pressAt = event->globalPosition().toPoint();
#else
    m_pressAt = event->globalPos();
#endif
}

void MusicAbstractMoveWidget::mouseMoveEvent(QMouseEvent *event)
{
    QWidget::mouseMoveEvent(event);
    if(!m_leftButtonPress)///Not press the left key
    {
        event->ignore();
        return;
    }
#if TTK_QT_VERSION_CHECK(6,0,0)
    const int xpos = event->globalPosition().x() - m_pressAt.x();
    const int ypos = event->globalPosition().y() - m_pressAt.y();
    m_pressAt = event->globalPosition().toPoint();
#else
    const int xpos = event->globalX() - m_pressAt.x();
    const int ypos = event->globalY() - m_pressAt.y();
    m_pressAt = event->globalPos();
#endif
    move(x() + xpos, y() + ypos);
}

void MusicAbstractMoveWidget::mouseReleaseEvent(QMouseEvent *event)
{
    QWidget::mouseReleaseEvent(event);
#if TTK_QT_VERSION_CHECK(6,0,0)
    m_pressAt = event->globalPosition().toPoint();
#else
    m_pressAt = event->globalPos();
#endif
    m_leftButtonPress = false;
}



MusicAbstractMoveSingleWidget::MusicAbstractMoveSingleWidget(QWidget *parent)
    : MusicAbstractMoveSingleWidget(true, parent)
{

}

MusicAbstractMoveSingleWidget::MusicAbstractMoveSingleWidget(bool transparent, QWidget *parent)
    : MusicAbstractMoveWidget(transparent, parent)
{
    QVBoxLayout *l = new QVBoxLayout(this);
    l->setContentsMargins(4, 4, 4, 4);
    l->setSpacing(0);

    m_container = new QWidget(this);
    l->addWidget(m_container);
    setLayout(l);
}

MusicAbstractMoveSingleWidget::~MusicAbstractMoveSingleWidget()
{
    delete m_container;
}