///////////////////////////////////////////////////////////////////////////////
//
//                          IMPORTANT NOTICE
//
// The following open source license statement does not apply to any
// entity in the Exception List published by FMSoft.
//
// For more information, please visit:
//
// https://www.fmsoft.cn/exception-list
//
//////////////////////////////////////////////////////////////////////////////
/*
 * \file 
 * \author FMSoft
 * \date 
 *
 \verbatim

    This file is part of mGNCS4Touch, one of MiniGUI components.

    Copyright (C) 2008-2018 FMSoft (http://www.fmsoft.cn).

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.

    Or,

    As this program is a library, any link to this program must follow
    GNU General Public License version 3 (GPLv3). If you cannot accept
    GPLv3, you need to be licensed from FMSoft.

    If you have got a commercial license of this program, please use it
    under the terms and conditions of the commercial license.

    For more information about the commercial license, please refer to
    <http://www.minigui.com/blog/minigui-licensing-policy/>.

 \endverbatim
*/

#ifndef _MGNCS_INDICATORPIECE_H
#define _MGNCS_INDICATORPIECE_H

#include <mgplus/mgplus.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

enum mIndicatorPieceProps {
    NCSP_INDICATOR_COLOR = USER_PIECE_PROP_BEGIN + 0x810,
};

typedef struct _mIndicatorPiece mIndicatorPiece;
typedef struct _mIndicatorPieceClass mIndicatorPieceClass;

#define mIndicatorPieceHeader(clss) \
	mStaticPieceHeader(clss) \
    ARGB color; \
    HGRAPHICS hgs; \
    HBRUSH brush; \
    int hgs_width; \
    int hgs_height;

struct _mIndicatorPiece
{
	mIndicatorPieceHeader(mIndicatorPiece)
};

#define mIndicatorPieceClassHeader(clss, superCls) \
	mStaticPieceClassHeader(clss, superCls)

struct _mIndicatorPieceClass
{
	mIndicatorPieceClassHeader(mIndicatorPiece, mStaticPiece)
};

MGNCS_EXPORT extern mIndicatorPieceClass g_stmIndicatorPieceCls;

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* _MGNCS_INDICATORPIECE_H */
