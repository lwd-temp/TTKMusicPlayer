#ifndef MUSICMOBILESONGSMANAGERWIDGET_H
#define MUSICMOBILESONGSMANAGERWIDGET_H

/***************************************************************************
 * This file is part of the TTK Music Player project
 * Copyright (C) 2015 - 2022 Greedysky Studio

 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License along
 * with this program; If not, see <http://www.gnu.org/licenses/>.
 ***************************************************************************/

#include "musicwidgetheaders.h"
#include "musicabstractmovewidget.h"
#include "musicabstractsongslisttablewidget.h"

/*! @brief The class of the mobile songs table widget.
 * @author Greedysky <greedysky@163.com>
 */
class TTK_MODULE_EXPORT MusicMobileSongsTableWidget : public MusicAbstractSongsListTableWidget
{
    Q_OBJECT
    TTK_DECLARE_MODULE(MusicMobileSongsTableWidget)
public:
    /*!
     * Object contsructor.
     */
    explicit MusicMobileSongsTableWidget(QWidget *parent = nullptr);
    ~MusicMobileSongsTableWidget();

    /*!
     * Clear current items.
     */
    void clearAllItems();
    /*!
     * Add show list items.
     */
    void addItems(const QStringList &path);

public Q_SLOTS:
    /*!
     * Table widget item cell click.
     */
    virtual void itemCellClicked(int row, int column) override final;
    /*!
     * Override the widget event.
     */
    virtual void contextMenuEvent(QContextMenuEvent *event) override final;

};

class MusicSongsManagerThread;

namespace Ui {
class MusicMobileSongsManagerWidget;
}

/*! @brief The class of the mobile songs manager widget.
 * @author Greedysky <greedysky@163.com>
 */
class TTK_MODULE_EXPORT MusicMobileSongsManagerWidget : public MusicAbstractMoveWidget
{
    Q_OBJECT
    TTK_DECLARE_MODULE(MusicMobileSongsManagerWidget)
public:
    /*!
     * Object contsructor.
     */
    explicit MusicMobileSongsManagerWidget(QWidget *parent = nullptr);
    ~MusicMobileSongsManagerWidget();

    /*!
     * Find extra device path.
     */
    void findExtraDevicePath(const QString &dir);

Q_SIGNALS:
    /*!
     * Add current selected song to playlist.
     */
    void addSongToPlaylist(const QStringList &names);

public Q_SLOTS:
    /*!
     * Select all items.
     */
    void selectedAllItems(bool check);
    /*!
     * Music song audition play.
     */
    void auditionButtonClick();
    /*!
     * Add music song to play list.
     */
    void addButtonClick();
    /*!
     * Item cell on click by row and col.
     */
    void itemCellOnClick(int row, int col);
    /*!
     * Item cell on double click by row and col.
     */
    void itemDoubleClicked(int row, int col);
    /*!
     * Send the searched file or path.
     */
    void searchFilePathChanged(const QStringList &name);
    /*!
     * Search result from list.
     */
    void musicSearchResultChanged(int row, int col);

    /*!
     * Override show function.
     */
    void show();

protected:
    /*!
     * Clear All Items.
     */
    void clearAllItems();
    /*!
     * Add all file items into list.
     */
    void addAllItems(const QStringList &name);
    /*!
     * Set current item or items selected.
     */
    void selectedItems();

    Ui::MusicMobileSongsManagerWidget *m_ui;

    QStringList m_fileNames;
    MusicSongsManagerThread *m_thread;
    TTKIntListMap m_searchResultCache;

};

#endif // MUSICMOBILESONGSMANAGERWIDGET_H