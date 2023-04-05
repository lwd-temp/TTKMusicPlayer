#ifndef MUSICWYQUERYINTERFACE_H
#define MUSICWYQUERYINTERFACE_H

/***************************************************************************
 * This file is part of the TTK Music Player project
 * Copyright (C) 2015 - 2023 Greedysky Studio

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

#include "musicglobaldefine.h"

///cookie url
const QString WY_UA_URL                     = "Vkloais0Z0Q4Smp1aElYSXFUVy96SXdoZ2VsTURzdDBpZEZjT21jMy9PRE1DMzdwQ0p5MllueTkrRGdzb2VkdlJMemJhWEFReHlUUk9uSEtMTHRLUzRxS3psczJiRW9LZ3BQbHh1Z3lGRlhEQk5JbVVGb1NDN1JzTDhZMjBybllLcndKSHlSNC94QzRJWXlL";
const QString WY_COOKIE_URL                 = "bSs4UEJOUzFwRWpzRVY0WUVJekhzU0Nzc1JZT0pLc2tOdFNaM05DWnRhM3JHT0kzSWpQb1MyNXJkK3A5YmV3YklpM082dDk1amVjejV0NlV5aHYybkF4Zjd3L2NSblJkYmRXOS8xVlJOWnYvMWhweUxsSGhtSGVPYnFQZE10d01sNWswZFNzYnVEOGhBWkpHdHFTUGpJNVROdWM9";
const QString WY_NMTID_URL                  = "V0Zsb2tGREU1R0thR29GYjRYdk5jbm5NZjEvN1d6WWNiQlZqb2k4eE1nTm9lTHlBRktkQTBOaXNjQ3ZHU0ZMSw==";
///base url
const QString WY_BASE_URL                   = "MVNVTXo4bW9WdHhXR1dXeTZmU3k5dmFOcGlua1VOMlE=";
const QString WY_SECKRY_STRING              = "411571dca16717d9af5ef1ac97a8d21cb740329890560688b1b624de43f49fdd7702493835141b06ae45f1326e264c98c24ce87199c1a776315e5f25c11056b02dd92791fcc012bff8dd4fc86e37888d5ccc060f7837b836607dbb28bddc703308a0ba67c24c6420dd08eec2b8111067486c907b6e53c027ae1e56c188bc568e";
///song url
const QString WY_SONG_SEARCH_URL            = "STg2eHNFN0FLWnRzeDNlQXRlaHIvVlJ6b2k5a2s3Y2JmMG9lUEQzTytuNG5JenowY3ZleC9SbXFyak1ta29pYzA3dytZZz09";
const QString WY_SONG_SEARCH_DATA_URL       = "UUlpSjlhZzFoVnExMDRudE5PWlFva25EWCt1d09CbGVYdlNpVVhvUWVna29JVU9sa3cxK2N0bUU0eW1VMENTTjlhR3JnQT09";
const QString WY_SONG_LRC_OLD_URL           = "eEZRWnA5eWZZZWFvakpnQ2F2Sml1aTZQa1crekFlZUJoTXUwRUgwekRtOXFsU2l2S1BKZFdwTUVaNGRzWUJ2ZTNpdlRDNnVuTUt2M0xtUTRsaWh2NTZBQ0JacnNTbXp6";
const QString WY_SONG_PATH_URL              = "M21IV2dlSHNzaE1zZEpyb2hrQ0dqVEY3Ly9DZ3ZteDM1RStuSlJIRVVCRTljbWJKKzRBVnNZY3JEcEZKY045dEJ5KzM0WHArSDVCYXhrMHBoZmlTZXBWdHIvND0=";
const QString WY_SONG_PATH_DATA_URL         = "ei9SdFJqZWlHWlh3eXBsWHJTS09FbUpRU1J4Zi9wZDlOQUMyVTVnL3c0YW9GSjVH";
const QString WY_SONG_INFO_OLD_URL          = "N2NkQWg4V3o0NXYvMlFHamVOWVZ5Y2NnTDk2cTNFdFVROVNwTndJV2REYXM0K01Yd2NIT1pwaGcyTGJ0QVVsNHVxT0lTZHFKNTI2QnlWMnVBWFNDdWYrb09Waz0=";
const QString WY_SONG_INFO_URL              = "S3paVUxRY3hZVDVweWhJZFU0K0FpakhJc3R5YW1hbmpmRUVsL3JTRUdwcnlDdDlMWFJSR0ludFFPZ1MycWExVVlLNjg5Njh3VmV2cGxpQzE=";
const QString WY_SONG_INFO_DATA_URL         = "Zmh6cVNyd2REdlVlZ3JQVUZpNjd5YlBaYVR0SEQrWFAydVpzOWc9PQ==";
///artist url
const QString WY_ARTIST_URL                 = "YmhRbVZDYy8rbytiRWc5cXc2MUVUdEFKRmw2eFhTVmhqWTZ6MmRVNEMzbVg0Q3BFQVF4d0VYUktBMk1aVUNVb3ZaNk5VL3BYRjBZPQ==";
const QString WY_ARTIST_INFO_URL            = "RnJtNVNTT01ncFI2cDJMRTMrSFFwWFBWVEEzQnZNYmg4TEJrRjZCeHorTE13aVNCNUxScGo2QzNzVUNKNzhKbkI2VjNKUT09";
const QString WY_ARTIST_INFO_DATA_URL       = "dmt4VnNDdWErYjRYUXBnOWdubVBIQT09";
const QString WY_ARTIST_ALBUM_URL           = "dEJpSTdiaUh3R1hnRGVDUlpCNzJKRnBqNWZHY2xLVmhUcWQ0WW1PUVY0NjlONmRvMmtGaWZiMDBscjAvd0dxZg==";
const QString WY_ARTIST_ALBUM_DATA_URL      = "RWhFbktEb0lLdGVwOFE3VHF0SHdOekVQanlOUjJkdE02b0FIdnhXWmkxNHBqaVBYcy9BRDJDRVdqdDM0cmN1cw==";
const QString WY_ARTIST_MOVIE_URL           = "eFdablNDbDlZVzVvYlo4UU9waEFVRlluRUFzdXA4TXFzVE9RMllXWVdQUXE2WjlsRi9DMzc0VlNXQlU9";
const QString WY_ARTIST_MOVIE_DATA_URL      = "OE95dm9DdmtycVlzcnZaaWRhRFpHYjNBenl0bmFKM0ZLa1lVaFFVenBFQnZ5N2RoNE5VR3N5TzlDTitNTjFiUk9vdDZ4QndxSHY2QjVzcFlPM0laTlplUEt0bz0=";
const QString WY_ARTIST_LIST_URL            = "dkxWWG8wQTVVa0xkY1dydjlwTWtNNGtSb3RBWWZqbURVZGtCWHMraFlSNVVRWG9rSnEwSzI4M3o4SDg9";
const QString WY_ARTIST_LIST_DATA_URL       = "STBJRm1VTDN0UE5NRUFtYjJibDdkYmRmVlRvdUdKVE1pWVZlNTRRTXcyVXFmayttQTdrSmJyYnFHREozNHZXUmhVSjBVSU1KTlVMNWVFWnhzYVdpL2Npc2dINWZrdVNMQjJESytnPT0=";
///album url
const QString WY_ALBUM_URL                  = "QzJrMDNKTGlpVHpvY2taYm5BSWZGVTZWM09xYW5STDdXRFE5eTEzczhLZHB1RWljWlIxOVhRUXVDcmpuVjJsQnhqcmZRZE9UU0JZPQ==";
///movie url
const QString WY_MOVIE_URL                  = "dFowcHhjYXk3UWRkZlo2eW40NkY2TEU4VzRoMC84TFh4Wm93N1hCbWk5V21WQnZnYzIrVUhvYmVtK0xtUW90cGpidHBqdz09";
const QString WY_MOVIE_DATA_URL             = "dmt4VnNDdWErYjRYUXBnOWdubVBIQT09";
const QString WY_VIDEO_INFO_URL             = "VGVNaXVsNW9GSTA0d1VYMnFlRnhuVFoyd1BTV0U0Y1RMWGxON25tTlZ4S2lxSUthSFkvSXFOcFB1MjE1eG4xVFBhUXpITWVEZkVrbU5uNk0=";
const QString WY_VIDEO_INFO_DATA_URL        = "MTFxaHNCYnNQYnh5YWFMQUpadk9sWmRCY3FJPQ==";
const QString WY_VIDEO_PATH_URL             = "VjZLL2tEVlFnYjhQclRPMDVnblZiNmE4Q0NDMzBqa3ZaeStjallYbkdBbllYU2YxSWE0OFFIRXppVDRLeEtsM2g4OTROdz09";
const QString WY_VIDEO_PATH_DATA_URL        = "OE8vNmRpSVV6VXg4OGRKL0s5OStEdFQ4K1R2SGJlblZnSGljeVllZ1RQUW5ES1JONWIvdVhNSWdtZGc9";
///toplist url
const QString WY_TOPLIST_URL                = "VUdTa0xMeG1Nblc4cThoS2E1QzhJK0lrTHJBRmk4TUJZMC9NQW1GanZydDJmR0VJVVRZNmJQSEhOZU96aE55bTJxdW55RldJOHl6aElNdTlHbkZkSmc9PQ==";
const QString WY_TOPLIST_DATA_URL           = "UzFpUWk1ZjVnTlpZS2Fabjl0dE50Sk1mUmJZZjlRVTNwVHJlem9ndG1mUzNpSXdvaDluK3NXUlEzdjkyRTl6bXoxYjg1c3g0UXZPWnlPUkxUM0YzMWtmZzVVdzduV2M1";
///comment url
const QString WY_COMMENT_SONG_URL           = "VjJRaU8vR2xYZmIxM0RIMUNxU2NJRzlLSDVqZTY5ZVVXNlhUWndSWkc1TmlEajFKaGRwaS9TRThKRCtyL0Z4SWVSWmovSzhqMzFKV1R3QmxwUVBHSzA5ZGx0d2VmN0JMaVRFaVRnPT0=";
const QString WY_COMMENT_PLAYLIST_URL       = "aURTWlNhUlJISEc3VmExQ2FsUXZqS1lXOVdGSzBOc3dmaHNMK3M0U2tScnNIdHc3Y2NJSGJBVVhhUTc1eHIrNEJrdmgzUlpCOU96UmNsZEEwbnIvQkZQU0tFZU9oY0JKazNlRWZRPT0=";
const QString WY_COMMENT_DATA_URL           = "cmVkanJSR0J1UGdWVlAwaSs2bVFSeTFMdVhvQzVHNVgyWUVGSWFESXgyUXlSNkU5KzhqQXlBdlI1b3h0UmI5N3lUZlVBM2NIZTE2Tk4zV2Y=";
///playlist url
const QString WY_PLAYLIST_URL               = "aFZGMG5CbXZXNmNGaS9jZEV6S0c2RE53Tm5Ud3I3WGJSS2ErQVQ5RjdYRlhUMENuS25yRnYwVHUzMnIrQUJQaFRVTlMrSTJUM1pNPQ==";
const QString WY_PLAYLIST_DATA_URL          = "SDBaSmFYMlhNdk50TFZ4VkNFY1dRUDdtYk9icVAvOWwveCtXWXliZVVjQmFHeXBwdnp3LzJnWjB2cVlBeG1uV0VKTkNScVR2c3ROQmtQRjVVcFIyZWRRVkVFRkFSQlphVGlxeTU3Z0tRT2s9";
const QString WY_PLAYLIST_INFO_URL          = "VUdTa0xMeG1Nblc4cThoS2E1QzhJK0lrTHJBRmk4TUJZMC9NQW1GanZydDJmR0VJVVRZNmJQSEhOZU96aE55bTJxdW55RldJOHl6aElNdTlHbkZkSmc9PQ==";
const QString WY_PLAYLIST_INFO_DATA_URL     = "VkpFemFKQWtOY2ZXeUNpZ210VjVGYndOZ2VibUZlZHV6amZJaE5VL1czaWFzRkNqV2lYKy9CR29McXl6LzUrUldWcmtKS0Fjb0s5dFBFeXpCaHRCc1dhYlp1bGd3U1ZY";


class QNetworkRequest;

/*! @brief The namespace of the wangyi request interface.
 * @author Greedysky <greedysky@163.com>
 */
namespace MusicWYInterface
{
    /*!
     * Make request query data.
     */
    void makeRequestRawHeader(QNetworkRequest *request);

    /*!
     * Make token query request.
     */
    QByteArray makeTokenRequest(QNetworkRequest *request, const QString &query, const QString &type);

    /*!
     * Read tags(size\bitrate\url) from query results.
     */
    void parseFromSongProperty(TTK::MusicSongInformation *info, int bitrate);
    /*!
     * Read tags(size\bitrate\url) from query results.
     */
    void parseFromSongProperty(TTK::MusicSongInformation *info, const QVariantMap &key, TTK::QueryQuality quality, bool all);
    /*!
     * Read tags(size\bitrate\url) from query results.
     */
    void parseFromSongPropertyNew(TTK::MusicSongInformation *info, int bitrate) ;
    /*!
     * Read tags(size\bitrate\url) from query results.
     */
    void parseFromSongPropertyNew(TTK::MusicSongInformation *info, const QVariantMap &key, TTK::QueryQuality quality, bool all);

}

#endif // MUSICWYQUERYINTERFACE_H
