#ifndef QSYNCCONF_H
#define QSYNCCONF_H

/* =================================================
 * This file is part of the TTK Music Player project
 * Copyright (C) 2015 - 2021 Greedysky Studio

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
 ================================================= */

#include <QObject>
#include "ttkprivate.h"

#define DATA_BUCKET     "greedysky-data"
#define MUSIC_BUCKET    "greedysky-music"

/*! @brief The class of the sync data config.
 * @author Greedysky <greedysky@163.com>
 */
struct TTK_MODULE_EXPORT QSyncConf
{
    static QString HOST;

    static QString NAME;
    static QByteArray KEY;

    static QString VERSION;
};

#endif