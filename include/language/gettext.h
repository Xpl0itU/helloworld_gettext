/****************************************************************************
 * Copyright (C) 2015 Dimok
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 ****************************************************************************/
#ifndef _GETTEXT_H_
#define _GETTEXT_H_

#include <wut_types.h>

#ifdef __cplusplus
extern "C"
{
#endif

#define tr(s) gettext(s)
#define trNOOP(s) s

BOOL gettextLoadLanguage(const char* langFile);
void gettextCleanUp(void);
/*
 * input msg = a text in ASCII
 * output = the translated msg in utf-8
 */
const char *gettext(const char *msg);
#define tr(s) gettext(s)
#define trNOOP(s)   s

#ifdef __cplusplus
}
#endif

#endif /* _GETTEXT_H_ */
