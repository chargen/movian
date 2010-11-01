/*
 *  Video playback from file access
 *  Copyright (C) 2009 Andreas Öman
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef FA_VIDEO_H
#define FA_VIDEO_H

#include "media.h"
struct backend;

event_t *be_file_playvideo(const char *url, media_pipe_t *mp,
			   int primary, int priority,
			   char *errbuf, size_t errlen);

#endif /* FA_VIDEO_H */
