/*
* guunits.c
* guunits
*
* Created by Callum McColl on 05/06/2019.
* Copyright © 2019 Callum McColl. All rights reserved.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions
* are met:
*
* 1. Redistributions of source code must retain the above copyright
*    notice, this list of conditions and the following disclaimer.
*
* 2. Redistributions in binary form must reproduce the above
*    copyright notice, this list of conditions and the following
*    disclaimer in the documentation and/or other materials
*    provided with the distribution.
*
* 3. All advertising materials mentioning features or use of this
*    software must display the following acknowledgement:
*
*        This product includes software developed by Callum McColl.
*
* 4. Neither the name of the author nor the names of contributors
*    may be used to endorse or promote products derived from this
*    software without specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
* "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
* LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
* A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER
* OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
* EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
* PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
* PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
* LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
* NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
* SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*
* -----------------------------------------------------------------------
* This program is free software; you can redistribute it and/or
* modify it under the above terms or under the terms of the GNU
* General Public License as published by the Free Software Foundation;
* either version 2 of the License, or (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; if not, see http://www.gnu.org/licenses/
* or write to the Free Software Foundation, Inc., 51 Franklin Street,
* Fifth Floor, Boston, MA  02110-1301, USA.
*
*/


#include "guunits.h"

#include <math.h>
#include <gu_util.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

// Distance Conversion Functions

/**
 * Convert centimetres_d to centimetres_f.
 */
centimetres_f cm_d_to_cm_f(centimetres_d centimetres)
{
    return ((centimetres_f) (centimetres));
}

/**
 * Convert centimetres_d to centimetres_t.
 */
centimetres_t cm_d_to_cm_t(centimetres_d centimetres)
{
    return ((centimetres_t) (round(((double) (centimetres)))));
}

/**
 * Convert centimetres_d to centimetres_u.
 */
centimetres_u cm_d_to_cm_u(centimetres_d centimetres)
{
    return ((centimetres_u) (round(((double) (centimetres)))));
}

/**
 * Convert centimetres_d to double.
 */
double cm_d_to_d(centimetres_d centimetres)
{
    return ((double) (centimetres));
}

/**
 * Convert centimetres_d to float.
 */
float cm_d_to_f(centimetres_d centimetres)
{
    return ((float) (centimetres));
}

/**
 * Convert centimetres_d to int.
 */
int cm_d_to_i(centimetres_d centimetres)
{
    return ((int) (((centimetres_d) (round(centimetres)))));
}

/**
 * Convert centimetres_d to int16_t.
 */
int16_t cm_d_to_i16(centimetres_d centimetres)
{
    return ((int16_t) (((centimetres_d) (round(centimetres)))));
}

/**
 * Convert centimetres_d to int32_t.
 */
int32_t cm_d_to_i32(centimetres_d centimetres)
{
    return ((int32_t) (((centimetres_d) (round(centimetres)))));
}

/**
 * Convert centimetres_d to int64_t.
 */
int64_t cm_d_to_i64(centimetres_d centimetres)
{
    return ((int64_t) (((centimetres_d) (round(centimetres)))));
}

/**
 * Convert centimetres_d to int8_t.
 */
int8_t cm_d_to_i8(centimetres_d centimetres)
{
    return ((int8_t) (((centimetres_d) (round(centimetres)))));
}

/**
 * Convert centimetres_d to metres_d.
 */
metres_d cm_d_to_m_d(centimetres_d centimetres)
{
    return ((metres_d) (round(((double) (((centimetres_d) (round(((double) (centimetres))))) / 100.0)))));
}

/**
 * Convert centimetres_d to metres_f.
 */
metres_f cm_d_to_m_f(centimetres_d centimetres)
{
    return ((metres_f) (((centimetres_d) (round(((double) (centimetres))))) / 100.0));
}

/**
 * Convert centimetres_d to metres_t.
 */
metres_t cm_d_to_m_t(centimetres_d centimetres)
{
    return ((metres_t) (round(((double) (((centimetres_d) (round(((double) (centimetres))))) / 100.0)))));
}

/**
 * Convert centimetres_d to metres_u.
 */
metres_u cm_d_to_m_u(centimetres_d centimetres)
{
    return ((metres_u) (round(((double) (((centimetres_d) (round(((double) (centimetres))))) / 100.0)))));
}

/**
 * Convert centimetres_d to millimetres_d.
 */
millimetres_d cm_d_to_mm_d(centimetres_d centimetres)
{
    return ((millimetres_d) (round(((double) (centimetres * 10.0)))));
}

/**
 * Convert centimetres_d to millimetres_f.
 */
millimetres_f cm_d_to_mm_f(centimetres_d centimetres)
{
    return ((millimetres_f) (centimetres * 10.0));
}

/**
 * Convert centimetres_d to millimetres_t.
 */
millimetres_t cm_d_to_mm_t(centimetres_d centimetres)
{
    return ((millimetres_t) (round(((double) (centimetres * 10.0)))));
}

/**
 * Convert centimetres_d to millimetres_u.
 */
millimetres_u cm_d_to_mm_u(centimetres_d centimetres)
{
    return ((millimetres_u) (round(((double) (centimetres * 10.0)))));
}

/**
 * Convert centimetres_d to uint16_t.
 */
uint16_t cm_d_to_u16(centimetres_d centimetres)
{
    return ((uint16_t) (MAX(((centimetres_d) (0)), ((centimetres_d) (round(centimetres))))));
}

/**
 * Convert centimetres_d to uint32_t.
 */
uint32_t cm_d_to_u32(centimetres_d centimetres)
{
    return ((uint32_t) (MAX(((centimetres_d) (0)), ((centimetres_d) (round(centimetres))))));
}

/**
 * Convert centimetres_d to uint64_t.
 */
uint64_t cm_d_to_u64(centimetres_d centimetres)
{
    return ((uint64_t) (MAX(((centimetres_d) (0)), ((centimetres_d) (round(centimetres))))));
}

/**
 * Convert centimetres_d to uint8_t.
 */
uint8_t cm_d_to_u8(centimetres_d centimetres)
{
    return ((uint8_t) (MAX(((centimetres_d) (0)), ((centimetres_d) (round(centimetres))))));
}

/**
 * Convert centimetres_d to unsigned int.
 */
unsigned int cm_d_to_u(centimetres_d centimetres)
{
    return ((unsigned int) (MAX(((centimetres_d) (0)), ((centimetres_d) (round(centimetres))))));
}

/**
 * Convert centimetres_f to centimetres_d.
 */
centimetres_d cm_f_to_cm_d(centimetres_f centimetres)
{
    return ((centimetres_d) (centimetres));
}

/**
 * Convert centimetres_f to centimetres_t.
 */
centimetres_t cm_f_to_cm_t(centimetres_f centimetres)
{
    return ((centimetres_t) (round(((double) (centimetres)))));
}

/**
 * Convert centimetres_f to centimetres_u.
 */
centimetres_u cm_f_to_cm_u(centimetres_f centimetres)
{
    return ((centimetres_u) (round(((double) (centimetres)))));
}

/**
 * Convert centimetres_f to double.
 */
double cm_f_to_d(centimetres_f centimetres)
{
    return ((double) (centimetres));
}

/**
 * Convert centimetres_f to float.
 */
float cm_f_to_f(centimetres_f centimetres)
{
    return ((float) (centimetres));
}

/**
 * Convert centimetres_f to int.
 */
int cm_f_to_i(centimetres_f centimetres)
{
    return ((int) (((centimetres_f) (round(((double) (centimetres)))))));
}

/**
 * Convert centimetres_f to int16_t.
 */
int16_t cm_f_to_i16(centimetres_f centimetres)
{
    return ((int16_t) (((centimetres_f) (round(((double) (centimetres)))))));
}

/**
 * Convert centimetres_f to int32_t.
 */
int32_t cm_f_to_i32(centimetres_f centimetres)
{
    return ((int32_t) (((centimetres_f) (round(((double) (centimetres)))))));
}

/**
 * Convert centimetres_f to int64_t.
 */
int64_t cm_f_to_i64(centimetres_f centimetres)
{
    return ((int64_t) (((centimetres_f) (round(((double) (centimetres)))))));
}

/**
 * Convert centimetres_f to int8_t.
 */
int8_t cm_f_to_i8(centimetres_f centimetres)
{
    return ((int8_t) (((centimetres_f) (round(((double) (centimetres)))))));
}

/**
 * Convert centimetres_f to metres_d.
 */
metres_d cm_f_to_m_d(centimetres_f centimetres)
{
    return ((metres_d) (round(((double) (((centimetres_d) (centimetres)) / 100.0)))));
}

/**
 * Convert centimetres_f to metres_f.
 */
metres_f cm_f_to_m_f(centimetres_f centimetres)
{
    return ((metres_f) (((centimetres_d) (centimetres)) / 100.0));
}

/**
 * Convert centimetres_f to metres_t.
 */
metres_t cm_f_to_m_t(centimetres_f centimetres)
{
    return ((metres_t) (round(((double) (((centimetres_d) (centimetres)) / 100.0)))));
}

/**
 * Convert centimetres_f to metres_u.
 */
metres_u cm_f_to_m_u(centimetres_f centimetres)
{
    return ((metres_u) (round(((double) (((centimetres_d) (centimetres)) / 100.0)))));
}

/**
 * Convert centimetres_f to millimetres_d.
 */
millimetres_d cm_f_to_mm_d(centimetres_f centimetres)
{
    return ((millimetres_d) (centimetres * 10.0f));
}

/**
 * Convert centimetres_f to millimetres_f.
 */
millimetres_f cm_f_to_mm_f(centimetres_f centimetres)
{
    return ((millimetres_f) (round(((double) (centimetres * 10.0f)))));
}

/**
 * Convert centimetres_f to millimetres_t.
 */
millimetres_t cm_f_to_mm_t(centimetres_f centimetres)
{
    return ((millimetres_t) (round(((double) (centimetres * 10.0f)))));
}

/**
 * Convert centimetres_f to millimetres_u.
 */
millimetres_u cm_f_to_mm_u(centimetres_f centimetres)
{
    return ((millimetres_u) (round(((double) (centimetres * 10.0f)))));
}

/**
 * Convert centimetres_f to uint16_t.
 */
uint16_t cm_f_to_u16(centimetres_f centimetres)
{
    return ((uint16_t) (MAX(((centimetres_f) (0)), ((centimetres_f) (round(((double) (centimetres))))))));
}

/**
 * Convert centimetres_f to uint32_t.
 */
uint32_t cm_f_to_u32(centimetres_f centimetres)
{
    return ((uint32_t) (MAX(((centimetres_f) (0)), ((centimetres_f) (round(((double) (centimetres))))))));
}

/**
 * Convert centimetres_f to uint64_t.
 */
uint64_t cm_f_to_u64(centimetres_f centimetres)
{
    return ((uint64_t) (MAX(((centimetres_f) (0)), ((centimetres_f) (round(((double) (centimetres))))))));
}

/**
 * Convert centimetres_f to uint8_t.
 */
uint8_t cm_f_to_u8(centimetres_f centimetres)
{
    return ((uint8_t) (MAX(((centimetres_f) (0)), ((centimetres_f) (round(((double) (centimetres))))))));
}

/**
 * Convert centimetres_f to unsigned int.
 */
unsigned int cm_f_to_u(centimetres_f centimetres)
{
    return ((unsigned int) (MAX(((centimetres_f) (0)), ((centimetres_f) (round(((double) (centimetres))))))));
}

/**
 * Convert centimetres_t to centimetres_d.
 */
centimetres_d cm_t_to_cm_d(centimetres_t centimetres)
{
    return ((centimetres_d) (centimetres));
}

/**
 * Convert centimetres_t to centimetres_f.
 */
centimetres_f cm_t_to_cm_f(centimetres_t centimetres)
{
    return ((centimetres_f) (centimetres));
}

/**
 * Convert centimetres_t to centimetres_u.
 */
centimetres_u cm_t_to_cm_u(centimetres_t centimetres)
{
    return ((centimetres_u) ((centimetres) < 0 ? 0 : centimetres));
}

/**
 * Convert centimetres_t to double.
 */
double cm_t_to_d(centimetres_t centimetres)
{
    return ((double) (centimetres));
}

/**
 * Convert centimetres_t to float.
 */
float cm_t_to_f(centimetres_t centimetres)
{
    return ((float) (centimetres));
}

/**
 * Convert centimetres_t to int.
 */
int cm_t_to_i(centimetres_t centimetres)
{
    return ((int) (centimetres));
}

/**
 * Convert centimetres_t to int16_t.
 */
int16_t cm_t_to_i16(centimetres_t centimetres)
{
    return ((int16_t) (MIN(((centimetres_t) (SHRT_MAX)), MAX(((centimetres_t) (SHRT_MIN)), centimetres))));
}

/**
 * Convert centimetres_t to int32_t.
 */
int32_t cm_t_to_i32(centimetres_t centimetres)
{
    return ((int32_t) (MIN(((centimetres_t) (INT_MAX)), MAX(((centimetres_t) (INT_MIN)), centimetres))));
}

/**
 * Convert centimetres_t to int64_t.
 */
int64_t cm_t_to_i64(centimetres_t centimetres)
{
    return ((int64_t) (centimetres));
}

/**
 * Convert centimetres_t to int8_t.
 */
int8_t cm_t_to_i8(centimetres_t centimetres)
{
    return ((int8_t) (MIN(((centimetres_t) (127)), MAX(((centimetres_t) (-128)), centimetres))));
}

/**
 * Convert centimetres_t to metres_d.
 */
metres_d cm_t_to_m_d(centimetres_t centimetres)
{
    return ((metres_d) (round(((double) (((centimetres_d) (centimetres)) / 100.0)))));
}

/**
 * Convert centimetres_t to metres_f.
 */
metres_f cm_t_to_m_f(centimetres_t centimetres)
{
    return ((metres_f) (((centimetres_d) (centimetres)) / 100.0));
}

/**
 * Convert centimetres_t to metres_t.
 */
metres_t cm_t_to_m_t(centimetres_t centimetres)
{
    return ((metres_t) (round(((double) (((centimetres_d) (centimetres)) / 100.0)))));
}

/**
 * Convert centimetres_t to metres_u.
 */
metres_u cm_t_to_m_u(centimetres_t centimetres)
{
    return ((metres_u) (round(((double) (((centimetres_d) (centimetres)) / 100.0)))));
}

/**
 * Convert centimetres_t to millimetres_d.
 */
millimetres_d cm_t_to_mm_d(centimetres_t centimetres)
{
    return ((millimetres_d) (centimetres * 10));
}

/**
 * Convert centimetres_t to millimetres_f.
 */
millimetres_f cm_t_to_mm_f(centimetres_t centimetres)
{
    return ((millimetres_f) (centimetres * 10));
}

/**
 * Convert centimetres_t to millimetres_t.
 */
millimetres_t cm_t_to_mm_t(centimetres_t centimetres)
{
    return ((millimetres_t) (round(((double) (centimetres * 10)))));
}

/**
 * Convert centimetres_t to millimetres_u.
 */
millimetres_u cm_t_to_mm_u(centimetres_t centimetres)
{
    return ((millimetres_u) ((centimetres * 10) < 0 ? 0 : centimetres * 10));
}

/**
 * Convert centimetres_t to uint16_t.
 */
uint16_t cm_t_to_u16(centimetres_t centimetres)
{
    return ((uint16_t) (MAX(((centimetres_t) (0)), centimetres)));
}

/**
 * Convert centimetres_t to uint32_t.
 */
uint32_t cm_t_to_u32(centimetres_t centimetres)
{
    return ((uint32_t) (MAX(((centimetres_t) (0)), centimetres)));
}

/**
 * Convert centimetres_t to uint64_t.
 */
uint64_t cm_t_to_u64(centimetres_t centimetres)
{
    return ((uint64_t) (MAX(((centimetres_t) (0)), centimetres)));
}

/**
 * Convert centimetres_t to uint8_t.
 */
uint8_t cm_t_to_u8(centimetres_t centimetres)
{
    return ((uint8_t) (MAX(((centimetres_t) (0)), centimetres)));
}

/**
 * Convert centimetres_t to unsigned int.
 */
unsigned int cm_t_to_u(centimetres_t centimetres)
{
    return ((unsigned int) (MAX(((centimetres_t) (0)), centimetres)));
}

/**
 * Convert centimetres_u to centimetres_d.
 */
centimetres_d cm_u_to_cm_d(centimetres_u centimetres)
{
    return ((centimetres_d) (centimetres));
}

/**
 * Convert centimetres_u to centimetres_f.
 */
centimetres_f cm_u_to_cm_f(centimetres_u centimetres)
{
    return ((centimetres_f) (centimetres));
}

/**
 * Convert centimetres_u to centimetres_t.
 */
centimetres_t cm_u_to_cm_t(centimetres_u centimetres)
{
    return ((centimetres_t) ((centimetres) > ((unsigned int) (INT_MAX)) ? ((unsigned int) (INT_MAX)) : centimetres));
}

/**
 * Convert centimetres_u to double.
 */
double cm_u_to_d(centimetres_u centimetres)
{
    return ((double) (MIN(((centimetres_u) (INT_MAX)), centimetres)));
}

/**
 * Convert centimetres_u to float.
 */
float cm_u_to_f(centimetres_u centimetres)
{
    return ((float) (MIN(((centimetres_u) (INT_MAX)), centimetres)));
}

/**
 * Convert centimetres_u to int.
 */
int cm_u_to_i(centimetres_u centimetres)
{
    return ((int) (MIN(((centimetres_u) (INT_MAX)), centimetres)));
}

/**
 * Convert centimetres_u to int16_t.
 */
int16_t cm_u_to_i16(centimetres_u centimetres)
{
    return ((int16_t) (MIN(((centimetres_u) (SHRT_MAX)), centimetres)));
}

/**
 * Convert centimetres_u to int32_t.
 */
int32_t cm_u_to_i32(centimetres_u centimetres)
{
    return ((int32_t) (MIN(((centimetres_u) (INT_MAX)), centimetres)));
}

/**
 * Convert centimetres_u to int64_t.
 */
int64_t cm_u_to_i64(centimetres_u centimetres)
{
    return ((int64_t) (centimetres));
}

/**
 * Convert centimetres_u to int8_t.
 */
int8_t cm_u_to_i8(centimetres_u centimetres)
{
    return ((int8_t) (MIN(((centimetres_u) (127)), centimetres)));
}

/**
 * Convert centimetres_u to metres_d.
 */
metres_d cm_u_to_m_d(centimetres_u centimetres)
{
    return ((metres_d) (round(((double) (((centimetres_d) (centimetres)) / 100.0)))));
}

/**
 * Convert centimetres_u to metres_f.
 */
metres_f cm_u_to_m_f(centimetres_u centimetres)
{
    return ((metres_f) (((centimetres_d) (centimetres)) / 100.0));
}

/**
 * Convert centimetres_u to metres_t.
 */
metres_t cm_u_to_m_t(centimetres_u centimetres)
{
    return ((metres_t) (round(((double) (((centimetres_d) (centimetres)) / 100.0)))));
}

/**
 * Convert centimetres_u to metres_u.
 */
metres_u cm_u_to_m_u(centimetres_u centimetres)
{
    return ((metres_u) (round(((double) (((centimetres_d) (centimetres)) / 100.0)))));
}

/**
 * Convert centimetres_u to millimetres_d.
 */
millimetres_d cm_u_to_mm_d(centimetres_u centimetres)
{
    return ((millimetres_d) (centimetres * 10));
}

/**
 * Convert centimetres_u to millimetres_f.
 */
millimetres_f cm_u_to_mm_f(centimetres_u centimetres)
{
    return ((millimetres_f) (centimetres * 10));
}

/**
 * Convert centimetres_u to millimetres_t.
 */
millimetres_t cm_u_to_mm_t(centimetres_u centimetres)
{
    return ((millimetres_t) ((centimetres * 10) > ((unsigned int) (INT_MAX)) ? ((unsigned int) (INT_MAX)) : centimetres * 10));
}

/**
 * Convert centimetres_u to millimetres_u.
 */
millimetres_u cm_u_to_mm_u(centimetres_u centimetres)
{
    return ((millimetres_u) (round(((double) (centimetres * 10)))));
}

/**
 * Convert centimetres_u to uint16_t.
 */
uint16_t cm_u_to_u16(centimetres_u centimetres)
{
    return ((uint16_t) (MIN(((centimetres_u) (USHRT_MAX)), MAX(((centimetres_u) (0)), centimetres))));
}

/**
 * Convert centimetres_u to uint32_t.
 */
uint32_t cm_u_to_u32(centimetres_u centimetres)
{
    return ((uint32_t) (MIN(((centimetres_u) (UINT_MAX)), MAX(((centimetres_u) (0)), centimetres))));
}

/**
 * Convert centimetres_u to uint64_t.
 */
uint64_t cm_u_to_u64(centimetres_u centimetres)
{
    return ((uint64_t) (centimetres));
}

/**
 * Convert centimetres_u to uint8_t.
 */
uint8_t cm_u_to_u8(centimetres_u centimetres)
{
    return ((uint8_t) (MIN(((centimetres_u) (255)), MAX(((centimetres_u) (0)), centimetres))));
}

/**
 * Convert centimetres_u to unsigned int.
 */
unsigned int cm_u_to_u(centimetres_u centimetres)
{
    return ((unsigned int) (centimetres));
}

/**
 * Convert double to centimetres_d.
 */
centimetres_d d_to_cm_d(double centimetres)
{
    return ((centimetres_d) (centimetres));
}

/**
 * Convert double to centimetres_f.
 */
centimetres_f d_to_cm_f(double centimetres)
{
    return ((centimetres_f) (centimetres));
}

/**
 * Convert double to centimetres_t.
 */
centimetres_t d_to_cm_t(double centimetres)
{
    return ((centimetres_t) (((double) (round(centimetres)))));
}

/**
 * Convert double to centimetres_u.
 */
centimetres_u d_to_cm_u(double centimetres)
{
    return ((centimetres_u) (MAX(((double) (0)), ((double) (round(centimetres))))));
}

/**
 * Convert double to metres_d.
 */
metres_d d_to_m_d(double metres)
{
    return ((metres_d) (metres));
}

/**
 * Convert double to metres_f.
 */
metres_f d_to_m_f(double metres)
{
    return ((metres_f) (metres));
}

/**
 * Convert double to metres_t.
 */
metres_t d_to_m_t(double metres)
{
    return ((metres_t) (((double) (round(metres)))));
}

/**
 * Convert double to metres_u.
 */
metres_u d_to_m_u(double metres)
{
    return ((metres_u) (MAX(((double) (0)), ((double) (round(metres))))));
}

/**
 * Convert double to millimetres_d.
 */
millimetres_d d_to_mm_d(double millimetres)
{
    return ((millimetres_d) (millimetres));
}

/**
 * Convert double to millimetres_f.
 */
millimetres_f d_to_mm_f(double millimetres)
{
    return ((millimetres_f) (millimetres));
}

/**
 * Convert double to millimetres_t.
 */
millimetres_t d_to_mm_t(double millimetres)
{
    return ((millimetres_t) (((double) (round(millimetres)))));
}

/**
 * Convert double to millimetres_u.
 */
millimetres_u d_to_mm_u(double millimetres)
{
    return ((millimetres_u) (MAX(((double) (0)), ((double) (round(millimetres))))));
}

/**
 * Convert float to centimetres_d.
 */
centimetres_d f_to_cm_d(float centimetres)
{
    return ((centimetres_d) (centimetres));
}

/**
 * Convert float to centimetres_f.
 */
centimetres_f f_to_cm_f(float centimetres)
{
    return ((centimetres_f) (centimetres));
}

/**
 * Convert float to centimetres_t.
 */
centimetres_t f_to_cm_t(float centimetres)
{
    return ((centimetres_t) (((float) (round(((double) (centimetres)))))));
}

/**
 * Convert float to centimetres_u.
 */
centimetres_u f_to_cm_u(float centimetres)
{
    return ((centimetres_u) (MAX(((float) (0)), ((float) (round(((double) (centimetres))))))));
}

/**
 * Convert float to metres_d.
 */
metres_d f_to_m_d(float metres)
{
    return ((metres_d) (metres));
}

/**
 * Convert float to metres_f.
 */
metres_f f_to_m_f(float metres)
{
    return ((metres_f) (metres));
}

/**
 * Convert float to metres_t.
 */
metres_t f_to_m_t(float metres)
{
    return ((metres_t) (((float) (round(((double) (metres)))))));
}

/**
 * Convert float to metres_u.
 */
metres_u f_to_m_u(float metres)
{
    return ((metres_u) (MAX(((float) (0)), ((float) (round(((double) (metres))))))));
}

/**
 * Convert float to millimetres_d.
 */
millimetres_d f_to_mm_d(float millimetres)
{
    return ((millimetres_d) (millimetres));
}

/**
 * Convert float to millimetres_f.
 */
millimetres_f f_to_mm_f(float millimetres)
{
    return ((millimetres_f) (millimetres));
}

/**
 * Convert float to millimetres_t.
 */
millimetres_t f_to_mm_t(float millimetres)
{
    return ((millimetres_t) (((float) (round(((double) (millimetres)))))));
}

/**
 * Convert float to millimetres_u.
 */
millimetres_u f_to_mm_u(float millimetres)
{
    return ((millimetres_u) (MAX(((float) (0)), ((float) (round(((double) (millimetres))))))));
}

/**
 * Convert int16_t to centimetres_d.
 */
centimetres_d i16_to_cm_d(int16_t centimetres)
{
    return ((centimetres_d) (centimetres));
}

/**
 * Convert int16_t to centimetres_f.
 */
centimetres_f i16_to_cm_f(int16_t centimetres)
{
    return ((centimetres_f) (centimetres));
}

/**
 * Convert int16_t to centimetres_t.
 */
centimetres_t i16_to_cm_t(int16_t centimetres)
{
    return ((centimetres_t) (centimetres));
}

/**
 * Convert int16_t to centimetres_u.
 */
centimetres_u i16_to_cm_u(int16_t centimetres)
{
    return ((centimetres_u) (MAX(((int16_t) (0)), centimetres)));
}

/**
 * Convert int16_t to metres_d.
 */
metres_d i16_to_m_d(int16_t metres)
{
    return ((metres_d) (metres));
}

/**
 * Convert int16_t to metres_f.
 */
metres_f i16_to_m_f(int16_t metres)
{
    return ((metres_f) (metres));
}

/**
 * Convert int16_t to metres_t.
 */
metres_t i16_to_m_t(int16_t metres)
{
    return ((metres_t) (metres));
}

/**
 * Convert int16_t to metres_u.
 */
metres_u i16_to_m_u(int16_t metres)
{
    return ((metres_u) (MAX(((int16_t) (0)), metres)));
}

/**
 * Convert int16_t to millimetres_d.
 */
millimetres_d i16_to_mm_d(int16_t millimetres)
{
    return ((millimetres_d) (millimetres));
}

/**
 * Convert int16_t to millimetres_f.
 */
millimetres_f i16_to_mm_f(int16_t millimetres)
{
    return ((millimetres_f) (millimetres));
}

/**
 * Convert int16_t to millimetres_t.
 */
millimetres_t i16_to_mm_t(int16_t millimetres)
{
    return ((millimetres_t) (millimetres));
}

/**
 * Convert int16_t to millimetres_u.
 */
millimetres_u i16_to_mm_u(int16_t millimetres)
{
    return ((millimetres_u) (MAX(((int16_t) (0)), millimetres)));
}

/**
 * Convert int32_t to centimetres_d.
 */
centimetres_d i32_to_cm_d(int32_t centimetres)
{
    return ((centimetres_d) (centimetres));
}

/**
 * Convert int32_t to centimetres_f.
 */
centimetres_f i32_to_cm_f(int32_t centimetres)
{
    return ((centimetres_f) (centimetres));
}

/**
 * Convert int32_t to centimetres_t.
 */
centimetres_t i32_to_cm_t(int32_t centimetres)
{
    return ((centimetres_t) (MIN(((int32_t) (INT_MAX)), MAX(((int32_t) (INT_MIN)), centimetres))));
}

/**
 * Convert int32_t to centimetres_u.
 */
centimetres_u i32_to_cm_u(int32_t centimetres)
{
    return ((centimetres_u) (MAX(((int32_t) (0)), centimetres)));
}

/**
 * Convert int32_t to metres_d.
 */
metres_d i32_to_m_d(int32_t metres)
{
    return ((metres_d) (metres));
}

/**
 * Convert int32_t to metres_f.
 */
metres_f i32_to_m_f(int32_t metres)
{
    return ((metres_f) (metres));
}

/**
 * Convert int32_t to metres_t.
 */
metres_t i32_to_m_t(int32_t metres)
{
    return ((metres_t) (MIN(((int32_t) (INT_MAX)), MAX(((int32_t) (INT_MIN)), metres))));
}

/**
 * Convert int32_t to metres_u.
 */
metres_u i32_to_m_u(int32_t metres)
{
    return ((metres_u) (MAX(((int32_t) (0)), metres)));
}

/**
 * Convert int32_t to millimetres_d.
 */
millimetres_d i32_to_mm_d(int32_t millimetres)
{
    return ((millimetres_d) (millimetres));
}

/**
 * Convert int32_t to millimetres_f.
 */
millimetres_f i32_to_mm_f(int32_t millimetres)
{
    return ((millimetres_f) (millimetres));
}

/**
 * Convert int32_t to millimetres_t.
 */
millimetres_t i32_to_mm_t(int32_t millimetres)
{
    return ((millimetres_t) (MIN(((int32_t) (INT_MAX)), MAX(((int32_t) (INT_MIN)), millimetres))));
}

/**
 * Convert int32_t to millimetres_u.
 */
millimetres_u i32_to_mm_u(int32_t millimetres)
{
    return ((millimetres_u) (MAX(((int32_t) (0)), millimetres)));
}

/**
 * Convert int64_t to centimetres_d.
 */
centimetres_d i64_to_cm_d(int64_t centimetres)
{
    return ((centimetres_d) (centimetres));
}

/**
 * Convert int64_t to centimetres_f.
 */
centimetres_f i64_to_cm_f(int64_t centimetres)
{
    return ((centimetres_f) (centimetres));
}

/**
 * Convert int64_t to centimetres_t.
 */
centimetres_t i64_to_cm_t(int64_t centimetres)
{
    return ((centimetres_t) (MIN(((int64_t) (INT_MAX)), MAX(((int64_t) (INT_MIN)), centimetres))));
}

/**
 * Convert int64_t to centimetres_u.
 */
centimetres_u i64_to_cm_u(int64_t centimetres)
{
    return ((centimetres_u) (MAX(((int64_t) (0)), centimetres)));
}

/**
 * Convert int64_t to metres_d.
 */
metres_d i64_to_m_d(int64_t metres)
{
    return ((metres_d) (metres));
}

/**
 * Convert int64_t to metres_f.
 */
metres_f i64_to_m_f(int64_t metres)
{
    return ((metres_f) (metres));
}

/**
 * Convert int64_t to metres_t.
 */
metres_t i64_to_m_t(int64_t metres)
{
    return ((metres_t) (MIN(((int64_t) (INT_MAX)), MAX(((int64_t) (INT_MIN)), metres))));
}

/**
 * Convert int64_t to metres_u.
 */
metres_u i64_to_m_u(int64_t metres)
{
    return ((metres_u) (MAX(((int64_t) (0)), metres)));
}

/**
 * Convert int64_t to millimetres_d.
 */
millimetres_d i64_to_mm_d(int64_t millimetres)
{
    return ((millimetres_d) (millimetres));
}

/**
 * Convert int64_t to millimetres_f.
 */
millimetres_f i64_to_mm_f(int64_t millimetres)
{
    return ((millimetres_f) (millimetres));
}

/**
 * Convert int64_t to millimetres_t.
 */
millimetres_t i64_to_mm_t(int64_t millimetres)
{
    return ((millimetres_t) (MIN(((int64_t) (INT_MAX)), MAX(((int64_t) (INT_MIN)), millimetres))));
}

/**
 * Convert int64_t to millimetres_u.
 */
millimetres_u i64_to_mm_u(int64_t millimetres)
{
    return ((millimetres_u) (MAX(((int64_t) (0)), millimetres)));
}

/**
 * Convert int8_t to centimetres_d.
 */
centimetres_d i8_to_cm_d(int8_t centimetres)
{
    return ((centimetres_d) (centimetres));
}

/**
 * Convert int8_t to centimetres_f.
 */
centimetres_f i8_to_cm_f(int8_t centimetres)
{
    return ((centimetres_f) (centimetres));
}

/**
 * Convert int8_t to centimetres_t.
 */
centimetres_t i8_to_cm_t(int8_t centimetres)
{
    return ((centimetres_t) (centimetres));
}

/**
 * Convert int8_t to centimetres_u.
 */
centimetres_u i8_to_cm_u(int8_t centimetres)
{
    return ((centimetres_u) (MAX(((int8_t) (0)), centimetres)));
}

/**
 * Convert int8_t to metres_d.
 */
metres_d i8_to_m_d(int8_t metres)
{
    return ((metres_d) (metres));
}

/**
 * Convert int8_t to metres_f.
 */
metres_f i8_to_m_f(int8_t metres)
{
    return ((metres_f) (metres));
}

/**
 * Convert int8_t to metres_t.
 */
metres_t i8_to_m_t(int8_t metres)
{
    return ((metres_t) (metres));
}

/**
 * Convert int8_t to metres_u.
 */
metres_u i8_to_m_u(int8_t metres)
{
    return ((metres_u) (MAX(((int8_t) (0)), metres)));
}

/**
 * Convert int8_t to millimetres_d.
 */
millimetres_d i8_to_mm_d(int8_t millimetres)
{
    return ((millimetres_d) (millimetres));
}

/**
 * Convert int8_t to millimetres_f.
 */
millimetres_f i8_to_mm_f(int8_t millimetres)
{
    return ((millimetres_f) (millimetres));
}

/**
 * Convert int8_t to millimetres_t.
 */
millimetres_t i8_to_mm_t(int8_t millimetres)
{
    return ((millimetres_t) (millimetres));
}

/**
 * Convert int8_t to millimetres_u.
 */
millimetres_u i8_to_mm_u(int8_t millimetres)
{
    return ((millimetres_u) (MAX(((int8_t) (0)), millimetres)));
}

/**
 * Convert int to centimetres_d.
 */
centimetres_d i_to_cm_d(int centimetres)
{
    return ((centimetres_d) (centimetres));
}

/**
 * Convert int to centimetres_f.
 */
centimetres_f i_to_cm_f(int centimetres)
{
    return ((centimetres_f) (centimetres));
}

/**
 * Convert int to centimetres_t.
 */
centimetres_t i_to_cm_t(int centimetres)
{
    return ((centimetres_t) (centimetres));
}

/**
 * Convert int to centimetres_u.
 */
centimetres_u i_to_cm_u(int centimetres)
{
    return ((centimetres_u) (MAX(((int) (0)), centimetres)));
}

/**
 * Convert int to metres_d.
 */
metres_d i_to_m_d(int metres)
{
    return ((metres_d) (metres));
}

/**
 * Convert int to metres_f.
 */
metres_f i_to_m_f(int metres)
{
    return ((metres_f) (metres));
}

/**
 * Convert int to metres_t.
 */
metres_t i_to_m_t(int metres)
{
    return ((metres_t) (metres));
}

/**
 * Convert int to metres_u.
 */
metres_u i_to_m_u(int metres)
{
    return ((metres_u) (MAX(((int) (0)), metres)));
}

/**
 * Convert int to millimetres_d.
 */
millimetres_d i_to_mm_d(int millimetres)
{
    return ((millimetres_d) (millimetres));
}

/**
 * Convert int to millimetres_f.
 */
millimetres_f i_to_mm_f(int millimetres)
{
    return ((millimetres_f) (millimetres));
}

/**
 * Convert int to millimetres_t.
 */
millimetres_t i_to_mm_t(int millimetres)
{
    return ((millimetres_t) (millimetres));
}

/**
 * Convert int to millimetres_u.
 */
millimetres_u i_to_mm_u(int millimetres)
{
    return ((millimetres_u) (MAX(((int) (0)), millimetres)));
}

/**
 * Convert metres_d to centimetres_d.
 */
centimetres_d m_d_to_cm_d(metres_d metres)
{
    return ((centimetres_d) (round(((double) (metres * 100.0)))));
}

/**
 * Convert metres_d to centimetres_f.
 */
centimetres_f m_d_to_cm_f(metres_d metres)
{
    return ((centimetres_f) (metres * 100.0));
}

/**
 * Convert metres_d to centimetres_t.
 */
centimetres_t m_d_to_cm_t(metres_d metres)
{
    return ((centimetres_t) (round(((double) (metres * 100.0)))));
}

/**
 * Convert metres_d to centimetres_u.
 */
centimetres_u m_d_to_cm_u(metres_d metres)
{
    return ((centimetres_u) (round(((double) (metres * 100.0)))));
}

/**
 * Convert metres_d to double.
 */
double m_d_to_d(metres_d metres)
{
    return ((double) (metres));
}

/**
 * Convert metres_d to float.
 */
float m_d_to_f(metres_d metres)
{
    return ((float) (metres));
}

/**
 * Convert metres_d to int.
 */
int m_d_to_i(metres_d metres)
{
    return ((int) (((metres_d) (round(metres)))));
}

/**
 * Convert metres_d to int16_t.
 */
int16_t m_d_to_i16(metres_d metres)
{
    return ((int16_t) (((metres_d) (round(metres)))));
}

/**
 * Convert metres_d to int32_t.
 */
int32_t m_d_to_i32(metres_d metres)
{
    return ((int32_t) (((metres_d) (round(metres)))));
}

/**
 * Convert metres_d to int64_t.
 */
int64_t m_d_to_i64(metres_d metres)
{
    return ((int64_t) (((metres_d) (round(metres)))));
}

/**
 * Convert metres_d to int8_t.
 */
int8_t m_d_to_i8(metres_d metres)
{
    return ((int8_t) (((metres_d) (round(metres)))));
}

/**
 * Convert metres_d to metres_f.
 */
metres_f m_d_to_m_f(metres_d metres)
{
    return ((metres_f) (metres));
}

/**
 * Convert metres_d to metres_t.
 */
metres_t m_d_to_m_t(metres_d metres)
{
    return ((metres_t) (round(((double) (metres)))));
}

/**
 * Convert metres_d to metres_u.
 */
metres_u m_d_to_m_u(metres_d metres)
{
    return ((metres_u) (round(((double) (metres)))));
}

/**
 * Convert metres_d to millimetres_d.
 */
millimetres_d m_d_to_mm_d(metres_d metres)
{
    return ((millimetres_d) (round(((double) (metres * 1000.0)))));
}

/**
 * Convert metres_d to millimetres_f.
 */
millimetres_f m_d_to_mm_f(metres_d metres)
{
    return ((millimetres_f) (metres * 1000.0));
}

/**
 * Convert metres_d to millimetres_t.
 */
millimetres_t m_d_to_mm_t(metres_d metres)
{
    return ((millimetres_t) (round(((double) (metres * 1000.0)))));
}

/**
 * Convert metres_d to millimetres_u.
 */
millimetres_u m_d_to_mm_u(metres_d metres)
{
    return ((millimetres_u) (round(((double) (metres * 1000.0)))));
}

/**
 * Convert metres_d to uint16_t.
 */
uint16_t m_d_to_u16(metres_d metres)
{
    return ((uint16_t) (MAX(((metres_d) (0)), ((metres_d) (round(metres))))));
}

/**
 * Convert metres_d to uint32_t.
 */
uint32_t m_d_to_u32(metres_d metres)
{
    return ((uint32_t) (MAX(((metres_d) (0)), ((metres_d) (round(metres))))));
}

/**
 * Convert metres_d to uint64_t.
 */
uint64_t m_d_to_u64(metres_d metres)
{
    return ((uint64_t) (MAX(((metres_d) (0)), ((metres_d) (round(metres))))));
}

/**
 * Convert metres_d to uint8_t.
 */
uint8_t m_d_to_u8(metres_d metres)
{
    return ((uint8_t) (MAX(((metres_d) (0)), ((metres_d) (round(metres))))));
}

/**
 * Convert metres_d to unsigned int.
 */
unsigned int m_d_to_u(metres_d metres)
{
    return ((unsigned int) (MAX(((metres_d) (0)), ((metres_d) (round(metres))))));
}

/**
 * Convert metres_f to centimetres_d.
 */
centimetres_d m_f_to_cm_d(metres_f metres)
{
    return ((centimetres_d) (metres * 100.0f));
}

/**
 * Convert metres_f to centimetres_f.
 */
centimetres_f m_f_to_cm_f(metres_f metres)
{
    return ((centimetres_f) (round(((double) (metres * 100.0f)))));
}

/**
 * Convert metres_f to centimetres_t.
 */
centimetres_t m_f_to_cm_t(metres_f metres)
{
    return ((centimetres_t) (round(((double) (metres * 100.0f)))));
}

/**
 * Convert metres_f to centimetres_u.
 */
centimetres_u m_f_to_cm_u(metres_f metres)
{
    return ((centimetres_u) (round(((double) (metres * 100.0f)))));
}

/**
 * Convert metres_f to double.
 */
double m_f_to_d(metres_f metres)
{
    return ((double) (metres));
}

/**
 * Convert metres_f to float.
 */
float m_f_to_f(metres_f metres)
{
    return ((float) (metres));
}

/**
 * Convert metres_f to int.
 */
int m_f_to_i(metres_f metres)
{
    return ((int) (((metres_f) (round(((double) (metres)))))));
}

/**
 * Convert metres_f to int16_t.
 */
int16_t m_f_to_i16(metres_f metres)
{
    return ((int16_t) (((metres_f) (round(((double) (metres)))))));
}

/**
 * Convert metres_f to int32_t.
 */
int32_t m_f_to_i32(metres_f metres)
{
    return ((int32_t) (((metres_f) (round(((double) (metres)))))));
}

/**
 * Convert metres_f to int64_t.
 */
int64_t m_f_to_i64(metres_f metres)
{
    return ((int64_t) (((metres_f) (round(((double) (metres)))))));
}

/**
 * Convert metres_f to int8_t.
 */
int8_t m_f_to_i8(metres_f metres)
{
    return ((int8_t) (((metres_f) (round(((double) (metres)))))));
}

/**
 * Convert metres_f to metres_d.
 */
metres_d m_f_to_m_d(metres_f metres)
{
    return ((metres_d) (metres));
}

/**
 * Convert metres_f to metres_t.
 */
metres_t m_f_to_m_t(metres_f metres)
{
    return ((metres_t) (round(((double) (metres)))));
}

/**
 * Convert metres_f to metres_u.
 */
metres_u m_f_to_m_u(metres_f metres)
{
    return ((metres_u) (round(((double) (metres)))));
}

/**
 * Convert metres_f to millimetres_d.
 */
millimetres_d m_f_to_mm_d(metres_f metres)
{
    return ((millimetres_d) (metres * 1000.0f));
}

/**
 * Convert metres_f to millimetres_f.
 */
millimetres_f m_f_to_mm_f(metres_f metres)
{
    return ((millimetres_f) (round(((double) (metres * 1000.0f)))));
}

/**
 * Convert metres_f to millimetres_t.
 */
millimetres_t m_f_to_mm_t(metres_f metres)
{
    return ((millimetres_t) (round(((double) (metres * 1000.0f)))));
}

/**
 * Convert metres_f to millimetres_u.
 */
millimetres_u m_f_to_mm_u(metres_f metres)
{
    return ((millimetres_u) (round(((double) (metres * 1000.0f)))));
}

/**
 * Convert metres_f to uint16_t.
 */
uint16_t m_f_to_u16(metres_f metres)
{
    return ((uint16_t) (MAX(((metres_f) (0)), ((metres_f) (round(((double) (metres))))))));
}

/**
 * Convert metres_f to uint32_t.
 */
uint32_t m_f_to_u32(metres_f metres)
{
    return ((uint32_t) (MAX(((metres_f) (0)), ((metres_f) (round(((double) (metres))))))));
}

/**
 * Convert metres_f to uint64_t.
 */
uint64_t m_f_to_u64(metres_f metres)
{
    return ((uint64_t) (MAX(((metres_f) (0)), ((metres_f) (round(((double) (metres))))))));
}

/**
 * Convert metres_f to uint8_t.
 */
uint8_t m_f_to_u8(metres_f metres)
{
    return ((uint8_t) (MAX(((metres_f) (0)), ((metres_f) (round(((double) (metres))))))));
}

/**
 * Convert metres_f to unsigned int.
 */
unsigned int m_f_to_u(metres_f metres)
{
    return ((unsigned int) (MAX(((metres_f) (0)), ((metres_f) (round(((double) (metres))))))));
}

/**
 * Convert metres_t to centimetres_d.
 */
centimetres_d m_t_to_cm_d(metres_t metres)
{
    return ((centimetres_d) (metres * 100));
}

/**
 * Convert metres_t to centimetres_f.
 */
centimetres_f m_t_to_cm_f(metres_t metres)
{
    return ((centimetres_f) (metres * 100));
}

/**
 * Convert metres_t to centimetres_t.
 */
centimetres_t m_t_to_cm_t(metres_t metres)
{
    return ((centimetres_t) (round(((double) (metres * 100)))));
}

/**
 * Convert metres_t to centimetres_u.
 */
centimetres_u m_t_to_cm_u(metres_t metres)
{
    return ((centimetres_u) ((metres * 100) < 0 ? 0 : metres * 100));
}

/**
 * Convert metres_t to double.
 */
double m_t_to_d(metres_t metres)
{
    return ((double) (metres));
}

/**
 * Convert metres_t to float.
 */
float m_t_to_f(metres_t metres)
{
    return ((float) (metres));
}

/**
 * Convert metres_t to int.
 */
int m_t_to_i(metres_t metres)
{
    return ((int) (metres));
}

/**
 * Convert metres_t to int16_t.
 */
int16_t m_t_to_i16(metres_t metres)
{
    return ((int16_t) (MIN(((metres_t) (SHRT_MAX)), MAX(((metres_t) (SHRT_MIN)), metres))));
}

/**
 * Convert metres_t to int32_t.
 */
int32_t m_t_to_i32(metres_t metres)
{
    return ((int32_t) (MIN(((metres_t) (INT_MAX)), MAX(((metres_t) (INT_MIN)), metres))));
}

/**
 * Convert metres_t to int64_t.
 */
int64_t m_t_to_i64(metres_t metres)
{
    return ((int64_t) (metres));
}

/**
 * Convert metres_t to int8_t.
 */
int8_t m_t_to_i8(metres_t metres)
{
    return ((int8_t) (MIN(((metres_t) (127)), MAX(((metres_t) (-128)), metres))));
}

/**
 * Convert metres_t to metres_d.
 */
metres_d m_t_to_m_d(metres_t metres)
{
    return ((metres_d) (metres));
}

/**
 * Convert metres_t to metres_f.
 */
metres_f m_t_to_m_f(metres_t metres)
{
    return ((metres_f) (metres));
}

/**
 * Convert metres_t to metres_u.
 */
metres_u m_t_to_m_u(metres_t metres)
{
    return ((metres_u) ((metres) < 0 ? 0 : metres));
}

/**
 * Convert metres_t to millimetres_d.
 */
millimetres_d m_t_to_mm_d(metres_t metres)
{
    return ((millimetres_d) (metres * 1000));
}

/**
 * Convert metres_t to millimetres_f.
 */
millimetres_f m_t_to_mm_f(metres_t metres)
{
    return ((millimetres_f) (metres * 1000));
}

/**
 * Convert metres_t to millimetres_t.
 */
millimetres_t m_t_to_mm_t(metres_t metres)
{
    return ((millimetres_t) (round(((double) (metres * 1000)))));
}

/**
 * Convert metres_t to millimetres_u.
 */
millimetres_u m_t_to_mm_u(metres_t metres)
{
    return ((millimetres_u) ((metres * 1000) < 0 ? 0 : metres * 1000));
}

/**
 * Convert metres_t to uint16_t.
 */
uint16_t m_t_to_u16(metres_t metres)
{
    return ((uint16_t) (MAX(((metres_t) (0)), metres)));
}

/**
 * Convert metres_t to uint32_t.
 */
uint32_t m_t_to_u32(metres_t metres)
{
    return ((uint32_t) (MAX(((metres_t) (0)), metres)));
}

/**
 * Convert metres_t to uint64_t.
 */
uint64_t m_t_to_u64(metres_t metres)
{
    return ((uint64_t) (MAX(((metres_t) (0)), metres)));
}

/**
 * Convert metres_t to uint8_t.
 */
uint8_t m_t_to_u8(metres_t metres)
{
    return ((uint8_t) (MAX(((metres_t) (0)), metres)));
}

/**
 * Convert metres_t to unsigned int.
 */
unsigned int m_t_to_u(metres_t metres)
{
    return ((unsigned int) (MAX(((metres_t) (0)), metres)));
}

/**
 * Convert metres_u to centimetres_d.
 */
centimetres_d m_u_to_cm_d(metres_u metres)
{
    return ((centimetres_d) (metres * 100));
}

/**
 * Convert metres_u to centimetres_f.
 */
centimetres_f m_u_to_cm_f(metres_u metres)
{
    return ((centimetres_f) (metres * 100));
}

/**
 * Convert metres_u to centimetres_t.
 */
centimetres_t m_u_to_cm_t(metres_u metres)
{
    return ((centimetres_t) ((metres * 100) > ((unsigned int) (INT_MAX)) ? ((unsigned int) (INT_MAX)) : metres * 100));
}

/**
 * Convert metres_u to centimetres_u.
 */
centimetres_u m_u_to_cm_u(metres_u metres)
{
    return ((centimetres_u) (round(((double) (metres * 100)))));
}

/**
 * Convert metres_u to double.
 */
double m_u_to_d(metres_u metres)
{
    return ((double) (MIN(((metres_u) (INT_MAX)), metres)));
}

/**
 * Convert metres_u to float.
 */
float m_u_to_f(metres_u metres)
{
    return ((float) (MIN(((metres_u) (INT_MAX)), metres)));
}

/**
 * Convert metres_u to int.
 */
int m_u_to_i(metres_u metres)
{
    return ((int) (MIN(((metres_u) (INT_MAX)), metres)));
}

/**
 * Convert metres_u to int16_t.
 */
int16_t m_u_to_i16(metres_u metres)
{
    return ((int16_t) (MIN(((metres_u) (SHRT_MAX)), metres)));
}

/**
 * Convert metres_u to int32_t.
 */
int32_t m_u_to_i32(metres_u metres)
{
    return ((int32_t) (MIN(((metres_u) (INT_MAX)), metres)));
}

/**
 * Convert metres_u to int64_t.
 */
int64_t m_u_to_i64(metres_u metres)
{
    return ((int64_t) (metres));
}

/**
 * Convert metres_u to int8_t.
 */
int8_t m_u_to_i8(metres_u metres)
{
    return ((int8_t) (MIN(((metres_u) (127)), metres)));
}

/**
 * Convert metres_u to metres_d.
 */
metres_d m_u_to_m_d(metres_u metres)
{
    return ((metres_d) (metres));
}

/**
 * Convert metres_u to metres_f.
 */
metres_f m_u_to_m_f(metres_u metres)
{
    return ((metres_f) (metres));
}

/**
 * Convert metres_u to metres_t.
 */
metres_t m_u_to_m_t(metres_u metres)
{
    return ((metres_t) ((metres) > ((unsigned int) (INT_MAX)) ? ((unsigned int) (INT_MAX)) : metres));
}

/**
 * Convert metres_u to millimetres_d.
 */
millimetres_d m_u_to_mm_d(metres_u metres)
{
    return ((millimetres_d) (metres * 1000));
}

/**
 * Convert metres_u to millimetres_f.
 */
millimetres_f m_u_to_mm_f(metres_u metres)
{
    return ((millimetres_f) (metres * 1000));
}

/**
 * Convert metres_u to millimetres_t.
 */
millimetres_t m_u_to_mm_t(metres_u metres)
{
    return ((millimetres_t) ((metres * 1000) > ((unsigned int) (INT_MAX)) ? ((unsigned int) (INT_MAX)) : metres * 1000));
}

/**
 * Convert metres_u to millimetres_u.
 */
millimetres_u m_u_to_mm_u(metres_u metres)
{
    return ((millimetres_u) (round(((double) (metres * 1000)))));
}

/**
 * Convert metres_u to uint16_t.
 */
uint16_t m_u_to_u16(metres_u metres)
{
    return ((uint16_t) (MIN(((metres_u) (USHRT_MAX)), MAX(((metres_u) (0)), metres))));
}

/**
 * Convert metres_u to uint32_t.
 */
uint32_t m_u_to_u32(metres_u metres)
{
    return ((uint32_t) (MIN(((metres_u) (UINT_MAX)), MAX(((metres_u) (0)), metres))));
}

/**
 * Convert metres_u to uint64_t.
 */
uint64_t m_u_to_u64(metres_u metres)
{
    return ((uint64_t) (metres));
}

/**
 * Convert metres_u to uint8_t.
 */
uint8_t m_u_to_u8(metres_u metres)
{
    return ((uint8_t) (MIN(((metres_u) (255)), MAX(((metres_u) (0)), metres))));
}

/**
 * Convert metres_u to unsigned int.
 */
unsigned int m_u_to_u(metres_u metres)
{
    return ((unsigned int) (metres));
}

/**
 * Convert millimetres_d to centimetres_d.
 */
centimetres_d mm_d_to_cm_d(millimetres_d millimetres)
{
    return ((centimetres_d) (round(((double) (((millimetres_d) (round(((double) (millimetres))))) / 10.0)))));
}

/**
 * Convert millimetres_d to centimetres_f.
 */
centimetres_f mm_d_to_cm_f(millimetres_d millimetres)
{
    return ((centimetres_f) (((millimetres_d) (round(((double) (millimetres))))) / 10.0));
}

/**
 * Convert millimetres_d to centimetres_t.
 */
centimetres_t mm_d_to_cm_t(millimetres_d millimetres)
{
    return ((centimetres_t) (round(((double) (((millimetres_d) (round(((double) (millimetres))))) / 10.0)))));
}

/**
 * Convert millimetres_d to centimetres_u.
 */
centimetres_u mm_d_to_cm_u(millimetres_d millimetres)
{
    return ((centimetres_u) (round(((double) (((millimetres_d) (round(((double) (millimetres))))) / 10.0)))));
}

/**
 * Convert millimetres_d to double.
 */
double mm_d_to_d(millimetres_d millimetres)
{
    return ((double) (millimetres));
}

/**
 * Convert millimetres_d to float.
 */
float mm_d_to_f(millimetres_d millimetres)
{
    return ((float) (millimetres));
}

/**
 * Convert millimetres_d to int.
 */
int mm_d_to_i(millimetres_d millimetres)
{
    return ((int) (((millimetres_d) (round(millimetres)))));
}

/**
 * Convert millimetres_d to int16_t.
 */
int16_t mm_d_to_i16(millimetres_d millimetres)
{
    return ((int16_t) (((millimetres_d) (round(millimetres)))));
}

/**
 * Convert millimetres_d to int32_t.
 */
int32_t mm_d_to_i32(millimetres_d millimetres)
{
    return ((int32_t) (((millimetres_d) (round(millimetres)))));
}

/**
 * Convert millimetres_d to int64_t.
 */
int64_t mm_d_to_i64(millimetres_d millimetres)
{
    return ((int64_t) (((millimetres_d) (round(millimetres)))));
}

/**
 * Convert millimetres_d to int8_t.
 */
int8_t mm_d_to_i8(millimetres_d millimetres)
{
    return ((int8_t) (((millimetres_d) (round(millimetres)))));
}

/**
 * Convert millimetres_d to metres_d.
 */
metres_d mm_d_to_m_d(millimetres_d millimetres)
{
    return ((metres_d) (round(((double) (((millimetres_d) (round(((double) (millimetres))))) / 1000.0)))));
}

/**
 * Convert millimetres_d to metres_f.
 */
metres_f mm_d_to_m_f(millimetres_d millimetres)
{
    return ((metres_f) (((millimetres_d) (round(((double) (millimetres))))) / 1000.0));
}

/**
 * Convert millimetres_d to metres_t.
 */
metres_t mm_d_to_m_t(millimetres_d millimetres)
{
    return ((metres_t) (round(((double) (((millimetres_d) (round(((double) (millimetres))))) / 1000.0)))));
}

/**
 * Convert millimetres_d to metres_u.
 */
metres_u mm_d_to_m_u(millimetres_d millimetres)
{
    return ((metres_u) (round(((double) (((millimetres_d) (round(((double) (millimetres))))) / 1000.0)))));
}

/**
 * Convert millimetres_d to millimetres_f.
 */
millimetres_f mm_d_to_mm_f(millimetres_d millimetres)
{
    return ((millimetres_f) (millimetres));
}

/**
 * Convert millimetres_d to millimetres_t.
 */
millimetres_t mm_d_to_mm_t(millimetres_d millimetres)
{
    return ((millimetres_t) (round(((double) (millimetres)))));
}

/**
 * Convert millimetres_d to millimetres_u.
 */
millimetres_u mm_d_to_mm_u(millimetres_d millimetres)
{
    return ((millimetres_u) (round(((double) (millimetres)))));
}

/**
 * Convert millimetres_d to uint16_t.
 */
uint16_t mm_d_to_u16(millimetres_d millimetres)
{
    return ((uint16_t) (MAX(((millimetres_d) (0)), ((millimetres_d) (round(millimetres))))));
}

/**
 * Convert millimetres_d to uint32_t.
 */
uint32_t mm_d_to_u32(millimetres_d millimetres)
{
    return ((uint32_t) (MAX(((millimetres_d) (0)), ((millimetres_d) (round(millimetres))))));
}

/**
 * Convert millimetres_d to uint64_t.
 */
uint64_t mm_d_to_u64(millimetres_d millimetres)
{
    return ((uint64_t) (MAX(((millimetres_d) (0)), ((millimetres_d) (round(millimetres))))));
}

/**
 * Convert millimetres_d to uint8_t.
 */
uint8_t mm_d_to_u8(millimetres_d millimetres)
{
    return ((uint8_t) (MAX(((millimetres_d) (0)), ((millimetres_d) (round(millimetres))))));
}

/**
 * Convert millimetres_d to unsigned int.
 */
unsigned int mm_d_to_u(millimetres_d millimetres)
{
    return ((unsigned int) (MAX(((millimetres_d) (0)), ((millimetres_d) (round(millimetres))))));
}

/**
 * Convert millimetres_f to centimetres_d.
 */
centimetres_d mm_f_to_cm_d(millimetres_f millimetres)
{
    return ((centimetres_d) (round(((double) (((millimetres_d) (millimetres)) / 10.0)))));
}

/**
 * Convert millimetres_f to centimetres_f.
 */
centimetres_f mm_f_to_cm_f(millimetres_f millimetres)
{
    return ((centimetres_f) (((millimetres_d) (millimetres)) / 10.0));
}

/**
 * Convert millimetres_f to centimetres_t.
 */
centimetres_t mm_f_to_cm_t(millimetres_f millimetres)
{
    return ((centimetres_t) (round(((double) (((millimetres_d) (millimetres)) / 10.0)))));
}

/**
 * Convert millimetres_f to centimetres_u.
 */
centimetres_u mm_f_to_cm_u(millimetres_f millimetres)
{
    return ((centimetres_u) (round(((double) (((millimetres_d) (millimetres)) / 10.0)))));
}

/**
 * Convert millimetres_f to double.
 */
double mm_f_to_d(millimetres_f millimetres)
{
    return ((double) (millimetres));
}

/**
 * Convert millimetres_f to float.
 */
float mm_f_to_f(millimetres_f millimetres)
{
    return ((float) (millimetres));
}

/**
 * Convert millimetres_f to int.
 */
int mm_f_to_i(millimetres_f millimetres)
{
    return ((int) (((millimetres_f) (round(((double) (millimetres)))))));
}

/**
 * Convert millimetres_f to int16_t.
 */
int16_t mm_f_to_i16(millimetres_f millimetres)
{
    return ((int16_t) (((millimetres_f) (round(((double) (millimetres)))))));
}

/**
 * Convert millimetres_f to int32_t.
 */
int32_t mm_f_to_i32(millimetres_f millimetres)
{
    return ((int32_t) (((millimetres_f) (round(((double) (millimetres)))))));
}

/**
 * Convert millimetres_f to int64_t.
 */
int64_t mm_f_to_i64(millimetres_f millimetres)
{
    return ((int64_t) (((millimetres_f) (round(((double) (millimetres)))))));
}

/**
 * Convert millimetres_f to int8_t.
 */
int8_t mm_f_to_i8(millimetres_f millimetres)
{
    return ((int8_t) (((millimetres_f) (round(((double) (millimetres)))))));
}

/**
 * Convert millimetres_f to metres_d.
 */
metres_d mm_f_to_m_d(millimetres_f millimetres)
{
    return ((metres_d) (round(((double) (((millimetres_d) (millimetres)) / 1000.0)))));
}

/**
 * Convert millimetres_f to metres_f.
 */
metres_f mm_f_to_m_f(millimetres_f millimetres)
{
    return ((metres_f) (((millimetres_d) (millimetres)) / 1000.0));
}

/**
 * Convert millimetres_f to metres_t.
 */
metres_t mm_f_to_m_t(millimetres_f millimetres)
{
    return ((metres_t) (round(((double) (((millimetres_d) (millimetres)) / 1000.0)))));
}

/**
 * Convert millimetres_f to metres_u.
 */
metres_u mm_f_to_m_u(millimetres_f millimetres)
{
    return ((metres_u) (round(((double) (((millimetres_d) (millimetres)) / 1000.0)))));
}

/**
 * Convert millimetres_f to millimetres_d.
 */
millimetres_d mm_f_to_mm_d(millimetres_f millimetres)
{
    return ((millimetres_d) (millimetres));
}

/**
 * Convert millimetres_f to millimetres_t.
 */
millimetres_t mm_f_to_mm_t(millimetres_f millimetres)
{
    return ((millimetres_t) (round(((double) (millimetres)))));
}

/**
 * Convert millimetres_f to millimetres_u.
 */
millimetres_u mm_f_to_mm_u(millimetres_f millimetres)
{
    return ((millimetres_u) (round(((double) (millimetres)))));
}

/**
 * Convert millimetres_f to uint16_t.
 */
uint16_t mm_f_to_u16(millimetres_f millimetres)
{
    return ((uint16_t) (MAX(((millimetres_f) (0)), ((millimetres_f) (round(((double) (millimetres))))))));
}

/**
 * Convert millimetres_f to uint32_t.
 */
uint32_t mm_f_to_u32(millimetres_f millimetres)
{
    return ((uint32_t) (MAX(((millimetres_f) (0)), ((millimetres_f) (round(((double) (millimetres))))))));
}

/**
 * Convert millimetres_f to uint64_t.
 */
uint64_t mm_f_to_u64(millimetres_f millimetres)
{
    return ((uint64_t) (MAX(((millimetres_f) (0)), ((millimetres_f) (round(((double) (millimetres))))))));
}

/**
 * Convert millimetres_f to uint8_t.
 */
uint8_t mm_f_to_u8(millimetres_f millimetres)
{
    return ((uint8_t) (MAX(((millimetres_f) (0)), ((millimetres_f) (round(((double) (millimetres))))))));
}

/**
 * Convert millimetres_f to unsigned int.
 */
unsigned int mm_f_to_u(millimetres_f millimetres)
{
    return ((unsigned int) (MAX(((millimetres_f) (0)), ((millimetres_f) (round(((double) (millimetres))))))));
}

/**
 * Convert millimetres_t to centimetres_d.
 */
centimetres_d mm_t_to_cm_d(millimetres_t millimetres)
{
    return ((centimetres_d) (round(((double) (((millimetres_d) (millimetres)) / 10.0)))));
}

/**
 * Convert millimetres_t to centimetres_f.
 */
centimetres_f mm_t_to_cm_f(millimetres_t millimetres)
{
    return ((centimetres_f) (((millimetres_d) (millimetres)) / 10.0));
}

/**
 * Convert millimetres_t to centimetres_t.
 */
centimetres_t mm_t_to_cm_t(millimetres_t millimetres)
{
    return ((centimetres_t) (round(((double) (((millimetres_d) (millimetres)) / 10.0)))));
}

/**
 * Convert millimetres_t to centimetres_u.
 */
centimetres_u mm_t_to_cm_u(millimetres_t millimetres)
{
    return ((centimetres_u) (round(((double) (((millimetres_d) (millimetres)) / 10.0)))));
}

/**
 * Convert millimetres_t to double.
 */
double mm_t_to_d(millimetres_t millimetres)
{
    return ((double) (millimetres));
}

/**
 * Convert millimetres_t to float.
 */
float mm_t_to_f(millimetres_t millimetres)
{
    return ((float) (millimetres));
}

/**
 * Convert millimetres_t to int.
 */
int mm_t_to_i(millimetres_t millimetres)
{
    return ((int) (millimetres));
}

/**
 * Convert millimetres_t to int16_t.
 */
int16_t mm_t_to_i16(millimetres_t millimetres)
{
    return ((int16_t) (MIN(((millimetres_t) (SHRT_MAX)), MAX(((millimetres_t) (SHRT_MIN)), millimetres))));
}

/**
 * Convert millimetres_t to int32_t.
 */
int32_t mm_t_to_i32(millimetres_t millimetres)
{
    return ((int32_t) (MIN(((millimetres_t) (INT_MAX)), MAX(((millimetres_t) (INT_MIN)), millimetres))));
}

/**
 * Convert millimetres_t to int64_t.
 */
int64_t mm_t_to_i64(millimetres_t millimetres)
{
    return ((int64_t) (millimetres));
}

/**
 * Convert millimetres_t to int8_t.
 */
int8_t mm_t_to_i8(millimetres_t millimetres)
{
    return ((int8_t) (MIN(((millimetres_t) (127)), MAX(((millimetres_t) (-128)), millimetres))));
}

/**
 * Convert millimetres_t to metres_d.
 */
metres_d mm_t_to_m_d(millimetres_t millimetres)
{
    return ((metres_d) (round(((double) (((millimetres_d) (millimetres)) / 1000.0)))));
}

/**
 * Convert millimetres_t to metres_f.
 */
metres_f mm_t_to_m_f(millimetres_t millimetres)
{
    return ((metres_f) (((millimetres_d) (millimetres)) / 1000.0));
}

/**
 * Convert millimetres_t to metres_t.
 */
metres_t mm_t_to_m_t(millimetres_t millimetres)
{
    return ((metres_t) (round(((double) (((millimetres_d) (millimetres)) / 1000.0)))));
}

/**
 * Convert millimetres_t to metres_u.
 */
metres_u mm_t_to_m_u(millimetres_t millimetres)
{
    return ((metres_u) (round(((double) (((millimetres_d) (millimetres)) / 1000.0)))));
}

/**
 * Convert millimetres_t to millimetres_d.
 */
millimetres_d mm_t_to_mm_d(millimetres_t millimetres)
{
    return ((millimetres_d) (millimetres));
}

/**
 * Convert millimetres_t to millimetres_f.
 */
millimetres_f mm_t_to_mm_f(millimetres_t millimetres)
{
    return ((millimetres_f) (millimetres));
}

/**
 * Convert millimetres_t to millimetres_u.
 */
millimetres_u mm_t_to_mm_u(millimetres_t millimetres)
{
    return ((millimetres_u) ((millimetres) < 0 ? 0 : millimetres));
}

/**
 * Convert millimetres_t to uint16_t.
 */
uint16_t mm_t_to_u16(millimetres_t millimetres)
{
    return ((uint16_t) (MAX(((millimetres_t) (0)), millimetres)));
}

/**
 * Convert millimetres_t to uint32_t.
 */
uint32_t mm_t_to_u32(millimetres_t millimetres)
{
    return ((uint32_t) (MAX(((millimetres_t) (0)), millimetres)));
}

/**
 * Convert millimetres_t to uint64_t.
 */
uint64_t mm_t_to_u64(millimetres_t millimetres)
{
    return ((uint64_t) (MAX(((millimetres_t) (0)), millimetres)));
}

/**
 * Convert millimetres_t to uint8_t.
 */
uint8_t mm_t_to_u8(millimetres_t millimetres)
{
    return ((uint8_t) (MAX(((millimetres_t) (0)), millimetres)));
}

/**
 * Convert millimetres_t to unsigned int.
 */
unsigned int mm_t_to_u(millimetres_t millimetres)
{
    return ((unsigned int) (MAX(((millimetres_t) (0)), millimetres)));
}

/**
 * Convert millimetres_u to centimetres_d.
 */
centimetres_d mm_u_to_cm_d(millimetres_u millimetres)
{
    return ((centimetres_d) (round(((double) (((millimetres_d) (millimetres)) / 10.0)))));
}

/**
 * Convert millimetres_u to centimetres_f.
 */
centimetres_f mm_u_to_cm_f(millimetres_u millimetres)
{
    return ((centimetres_f) (((millimetres_d) (millimetres)) / 10.0));
}

/**
 * Convert millimetres_u to centimetres_t.
 */
centimetres_t mm_u_to_cm_t(millimetres_u millimetres)
{
    return ((centimetres_t) (round(((double) (((millimetres_d) (millimetres)) / 10.0)))));
}

/**
 * Convert millimetres_u to centimetres_u.
 */
centimetres_u mm_u_to_cm_u(millimetres_u millimetres)
{
    return ((centimetres_u) (round(((double) (((millimetres_d) (millimetres)) / 10.0)))));
}

/**
 * Convert millimetres_u to double.
 */
double mm_u_to_d(millimetres_u millimetres)
{
    return ((double) (MIN(((millimetres_u) (INT_MAX)), millimetres)));
}

/**
 * Convert millimetres_u to float.
 */
float mm_u_to_f(millimetres_u millimetres)
{
    return ((float) (MIN(((millimetres_u) (INT_MAX)), millimetres)));
}

/**
 * Convert millimetres_u to int.
 */
int mm_u_to_i(millimetres_u millimetres)
{
    return ((int) (MIN(((millimetres_u) (INT_MAX)), millimetres)));
}

/**
 * Convert millimetres_u to int16_t.
 */
int16_t mm_u_to_i16(millimetres_u millimetres)
{
    return ((int16_t) (MIN(((millimetres_u) (SHRT_MAX)), millimetres)));
}

/**
 * Convert millimetres_u to int32_t.
 */
int32_t mm_u_to_i32(millimetres_u millimetres)
{
    return ((int32_t) (MIN(((millimetres_u) (INT_MAX)), millimetres)));
}

/**
 * Convert millimetres_u to int64_t.
 */
int64_t mm_u_to_i64(millimetres_u millimetres)
{
    return ((int64_t) (millimetres));
}

/**
 * Convert millimetres_u to int8_t.
 */
int8_t mm_u_to_i8(millimetres_u millimetres)
{
    return ((int8_t) (MIN(((millimetres_u) (127)), millimetres)));
}

/**
 * Convert millimetres_u to metres_d.
 */
metres_d mm_u_to_m_d(millimetres_u millimetres)
{
    return ((metres_d) (round(((double) (((millimetres_d) (millimetres)) / 1000.0)))));
}

/**
 * Convert millimetres_u to metres_f.
 */
metres_f mm_u_to_m_f(millimetres_u millimetres)
{
    return ((metres_f) (((millimetres_d) (millimetres)) / 1000.0));
}

/**
 * Convert millimetres_u to metres_t.
 */
metres_t mm_u_to_m_t(millimetres_u millimetres)
{
    return ((metres_t) (round(((double) (((millimetres_d) (millimetres)) / 1000.0)))));
}

/**
 * Convert millimetres_u to metres_u.
 */
metres_u mm_u_to_m_u(millimetres_u millimetres)
{
    return ((metres_u) (round(((double) (((millimetres_d) (millimetres)) / 1000.0)))));
}

/**
 * Convert millimetres_u to millimetres_d.
 */
millimetres_d mm_u_to_mm_d(millimetres_u millimetres)
{
    return ((millimetres_d) (millimetres));
}

/**
 * Convert millimetres_u to millimetres_f.
 */
millimetres_f mm_u_to_mm_f(millimetres_u millimetres)
{
    return ((millimetres_f) (millimetres));
}

/**
 * Convert millimetres_u to millimetres_t.
 */
millimetres_t mm_u_to_mm_t(millimetres_u millimetres)
{
    return ((millimetres_t) ((millimetres) > ((unsigned int) (INT_MAX)) ? ((unsigned int) (INT_MAX)) : millimetres));
}

/**
 * Convert millimetres_u to uint16_t.
 */
uint16_t mm_u_to_u16(millimetres_u millimetres)
{
    return ((uint16_t) (MIN(((millimetres_u) (USHRT_MAX)), MAX(((millimetres_u) (0)), millimetres))));
}

/**
 * Convert millimetres_u to uint32_t.
 */
uint32_t mm_u_to_u32(millimetres_u millimetres)
{
    return ((uint32_t) (MIN(((millimetres_u) (UINT_MAX)), MAX(((millimetres_u) (0)), millimetres))));
}

/**
 * Convert millimetres_u to uint64_t.
 */
uint64_t mm_u_to_u64(millimetres_u millimetres)
{
    return ((uint64_t) (millimetres));
}

/**
 * Convert millimetres_u to uint8_t.
 */
uint8_t mm_u_to_u8(millimetres_u millimetres)
{
    return ((uint8_t) (MIN(((millimetres_u) (255)), MAX(((millimetres_u) (0)), millimetres))));
}

/**
 * Convert millimetres_u to unsigned int.
 */
unsigned int mm_u_to_u(millimetres_u millimetres)
{
    return ((unsigned int) (millimetres));
}

/**
 * Convert uint16_t to centimetres_d.
 */
centimetres_d u16_to_cm_d(uint16_t centimetres)
{
    return ((centimetres_d) (centimetres));
}

/**
 * Convert uint16_t to centimetres_f.
 */
centimetres_f u16_to_cm_f(uint16_t centimetres)
{
    return ((centimetres_f) (centimetres));
}

/**
 * Convert uint16_t to centimetres_t.
 */
centimetres_t u16_to_cm_t(uint16_t centimetres)
{
    return ((centimetres_t) (centimetres));
}

/**
 * Convert uint16_t to centimetres_u.
 */
centimetres_u u16_to_cm_u(uint16_t centimetres)
{
    return ((centimetres_u) (centimetres));
}

/**
 * Convert uint16_t to metres_d.
 */
metres_d u16_to_m_d(uint16_t metres)
{
    return ((metres_d) (metres));
}

/**
 * Convert uint16_t to metres_f.
 */
metres_f u16_to_m_f(uint16_t metres)
{
    return ((metres_f) (metres));
}

/**
 * Convert uint16_t to metres_t.
 */
metres_t u16_to_m_t(uint16_t metres)
{
    return ((metres_t) (metres));
}

/**
 * Convert uint16_t to metres_u.
 */
metres_u u16_to_m_u(uint16_t metres)
{
    return ((metres_u) (metres));
}

/**
 * Convert uint16_t to millimetres_d.
 */
millimetres_d u16_to_mm_d(uint16_t millimetres)
{
    return ((millimetres_d) (millimetres));
}

/**
 * Convert uint16_t to millimetres_f.
 */
millimetres_f u16_to_mm_f(uint16_t millimetres)
{
    return ((millimetres_f) (millimetres));
}

/**
 * Convert uint16_t to millimetres_t.
 */
millimetres_t u16_to_mm_t(uint16_t millimetres)
{
    return ((millimetres_t) (millimetres));
}

/**
 * Convert uint16_t to millimetres_u.
 */
millimetres_u u16_to_mm_u(uint16_t millimetres)
{
    return ((millimetres_u) (millimetres));
}

/**
 * Convert uint32_t to centimetres_d.
 */
centimetres_d u32_to_cm_d(uint32_t centimetres)
{
    return ((centimetres_d) (MIN(((uint32_t) (INT_MAX)), centimetres)));
}

/**
 * Convert uint32_t to centimetres_f.
 */
centimetres_f u32_to_cm_f(uint32_t centimetres)
{
    return ((centimetres_f) (MIN(((uint32_t) (INT_MAX)), centimetres)));
}

/**
 * Convert uint32_t to centimetres_t.
 */
centimetres_t u32_to_cm_t(uint32_t centimetres)
{
    return ((centimetres_t) (MIN(((uint32_t) (INT_MAX)), centimetres)));
}

/**
 * Convert uint32_t to centimetres_u.
 */
centimetres_u u32_to_cm_u(uint32_t centimetres)
{
    return ((centimetres_u) (MIN(((uint32_t) (UINT_MAX)), MAX(((uint32_t) (0)), centimetres))));
}

/**
 * Convert uint32_t to metres_d.
 */
metres_d u32_to_m_d(uint32_t metres)
{
    return ((metres_d) (MIN(((uint32_t) (INT_MAX)), metres)));
}

/**
 * Convert uint32_t to metres_f.
 */
metres_f u32_to_m_f(uint32_t metres)
{
    return ((metres_f) (MIN(((uint32_t) (INT_MAX)), metres)));
}

/**
 * Convert uint32_t to metres_t.
 */
metres_t u32_to_m_t(uint32_t metres)
{
    return ((metres_t) (MIN(((uint32_t) (INT_MAX)), metres)));
}

/**
 * Convert uint32_t to metres_u.
 */
metres_u u32_to_m_u(uint32_t metres)
{
    return ((metres_u) (MIN(((uint32_t) (UINT_MAX)), MAX(((uint32_t) (0)), metres))));
}

/**
 * Convert uint32_t to millimetres_d.
 */
millimetres_d u32_to_mm_d(uint32_t millimetres)
{
    return ((millimetres_d) (MIN(((uint32_t) (INT_MAX)), millimetres)));
}

/**
 * Convert uint32_t to millimetres_f.
 */
millimetres_f u32_to_mm_f(uint32_t millimetres)
{
    return ((millimetres_f) (MIN(((uint32_t) (INT_MAX)), millimetres)));
}

/**
 * Convert uint32_t to millimetres_t.
 */
millimetres_t u32_to_mm_t(uint32_t millimetres)
{
    return ((millimetres_t) (MIN(((uint32_t) (INT_MAX)), millimetres)));
}

/**
 * Convert uint32_t to millimetres_u.
 */
millimetres_u u32_to_mm_u(uint32_t millimetres)
{
    return ((millimetres_u) (MIN(((uint32_t) (UINT_MAX)), MAX(((uint32_t) (0)), millimetres))));
}

/**
 * Convert uint64_t to centimetres_d.
 */
centimetres_d u64_to_cm_d(uint64_t centimetres)
{
    return ((centimetres_d) (MIN(((uint64_t) (INT_MAX)), centimetres)));
}

/**
 * Convert uint64_t to centimetres_f.
 */
centimetres_f u64_to_cm_f(uint64_t centimetres)
{
    return ((centimetres_f) (MIN(((uint64_t) (INT_MAX)), centimetres)));
}

/**
 * Convert uint64_t to centimetres_t.
 */
centimetres_t u64_to_cm_t(uint64_t centimetres)
{
    return ((centimetres_t) (MIN(((uint64_t) (INT_MAX)), centimetres)));
}

/**
 * Convert uint64_t to centimetres_u.
 */
centimetres_u u64_to_cm_u(uint64_t centimetres)
{
    return ((centimetres_u) (MIN(((uint64_t) (UINT_MAX)), MAX(((uint64_t) (0)), centimetres))));
}

/**
 * Convert uint64_t to metres_d.
 */
metres_d u64_to_m_d(uint64_t metres)
{
    return ((metres_d) (MIN(((uint64_t) (INT_MAX)), metres)));
}

/**
 * Convert uint64_t to metres_f.
 */
metres_f u64_to_m_f(uint64_t metres)
{
    return ((metres_f) (MIN(((uint64_t) (INT_MAX)), metres)));
}

/**
 * Convert uint64_t to metres_t.
 */
metres_t u64_to_m_t(uint64_t metres)
{
    return ((metres_t) (MIN(((uint64_t) (INT_MAX)), metres)));
}

/**
 * Convert uint64_t to metres_u.
 */
metres_u u64_to_m_u(uint64_t metres)
{
    return ((metres_u) (MIN(((uint64_t) (UINT_MAX)), MAX(((uint64_t) (0)), metres))));
}

/**
 * Convert uint64_t to millimetres_d.
 */
millimetres_d u64_to_mm_d(uint64_t millimetres)
{
    return ((millimetres_d) (MIN(((uint64_t) (INT_MAX)), millimetres)));
}

/**
 * Convert uint64_t to millimetres_f.
 */
millimetres_f u64_to_mm_f(uint64_t millimetres)
{
    return ((millimetres_f) (MIN(((uint64_t) (INT_MAX)), millimetres)));
}

/**
 * Convert uint64_t to millimetres_t.
 */
millimetres_t u64_to_mm_t(uint64_t millimetres)
{
    return ((millimetres_t) (MIN(((uint64_t) (INT_MAX)), millimetres)));
}

/**
 * Convert uint64_t to millimetres_u.
 */
millimetres_u u64_to_mm_u(uint64_t millimetres)
{
    return ((millimetres_u) (MIN(((uint64_t) (UINT_MAX)), MAX(((uint64_t) (0)), millimetres))));
}

/**
 * Convert uint8_t to centimetres_d.
 */
centimetres_d u8_to_cm_d(uint8_t centimetres)
{
    return ((centimetres_d) (centimetres));
}

/**
 * Convert uint8_t to centimetres_f.
 */
centimetres_f u8_to_cm_f(uint8_t centimetres)
{
    return ((centimetres_f) (centimetres));
}

/**
 * Convert uint8_t to centimetres_t.
 */
centimetres_t u8_to_cm_t(uint8_t centimetres)
{
    return ((centimetres_t) (centimetres));
}

/**
 * Convert uint8_t to centimetres_u.
 */
centimetres_u u8_to_cm_u(uint8_t centimetres)
{
    return ((centimetres_u) (centimetres));
}

/**
 * Convert uint8_t to metres_d.
 */
metres_d u8_to_m_d(uint8_t metres)
{
    return ((metres_d) (metres));
}

/**
 * Convert uint8_t to metres_f.
 */
metres_f u8_to_m_f(uint8_t metres)
{
    return ((metres_f) (metres));
}

/**
 * Convert uint8_t to metres_t.
 */
metres_t u8_to_m_t(uint8_t metres)
{
    return ((metres_t) (metres));
}

/**
 * Convert uint8_t to metres_u.
 */
metres_u u8_to_m_u(uint8_t metres)
{
    return ((metres_u) (metres));
}

/**
 * Convert uint8_t to millimetres_d.
 */
millimetres_d u8_to_mm_d(uint8_t millimetres)
{
    return ((millimetres_d) (millimetres));
}

/**
 * Convert uint8_t to millimetres_f.
 */
millimetres_f u8_to_mm_f(uint8_t millimetres)
{
    return ((millimetres_f) (millimetres));
}

/**
 * Convert uint8_t to millimetres_t.
 */
millimetres_t u8_to_mm_t(uint8_t millimetres)
{
    return ((millimetres_t) (millimetres));
}

/**
 * Convert uint8_t to millimetres_u.
 */
millimetres_u u8_to_mm_u(uint8_t millimetres)
{
    return ((millimetres_u) (millimetres));
}

/**
 * Convert unsigned int to centimetres_d.
 */
centimetres_d u_to_cm_d(unsigned int centimetres)
{
    return ((centimetres_d) (MIN(((unsigned int) (INT_MAX)), centimetres)));
}

/**
 * Convert unsigned int to centimetres_f.
 */
centimetres_f u_to_cm_f(unsigned int centimetres)
{
    return ((centimetres_f) (MIN(((unsigned int) (INT_MAX)), centimetres)));
}

/**
 * Convert unsigned int to centimetres_t.
 */
centimetres_t u_to_cm_t(unsigned int centimetres)
{
    return ((centimetres_t) (MIN(((unsigned int) (INT_MAX)), centimetres)));
}

/**
 * Convert unsigned int to centimetres_u.
 */
centimetres_u u_to_cm_u(unsigned int centimetres)
{
    return ((centimetres_u) (centimetres));
}

/**
 * Convert unsigned int to metres_d.
 */
metres_d u_to_m_d(unsigned int metres)
{
    return ((metres_d) (MIN(((unsigned int) (INT_MAX)), metres)));
}

/**
 * Convert unsigned int to metres_f.
 */
metres_f u_to_m_f(unsigned int metres)
{
    return ((metres_f) (MIN(((unsigned int) (INT_MAX)), metres)));
}

/**
 * Convert unsigned int to metres_t.
 */
metres_t u_to_m_t(unsigned int metres)
{
    return ((metres_t) (MIN(((unsigned int) (INT_MAX)), metres)));
}

/**
 * Convert unsigned int to metres_u.
 */
metres_u u_to_m_u(unsigned int metres)
{
    return ((metres_u) (metres));
}

/**
 * Convert unsigned int to millimetres_d.
 */
millimetres_d u_to_mm_d(unsigned int millimetres)
{
    return ((millimetres_d) (MIN(((unsigned int) (INT_MAX)), millimetres)));
}

/**
 * Convert unsigned int to millimetres_f.
 */
millimetres_f u_to_mm_f(unsigned int millimetres)
{
    return ((millimetres_f) (MIN(((unsigned int) (INT_MAX)), millimetres)));
}

/**
 * Convert unsigned int to millimetres_t.
 */
millimetres_t u_to_mm_t(unsigned int millimetres)
{
    return ((millimetres_t) (MIN(((unsigned int) (INT_MAX)), millimetres)));
}

/**
 * Convert unsigned int to millimetres_u.
 */
millimetres_u u_to_mm_u(unsigned int millimetres)
{
    return ((millimetres_u) (millimetres));
}

// Time Conversion Functions

/**
 * Convert double to microseconds_d.
 */
microseconds_d d_to_us_d(double microseconds)
{
    return ((microseconds_d) (microseconds));
}

/**
 * Convert double to microseconds_f.
 */
microseconds_f d_to_us_f(double microseconds)
{
    return ((microseconds_f) (microseconds));
}

/**
 * Convert double to microseconds_t.
 */
microseconds_t d_to_us_t(double microseconds)
{
    return ((microseconds_t) (((double) (round(microseconds)))));
}

/**
 * Convert double to microseconds_u.
 */
microseconds_u d_to_us_u(double microseconds)
{
    return ((microseconds_u) (MAX(((double) (0)), ((double) (round(microseconds))))));
}

/**
 * Convert double to milliseconds_d.
 */
milliseconds_d d_to_ms_d(double milliseconds)
{
    return ((milliseconds_d) (milliseconds));
}

/**
 * Convert double to milliseconds_f.
 */
milliseconds_f d_to_ms_f(double milliseconds)
{
    return ((milliseconds_f) (milliseconds));
}

/**
 * Convert double to milliseconds_t.
 */
milliseconds_t d_to_ms_t(double milliseconds)
{
    return ((milliseconds_t) (((double) (round(milliseconds)))));
}

/**
 * Convert double to milliseconds_u.
 */
milliseconds_u d_to_ms_u(double milliseconds)
{
    return ((milliseconds_u) (MAX(((double) (0)), ((double) (round(milliseconds))))));
}

/**
 * Convert double to seconds_d.
 */
seconds_d d_to_s_d(double seconds)
{
    return ((seconds_d) (seconds));
}

/**
 * Convert double to seconds_f.
 */
seconds_f d_to_s_f(double seconds)
{
    return ((seconds_f) (seconds));
}

/**
 * Convert double to seconds_t.
 */
seconds_t d_to_s_t(double seconds)
{
    return ((seconds_t) (((double) (round(seconds)))));
}

/**
 * Convert double to seconds_u.
 */
seconds_u d_to_s_u(double seconds)
{
    return ((seconds_u) (MAX(((double) (0)), ((double) (round(seconds))))));
}

/**
 * Convert float to microseconds_d.
 */
microseconds_d f_to_us_d(float microseconds)
{
    return ((microseconds_d) (microseconds));
}

/**
 * Convert float to microseconds_f.
 */
microseconds_f f_to_us_f(float microseconds)
{
    return ((microseconds_f) (microseconds));
}

/**
 * Convert float to microseconds_t.
 */
microseconds_t f_to_us_t(float microseconds)
{
    return ((microseconds_t) (((float) (round(((double) (microseconds)))))));
}

/**
 * Convert float to microseconds_u.
 */
microseconds_u f_to_us_u(float microseconds)
{
    return ((microseconds_u) (MAX(((float) (0)), ((float) (round(((double) (microseconds))))))));
}

/**
 * Convert float to milliseconds_d.
 */
milliseconds_d f_to_ms_d(float milliseconds)
{
    return ((milliseconds_d) (milliseconds));
}

/**
 * Convert float to milliseconds_f.
 */
milliseconds_f f_to_ms_f(float milliseconds)
{
    return ((milliseconds_f) (milliseconds));
}

/**
 * Convert float to milliseconds_t.
 */
milliseconds_t f_to_ms_t(float milliseconds)
{
    return ((milliseconds_t) (((float) (round(((double) (milliseconds)))))));
}

/**
 * Convert float to milliseconds_u.
 */
milliseconds_u f_to_ms_u(float milliseconds)
{
    return ((milliseconds_u) (MAX(((float) (0)), ((float) (round(((double) (milliseconds))))))));
}

/**
 * Convert float to seconds_d.
 */
seconds_d f_to_s_d(float seconds)
{
    return ((seconds_d) (seconds));
}

/**
 * Convert float to seconds_f.
 */
seconds_f f_to_s_f(float seconds)
{
    return ((seconds_f) (seconds));
}

/**
 * Convert float to seconds_t.
 */
seconds_t f_to_s_t(float seconds)
{
    return ((seconds_t) (((float) (round(((double) (seconds)))))));
}

/**
 * Convert float to seconds_u.
 */
seconds_u f_to_s_u(float seconds)
{
    return ((seconds_u) (MAX(((float) (0)), ((float) (round(((double) (seconds))))))));
}

/**
 * Convert int16_t to microseconds_d.
 */
microseconds_d i16_to_us_d(int16_t microseconds)
{
    return ((microseconds_d) (microseconds));
}

/**
 * Convert int16_t to microseconds_f.
 */
microseconds_f i16_to_us_f(int16_t microseconds)
{
    return ((microseconds_f) (microseconds));
}

/**
 * Convert int16_t to microseconds_t.
 */
microseconds_t i16_to_us_t(int16_t microseconds)
{
    return ((microseconds_t) (microseconds));
}

/**
 * Convert int16_t to microseconds_u.
 */
microseconds_u i16_to_us_u(int16_t microseconds)
{
    return ((microseconds_u) (MAX(((int16_t) (0)), microseconds)));
}

/**
 * Convert int16_t to milliseconds_d.
 */
milliseconds_d i16_to_ms_d(int16_t milliseconds)
{
    return ((milliseconds_d) (milliseconds));
}

/**
 * Convert int16_t to milliseconds_f.
 */
milliseconds_f i16_to_ms_f(int16_t milliseconds)
{
    return ((milliseconds_f) (milliseconds));
}

/**
 * Convert int16_t to milliseconds_t.
 */
milliseconds_t i16_to_ms_t(int16_t milliseconds)
{
    return ((milliseconds_t) (milliseconds));
}

/**
 * Convert int16_t to milliseconds_u.
 */
milliseconds_u i16_to_ms_u(int16_t milliseconds)
{
    return ((milliseconds_u) (MAX(((int16_t) (0)), milliseconds)));
}

/**
 * Convert int16_t to seconds_d.
 */
seconds_d i16_to_s_d(int16_t seconds)
{
    return ((seconds_d) (seconds));
}

/**
 * Convert int16_t to seconds_f.
 */
seconds_f i16_to_s_f(int16_t seconds)
{
    return ((seconds_f) (seconds));
}

/**
 * Convert int16_t to seconds_t.
 */
seconds_t i16_to_s_t(int16_t seconds)
{
    return ((seconds_t) (seconds));
}

/**
 * Convert int16_t to seconds_u.
 */
seconds_u i16_to_s_u(int16_t seconds)
{
    return ((seconds_u) (MAX(((int16_t) (0)), seconds)));
}

/**
 * Convert int32_t to microseconds_d.
 */
microseconds_d i32_to_us_d(int32_t microseconds)
{
    return ((microseconds_d) (microseconds));
}

/**
 * Convert int32_t to microseconds_f.
 */
microseconds_f i32_to_us_f(int32_t microseconds)
{
    return ((microseconds_f) (microseconds));
}

/**
 * Convert int32_t to microseconds_t.
 */
microseconds_t i32_to_us_t(int32_t microseconds)
{
    return ((microseconds_t) (MIN(((int32_t) (INT_MAX)), MAX(((int32_t) (INT_MIN)), microseconds))));
}

/**
 * Convert int32_t to microseconds_u.
 */
microseconds_u i32_to_us_u(int32_t microseconds)
{
    return ((microseconds_u) (MAX(((int32_t) (0)), microseconds)));
}

/**
 * Convert int32_t to milliseconds_d.
 */
milliseconds_d i32_to_ms_d(int32_t milliseconds)
{
    return ((milliseconds_d) (milliseconds));
}

/**
 * Convert int32_t to milliseconds_f.
 */
milliseconds_f i32_to_ms_f(int32_t milliseconds)
{
    return ((milliseconds_f) (milliseconds));
}

/**
 * Convert int32_t to milliseconds_t.
 */
milliseconds_t i32_to_ms_t(int32_t milliseconds)
{
    return ((milliseconds_t) (MIN(((int32_t) (INT_MAX)), MAX(((int32_t) (INT_MIN)), milliseconds))));
}

/**
 * Convert int32_t to milliseconds_u.
 */
milliseconds_u i32_to_ms_u(int32_t milliseconds)
{
    return ((milliseconds_u) (MAX(((int32_t) (0)), milliseconds)));
}

/**
 * Convert int32_t to seconds_d.
 */
seconds_d i32_to_s_d(int32_t seconds)
{
    return ((seconds_d) (seconds));
}

/**
 * Convert int32_t to seconds_f.
 */
seconds_f i32_to_s_f(int32_t seconds)
{
    return ((seconds_f) (seconds));
}

/**
 * Convert int32_t to seconds_t.
 */
seconds_t i32_to_s_t(int32_t seconds)
{
    return ((seconds_t) (MIN(((int32_t) (INT_MAX)), MAX(((int32_t) (INT_MIN)), seconds))));
}

/**
 * Convert int32_t to seconds_u.
 */
seconds_u i32_to_s_u(int32_t seconds)
{
    return ((seconds_u) (MAX(((int32_t) (0)), seconds)));
}

/**
 * Convert int64_t to microseconds_d.
 */
microseconds_d i64_to_us_d(int64_t microseconds)
{
    return ((microseconds_d) (microseconds));
}

/**
 * Convert int64_t to microseconds_f.
 */
microseconds_f i64_to_us_f(int64_t microseconds)
{
    return ((microseconds_f) (microseconds));
}

/**
 * Convert int64_t to microseconds_t.
 */
microseconds_t i64_to_us_t(int64_t microseconds)
{
    return ((microseconds_t) (MIN(((int64_t) (INT_MAX)), MAX(((int64_t) (INT_MIN)), microseconds))));
}

/**
 * Convert int64_t to microseconds_u.
 */
microseconds_u i64_to_us_u(int64_t microseconds)
{
    return ((microseconds_u) (MAX(((int64_t) (0)), microseconds)));
}

/**
 * Convert int64_t to milliseconds_d.
 */
milliseconds_d i64_to_ms_d(int64_t milliseconds)
{
    return ((milliseconds_d) (milliseconds));
}

/**
 * Convert int64_t to milliseconds_f.
 */
milliseconds_f i64_to_ms_f(int64_t milliseconds)
{
    return ((milliseconds_f) (milliseconds));
}

/**
 * Convert int64_t to milliseconds_t.
 */
milliseconds_t i64_to_ms_t(int64_t milliseconds)
{
    return ((milliseconds_t) (MIN(((int64_t) (INT_MAX)), MAX(((int64_t) (INT_MIN)), milliseconds))));
}

/**
 * Convert int64_t to milliseconds_u.
 */
milliseconds_u i64_to_ms_u(int64_t milliseconds)
{
    return ((milliseconds_u) (MAX(((int64_t) (0)), milliseconds)));
}

/**
 * Convert int64_t to seconds_d.
 */
seconds_d i64_to_s_d(int64_t seconds)
{
    return ((seconds_d) (seconds));
}

/**
 * Convert int64_t to seconds_f.
 */
seconds_f i64_to_s_f(int64_t seconds)
{
    return ((seconds_f) (seconds));
}

/**
 * Convert int64_t to seconds_t.
 */
seconds_t i64_to_s_t(int64_t seconds)
{
    return ((seconds_t) (MIN(((int64_t) (INT_MAX)), MAX(((int64_t) (INT_MIN)), seconds))));
}

/**
 * Convert int64_t to seconds_u.
 */
seconds_u i64_to_s_u(int64_t seconds)
{
    return ((seconds_u) (MAX(((int64_t) (0)), seconds)));
}

/**
 * Convert int8_t to microseconds_d.
 */
microseconds_d i8_to_us_d(int8_t microseconds)
{
    return ((microseconds_d) (microseconds));
}

/**
 * Convert int8_t to microseconds_f.
 */
microseconds_f i8_to_us_f(int8_t microseconds)
{
    return ((microseconds_f) (microseconds));
}

/**
 * Convert int8_t to microseconds_t.
 */
microseconds_t i8_to_us_t(int8_t microseconds)
{
    return ((microseconds_t) (microseconds));
}

/**
 * Convert int8_t to microseconds_u.
 */
microseconds_u i8_to_us_u(int8_t microseconds)
{
    return ((microseconds_u) (MAX(((int8_t) (0)), microseconds)));
}

/**
 * Convert int8_t to milliseconds_d.
 */
milliseconds_d i8_to_ms_d(int8_t milliseconds)
{
    return ((milliseconds_d) (milliseconds));
}

/**
 * Convert int8_t to milliseconds_f.
 */
milliseconds_f i8_to_ms_f(int8_t milliseconds)
{
    return ((milliseconds_f) (milliseconds));
}

/**
 * Convert int8_t to milliseconds_t.
 */
milliseconds_t i8_to_ms_t(int8_t milliseconds)
{
    return ((milliseconds_t) (milliseconds));
}

/**
 * Convert int8_t to milliseconds_u.
 */
milliseconds_u i8_to_ms_u(int8_t milliseconds)
{
    return ((milliseconds_u) (MAX(((int8_t) (0)), milliseconds)));
}

/**
 * Convert int8_t to seconds_d.
 */
seconds_d i8_to_s_d(int8_t seconds)
{
    return ((seconds_d) (seconds));
}

/**
 * Convert int8_t to seconds_f.
 */
seconds_f i8_to_s_f(int8_t seconds)
{
    return ((seconds_f) (seconds));
}

/**
 * Convert int8_t to seconds_t.
 */
seconds_t i8_to_s_t(int8_t seconds)
{
    return ((seconds_t) (seconds));
}

/**
 * Convert int8_t to seconds_u.
 */
seconds_u i8_to_s_u(int8_t seconds)
{
    return ((seconds_u) (MAX(((int8_t) (0)), seconds)));
}

/**
 * Convert int to microseconds_d.
 */
microseconds_d i_to_us_d(int microseconds)
{
    return ((microseconds_d) (microseconds));
}

/**
 * Convert int to microseconds_f.
 */
microseconds_f i_to_us_f(int microseconds)
{
    return ((microseconds_f) (microseconds));
}

/**
 * Convert int to microseconds_t.
 */
microseconds_t i_to_us_t(int microseconds)
{
    return ((microseconds_t) (microseconds));
}

/**
 * Convert int to microseconds_u.
 */
microseconds_u i_to_us_u(int microseconds)
{
    return ((microseconds_u) (MAX(((int) (0)), microseconds)));
}

/**
 * Convert int to milliseconds_d.
 */
milliseconds_d i_to_ms_d(int milliseconds)
{
    return ((milliseconds_d) (milliseconds));
}

/**
 * Convert int to milliseconds_f.
 */
milliseconds_f i_to_ms_f(int milliseconds)
{
    return ((milliseconds_f) (milliseconds));
}

/**
 * Convert int to milliseconds_t.
 */
milliseconds_t i_to_ms_t(int milliseconds)
{
    return ((milliseconds_t) (milliseconds));
}

/**
 * Convert int to milliseconds_u.
 */
milliseconds_u i_to_ms_u(int milliseconds)
{
    return ((milliseconds_u) (MAX(((int) (0)), milliseconds)));
}

/**
 * Convert int to seconds_d.
 */
seconds_d i_to_s_d(int seconds)
{
    return ((seconds_d) (seconds));
}

/**
 * Convert int to seconds_f.
 */
seconds_f i_to_s_f(int seconds)
{
    return ((seconds_f) (seconds));
}

/**
 * Convert int to seconds_t.
 */
seconds_t i_to_s_t(int seconds)
{
    return ((seconds_t) (seconds));
}

/**
 * Convert int to seconds_u.
 */
seconds_u i_to_s_u(int seconds)
{
    return ((seconds_u) (MAX(((int) (0)), seconds)));
}

/**
 * Convert microseconds_d to double.
 */
double us_d_to_d(microseconds_d microseconds)
{
    return ((double) (microseconds));
}

/**
 * Convert microseconds_d to float.
 */
float us_d_to_f(microseconds_d microseconds)
{
    return ((float) (microseconds));
}

/**
 * Convert microseconds_d to int.
 */
int us_d_to_i(microseconds_d microseconds)
{
    return ((int) (((microseconds_d) (round(microseconds)))));
}

/**
 * Convert microseconds_d to int16_t.
 */
int16_t us_d_to_i16(microseconds_d microseconds)
{
    return ((int16_t) (((microseconds_d) (round(microseconds)))));
}

/**
 * Convert microseconds_d to int32_t.
 */
int32_t us_d_to_i32(microseconds_d microseconds)
{
    return ((int32_t) (((microseconds_d) (round(microseconds)))));
}

/**
 * Convert microseconds_d to int64_t.
 */
int64_t us_d_to_i64(microseconds_d microseconds)
{
    return ((int64_t) (((microseconds_d) (round(microseconds)))));
}

/**
 * Convert microseconds_d to int8_t.
 */
int8_t us_d_to_i8(microseconds_d microseconds)
{
    return ((int8_t) (((microseconds_d) (round(microseconds)))));
}

/**
 * Convert microseconds_d to microseconds_f.
 */
microseconds_f us_d_to_us_f(microseconds_d microseconds)
{
    return ((microseconds_f) (microseconds));
}

/**
 * Convert microseconds_d to microseconds_t.
 */
microseconds_t us_d_to_us_t(microseconds_d microseconds)
{
    return ((microseconds_t) (round(((double) (microseconds)))));
}

/**
 * Convert microseconds_d to microseconds_u.
 */
microseconds_u us_d_to_us_u(microseconds_d microseconds)
{
    return ((microseconds_u) (round(((double) (microseconds)))));
}

/**
 * Convert microseconds_d to milliseconds_d.
 */
milliseconds_d us_d_to_ms_d(microseconds_d microseconds)
{
    return ((milliseconds_d) (round(((double) (((microseconds_d) (round(((double) (microseconds))))) / 1000.0)))));
}

/**
 * Convert microseconds_d to milliseconds_f.
 */
milliseconds_f us_d_to_ms_f(microseconds_d microseconds)
{
    return ((milliseconds_f) (((microseconds_d) (round(((double) (microseconds))))) / 1000.0));
}

/**
 * Convert microseconds_d to milliseconds_t.
 */
milliseconds_t us_d_to_ms_t(microseconds_d microseconds)
{
    return ((milliseconds_t) (round(((double) (((microseconds_d) (round(((double) (microseconds))))) / 1000.0)))));
}

/**
 * Convert microseconds_d to milliseconds_u.
 */
milliseconds_u us_d_to_ms_u(microseconds_d microseconds)
{
    return ((milliseconds_u) (round(((double) (((microseconds_d) (round(((double) (microseconds))))) / 1000.0)))));
}

/**
 * Convert microseconds_d to seconds_d.
 */
seconds_d us_d_to_s_d(microseconds_d microseconds)
{
    return ((seconds_d) (round(((double) (((microseconds_d) (round(((double) (microseconds))))) / 1000000.0)))));
}

/**
 * Convert microseconds_d to seconds_f.
 */
seconds_f us_d_to_s_f(microseconds_d microseconds)
{
    return ((seconds_f) (((microseconds_d) (round(((double) (microseconds))))) / 1000000.0));
}

/**
 * Convert microseconds_d to seconds_t.
 */
seconds_t us_d_to_s_t(microseconds_d microseconds)
{
    return ((seconds_t) (round(((double) (((microseconds_d) (round(((double) (microseconds))))) / 1000000.0)))));
}

/**
 * Convert microseconds_d to seconds_u.
 */
seconds_u us_d_to_s_u(microseconds_d microseconds)
{
    return ((seconds_u) (round(((double) (((microseconds_d) (round(((double) (microseconds))))) / 1000000.0)))));
}

/**
 * Convert microseconds_d to uint16_t.
 */
uint16_t us_d_to_u16(microseconds_d microseconds)
{
    return ((uint16_t) (MAX(((microseconds_d) (0)), ((microseconds_d) (round(microseconds))))));
}

/**
 * Convert microseconds_d to uint32_t.
 */
uint32_t us_d_to_u32(microseconds_d microseconds)
{
    return ((uint32_t) (MAX(((microseconds_d) (0)), ((microseconds_d) (round(microseconds))))));
}

/**
 * Convert microseconds_d to uint64_t.
 */
uint64_t us_d_to_u64(microseconds_d microseconds)
{
    return ((uint64_t) (MAX(((microseconds_d) (0)), ((microseconds_d) (round(microseconds))))));
}

/**
 * Convert microseconds_d to uint8_t.
 */
uint8_t us_d_to_u8(microseconds_d microseconds)
{
    return ((uint8_t) (MAX(((microseconds_d) (0)), ((microseconds_d) (round(microseconds))))));
}

/**
 * Convert microseconds_d to unsigned int.
 */
unsigned int us_d_to_u(microseconds_d microseconds)
{
    return ((unsigned int) (MAX(((microseconds_d) (0)), ((microseconds_d) (round(microseconds))))));
}

/**
 * Convert microseconds_f to double.
 */
double us_f_to_d(microseconds_f microseconds)
{
    return ((double) (microseconds));
}

/**
 * Convert microseconds_f to float.
 */
float us_f_to_f(microseconds_f microseconds)
{
    return ((float) (microseconds));
}

/**
 * Convert microseconds_f to int.
 */
int us_f_to_i(microseconds_f microseconds)
{
    return ((int) (((microseconds_f) (round(((double) (microseconds)))))));
}

/**
 * Convert microseconds_f to int16_t.
 */
int16_t us_f_to_i16(microseconds_f microseconds)
{
    return ((int16_t) (((microseconds_f) (round(((double) (microseconds)))))));
}

/**
 * Convert microseconds_f to int32_t.
 */
int32_t us_f_to_i32(microseconds_f microseconds)
{
    return ((int32_t) (((microseconds_f) (round(((double) (microseconds)))))));
}

/**
 * Convert microseconds_f to int64_t.
 */
int64_t us_f_to_i64(microseconds_f microseconds)
{
    return ((int64_t) (((microseconds_f) (round(((double) (microseconds)))))));
}

/**
 * Convert microseconds_f to int8_t.
 */
int8_t us_f_to_i8(microseconds_f microseconds)
{
    return ((int8_t) (((microseconds_f) (round(((double) (microseconds)))))));
}

/**
 * Convert microseconds_f to microseconds_d.
 */
microseconds_d us_f_to_us_d(microseconds_f microseconds)
{
    return ((microseconds_d) (microseconds));
}

/**
 * Convert microseconds_f to microseconds_t.
 */
microseconds_t us_f_to_us_t(microseconds_f microseconds)
{
    return ((microseconds_t) (round(((double) (microseconds)))));
}

/**
 * Convert microseconds_f to microseconds_u.
 */
microseconds_u us_f_to_us_u(microseconds_f microseconds)
{
    return ((microseconds_u) (round(((double) (microseconds)))));
}

/**
 * Convert microseconds_f to milliseconds_d.
 */
milliseconds_d us_f_to_ms_d(microseconds_f microseconds)
{
    return ((milliseconds_d) (round(((double) (((microseconds_d) (microseconds)) / 1000.0)))));
}

/**
 * Convert microseconds_f to milliseconds_f.
 */
milliseconds_f us_f_to_ms_f(microseconds_f microseconds)
{
    return ((milliseconds_f) (((microseconds_d) (microseconds)) / 1000.0));
}

/**
 * Convert microseconds_f to milliseconds_t.
 */
milliseconds_t us_f_to_ms_t(microseconds_f microseconds)
{
    return ((milliseconds_t) (round(((double) (((microseconds_d) (microseconds)) / 1000.0)))));
}

/**
 * Convert microseconds_f to milliseconds_u.
 */
milliseconds_u us_f_to_ms_u(microseconds_f microseconds)
{
    return ((milliseconds_u) (round(((double) (((microseconds_d) (microseconds)) / 1000.0)))));
}

/**
 * Convert microseconds_f to seconds_d.
 */
seconds_d us_f_to_s_d(microseconds_f microseconds)
{
    return ((seconds_d) (round(((double) (((microseconds_d) (microseconds)) / 1000000.0)))));
}

/**
 * Convert microseconds_f to seconds_f.
 */
seconds_f us_f_to_s_f(microseconds_f microseconds)
{
    return ((seconds_f) (((microseconds_d) (microseconds)) / 1000000.0));
}

/**
 * Convert microseconds_f to seconds_t.
 */
seconds_t us_f_to_s_t(microseconds_f microseconds)
{
    return ((seconds_t) (round(((double) (((microseconds_d) (microseconds)) / 1000000.0)))));
}

/**
 * Convert microseconds_f to seconds_u.
 */
seconds_u us_f_to_s_u(microseconds_f microseconds)
{
    return ((seconds_u) (round(((double) (((microseconds_d) (microseconds)) / 1000000.0)))));
}

/**
 * Convert microseconds_f to uint16_t.
 */
uint16_t us_f_to_u16(microseconds_f microseconds)
{
    return ((uint16_t) (MAX(((microseconds_f) (0)), ((microseconds_f) (round(((double) (microseconds))))))));
}

/**
 * Convert microseconds_f to uint32_t.
 */
uint32_t us_f_to_u32(microseconds_f microseconds)
{
    return ((uint32_t) (MAX(((microseconds_f) (0)), ((microseconds_f) (round(((double) (microseconds))))))));
}

/**
 * Convert microseconds_f to uint64_t.
 */
uint64_t us_f_to_u64(microseconds_f microseconds)
{
    return ((uint64_t) (MAX(((microseconds_f) (0)), ((microseconds_f) (round(((double) (microseconds))))))));
}

/**
 * Convert microseconds_f to uint8_t.
 */
uint8_t us_f_to_u8(microseconds_f microseconds)
{
    return ((uint8_t) (MAX(((microseconds_f) (0)), ((microseconds_f) (round(((double) (microseconds))))))));
}

/**
 * Convert microseconds_f to unsigned int.
 */
unsigned int us_f_to_u(microseconds_f microseconds)
{
    return ((unsigned int) (MAX(((microseconds_f) (0)), ((microseconds_f) (round(((double) (microseconds))))))));
}

/**
 * Convert microseconds_t to double.
 */
double us_t_to_d(microseconds_t microseconds)
{
    return ((double) (microseconds));
}

/**
 * Convert microseconds_t to float.
 */
float us_t_to_f(microseconds_t microseconds)
{
    return ((float) (microseconds));
}

/**
 * Convert microseconds_t to int.
 */
int us_t_to_i(microseconds_t microseconds)
{
    return ((int) (microseconds));
}

/**
 * Convert microseconds_t to int16_t.
 */
int16_t us_t_to_i16(microseconds_t microseconds)
{
    return ((int16_t) (MIN(((microseconds_t) (SHRT_MAX)), MAX(((microseconds_t) (SHRT_MIN)), microseconds))));
}

/**
 * Convert microseconds_t to int32_t.
 */
int32_t us_t_to_i32(microseconds_t microseconds)
{
    return ((int32_t) (MIN(((microseconds_t) (INT_MAX)), MAX(((microseconds_t) (INT_MIN)), microseconds))));
}

/**
 * Convert microseconds_t to int64_t.
 */
int64_t us_t_to_i64(microseconds_t microseconds)
{
    return ((int64_t) (microseconds));
}

/**
 * Convert microseconds_t to int8_t.
 */
int8_t us_t_to_i8(microseconds_t microseconds)
{
    return ((int8_t) (MIN(((microseconds_t) (127)), MAX(((microseconds_t) (-128)), microseconds))));
}

/**
 * Convert microseconds_t to microseconds_d.
 */
microseconds_d us_t_to_us_d(microseconds_t microseconds)
{
    return ((microseconds_d) (microseconds));
}

/**
 * Convert microseconds_t to microseconds_f.
 */
microseconds_f us_t_to_us_f(microseconds_t microseconds)
{
    return ((microseconds_f) (microseconds));
}

/**
 * Convert microseconds_t to microseconds_u.
 */
microseconds_u us_t_to_us_u(microseconds_t microseconds)
{
    return ((microseconds_u) ((microseconds) < 0 ? 0 : microseconds));
}

/**
 * Convert microseconds_t to milliseconds_d.
 */
milliseconds_d us_t_to_ms_d(microseconds_t microseconds)
{
    return ((milliseconds_d) (round(((double) (((microseconds_d) (microseconds)) / 1000.0)))));
}

/**
 * Convert microseconds_t to milliseconds_f.
 */
milliseconds_f us_t_to_ms_f(microseconds_t microseconds)
{
    return ((milliseconds_f) (((microseconds_d) (microseconds)) / 1000.0));
}

/**
 * Convert microseconds_t to milliseconds_t.
 */
milliseconds_t us_t_to_ms_t(microseconds_t microseconds)
{
    return ((milliseconds_t) (round(((double) (((microseconds_d) (microseconds)) / 1000.0)))));
}

/**
 * Convert microseconds_t to milliseconds_u.
 */
milliseconds_u us_t_to_ms_u(microseconds_t microseconds)
{
    return ((milliseconds_u) (round(((double) (((microseconds_d) (microseconds)) / 1000.0)))));
}

/**
 * Convert microseconds_t to seconds_d.
 */
seconds_d us_t_to_s_d(microseconds_t microseconds)
{
    return ((seconds_d) (round(((double) (((microseconds_d) (microseconds)) / 1000000.0)))));
}

/**
 * Convert microseconds_t to seconds_f.
 */
seconds_f us_t_to_s_f(microseconds_t microseconds)
{
    return ((seconds_f) (((microseconds_d) (microseconds)) / 1000000.0));
}

/**
 * Convert microseconds_t to seconds_t.
 */
seconds_t us_t_to_s_t(microseconds_t microseconds)
{
    return ((seconds_t) (round(((double) (((microseconds_d) (microseconds)) / 1000000.0)))));
}

/**
 * Convert microseconds_t to seconds_u.
 */
seconds_u us_t_to_s_u(microseconds_t microseconds)
{
    return ((seconds_u) (round(((double) (((microseconds_d) (microseconds)) / 1000000.0)))));
}

/**
 * Convert microseconds_t to uint16_t.
 */
uint16_t us_t_to_u16(microseconds_t microseconds)
{
    return ((uint16_t) (MAX(((microseconds_t) (0)), microseconds)));
}

/**
 * Convert microseconds_t to uint32_t.
 */
uint32_t us_t_to_u32(microseconds_t microseconds)
{
    return ((uint32_t) (MAX(((microseconds_t) (0)), microseconds)));
}

/**
 * Convert microseconds_t to uint64_t.
 */
uint64_t us_t_to_u64(microseconds_t microseconds)
{
    return ((uint64_t) (MAX(((microseconds_t) (0)), microseconds)));
}

/**
 * Convert microseconds_t to uint8_t.
 */
uint8_t us_t_to_u8(microseconds_t microseconds)
{
    return ((uint8_t) (MAX(((microseconds_t) (0)), microseconds)));
}

/**
 * Convert microseconds_t to unsigned int.
 */
unsigned int us_t_to_u(microseconds_t microseconds)
{
    return ((unsigned int) (MAX(((microseconds_t) (0)), microseconds)));
}

/**
 * Convert microseconds_u to double.
 */
double us_u_to_d(microseconds_u microseconds)
{
    return ((double) (MIN(((microseconds_u) (INT_MAX)), microseconds)));
}

/**
 * Convert microseconds_u to float.
 */
float us_u_to_f(microseconds_u microseconds)
{
    return ((float) (MIN(((microseconds_u) (INT_MAX)), microseconds)));
}

/**
 * Convert microseconds_u to int.
 */
int us_u_to_i(microseconds_u microseconds)
{
    return ((int) (MIN(((microseconds_u) (INT_MAX)), microseconds)));
}

/**
 * Convert microseconds_u to int16_t.
 */
int16_t us_u_to_i16(microseconds_u microseconds)
{
    return ((int16_t) (MIN(((microseconds_u) (SHRT_MAX)), microseconds)));
}

/**
 * Convert microseconds_u to int32_t.
 */
int32_t us_u_to_i32(microseconds_u microseconds)
{
    return ((int32_t) (MIN(((microseconds_u) (INT_MAX)), microseconds)));
}

/**
 * Convert microseconds_u to int64_t.
 */
int64_t us_u_to_i64(microseconds_u microseconds)
{
    return ((int64_t) (microseconds));
}

/**
 * Convert microseconds_u to int8_t.
 */
int8_t us_u_to_i8(microseconds_u microseconds)
{
    return ((int8_t) (MIN(((microseconds_u) (127)), microseconds)));
}

/**
 * Convert microseconds_u to microseconds_d.
 */
microseconds_d us_u_to_us_d(microseconds_u microseconds)
{
    return ((microseconds_d) (microseconds));
}

/**
 * Convert microseconds_u to microseconds_f.
 */
microseconds_f us_u_to_us_f(microseconds_u microseconds)
{
    return ((microseconds_f) (microseconds));
}

/**
 * Convert microseconds_u to microseconds_t.
 */
microseconds_t us_u_to_us_t(microseconds_u microseconds)
{
    return ((microseconds_t) ((microseconds) > ((unsigned int) (INT_MAX)) ? ((unsigned int) (INT_MAX)) : microseconds));
}

/**
 * Convert microseconds_u to milliseconds_d.
 */
milliseconds_d us_u_to_ms_d(microseconds_u microseconds)
{
    return ((milliseconds_d) (round(((double) (((microseconds_d) (microseconds)) / 1000.0)))));
}

/**
 * Convert microseconds_u to milliseconds_f.
 */
milliseconds_f us_u_to_ms_f(microseconds_u microseconds)
{
    return ((milliseconds_f) (((microseconds_d) (microseconds)) / 1000.0));
}

/**
 * Convert microseconds_u to milliseconds_t.
 */
milliseconds_t us_u_to_ms_t(microseconds_u microseconds)
{
    return ((milliseconds_t) (round(((double) (((microseconds_d) (microseconds)) / 1000.0)))));
}

/**
 * Convert microseconds_u to milliseconds_u.
 */
milliseconds_u us_u_to_ms_u(microseconds_u microseconds)
{
    return ((milliseconds_u) (round(((double) (((microseconds_d) (microseconds)) / 1000.0)))));
}

/**
 * Convert microseconds_u to seconds_d.
 */
seconds_d us_u_to_s_d(microseconds_u microseconds)
{
    return ((seconds_d) (round(((double) (((microseconds_d) (microseconds)) / 1000000.0)))));
}

/**
 * Convert microseconds_u to seconds_f.
 */
seconds_f us_u_to_s_f(microseconds_u microseconds)
{
    return ((seconds_f) (((microseconds_d) (microseconds)) / 1000000.0));
}

/**
 * Convert microseconds_u to seconds_t.
 */
seconds_t us_u_to_s_t(microseconds_u microseconds)
{
    return ((seconds_t) (round(((double) (((microseconds_d) (microseconds)) / 1000000.0)))));
}

/**
 * Convert microseconds_u to seconds_u.
 */
seconds_u us_u_to_s_u(microseconds_u microseconds)
{
    return ((seconds_u) (round(((double) (((microseconds_d) (microseconds)) / 1000000.0)))));
}

/**
 * Convert microseconds_u to uint16_t.
 */
uint16_t us_u_to_u16(microseconds_u microseconds)
{
    return ((uint16_t) (MIN(((microseconds_u) (USHRT_MAX)), MAX(((microseconds_u) (0)), microseconds))));
}

/**
 * Convert microseconds_u to uint32_t.
 */
uint32_t us_u_to_u32(microseconds_u microseconds)
{
    return ((uint32_t) (MIN(((microseconds_u) (UINT_MAX)), MAX(((microseconds_u) (0)), microseconds))));
}

/**
 * Convert microseconds_u to uint64_t.
 */
uint64_t us_u_to_u64(microseconds_u microseconds)
{
    return ((uint64_t) (microseconds));
}

/**
 * Convert microseconds_u to uint8_t.
 */
uint8_t us_u_to_u8(microseconds_u microseconds)
{
    return ((uint8_t) (MIN(((microseconds_u) (255)), MAX(((microseconds_u) (0)), microseconds))));
}

/**
 * Convert microseconds_u to unsigned int.
 */
unsigned int us_u_to_u(microseconds_u microseconds)
{
    return ((unsigned int) (microseconds));
}

/**
 * Convert milliseconds_d to double.
 */
double ms_d_to_d(milliseconds_d milliseconds)
{
    return ((double) (milliseconds));
}

/**
 * Convert milliseconds_d to float.
 */
float ms_d_to_f(milliseconds_d milliseconds)
{
    return ((float) (milliseconds));
}

/**
 * Convert milliseconds_d to int.
 */
int ms_d_to_i(milliseconds_d milliseconds)
{
    return ((int) (((milliseconds_d) (round(milliseconds)))));
}

/**
 * Convert milliseconds_d to int16_t.
 */
int16_t ms_d_to_i16(milliseconds_d milliseconds)
{
    return ((int16_t) (((milliseconds_d) (round(milliseconds)))));
}

/**
 * Convert milliseconds_d to int32_t.
 */
int32_t ms_d_to_i32(milliseconds_d milliseconds)
{
    return ((int32_t) (((milliseconds_d) (round(milliseconds)))));
}

/**
 * Convert milliseconds_d to int64_t.
 */
int64_t ms_d_to_i64(milliseconds_d milliseconds)
{
    return ((int64_t) (((milliseconds_d) (round(milliseconds)))));
}

/**
 * Convert milliseconds_d to int8_t.
 */
int8_t ms_d_to_i8(milliseconds_d milliseconds)
{
    return ((int8_t) (((milliseconds_d) (round(milliseconds)))));
}

/**
 * Convert milliseconds_d to microseconds_d.
 */
microseconds_d ms_d_to_us_d(milliseconds_d milliseconds)
{
    return ((microseconds_d) (round(((double) (milliseconds * 1000.0)))));
}

/**
 * Convert milliseconds_d to microseconds_f.
 */
microseconds_f ms_d_to_us_f(milliseconds_d milliseconds)
{
    return ((microseconds_f) (milliseconds * 1000.0));
}

/**
 * Convert milliseconds_d to microseconds_t.
 */
microseconds_t ms_d_to_us_t(milliseconds_d milliseconds)
{
    return ((microseconds_t) (round(((double) (milliseconds * 1000.0)))));
}

/**
 * Convert milliseconds_d to microseconds_u.
 */
microseconds_u ms_d_to_us_u(milliseconds_d milliseconds)
{
    return ((microseconds_u) (round(((double) (milliseconds * 1000.0)))));
}

/**
 * Convert milliseconds_d to milliseconds_f.
 */
milliseconds_f ms_d_to_ms_f(milliseconds_d milliseconds)
{
    return ((milliseconds_f) (milliseconds));
}

/**
 * Convert milliseconds_d to milliseconds_t.
 */
milliseconds_t ms_d_to_ms_t(milliseconds_d milliseconds)
{
    return ((milliseconds_t) (round(((double) (milliseconds)))));
}

/**
 * Convert milliseconds_d to milliseconds_u.
 */
milliseconds_u ms_d_to_ms_u(milliseconds_d milliseconds)
{
    return ((milliseconds_u) (round(((double) (milliseconds)))));
}

/**
 * Convert milliseconds_d to seconds_d.
 */
seconds_d ms_d_to_s_d(milliseconds_d milliseconds)
{
    return ((seconds_d) (round(((double) (((milliseconds_d) (round(((double) (milliseconds))))) / 1000.0)))));
}

/**
 * Convert milliseconds_d to seconds_f.
 */
seconds_f ms_d_to_s_f(milliseconds_d milliseconds)
{
    return ((seconds_f) (((milliseconds_d) (round(((double) (milliseconds))))) / 1000.0));
}

/**
 * Convert milliseconds_d to seconds_t.
 */
seconds_t ms_d_to_s_t(milliseconds_d milliseconds)
{
    return ((seconds_t) (round(((double) (((milliseconds_d) (round(((double) (milliseconds))))) / 1000.0)))));
}

/**
 * Convert milliseconds_d to seconds_u.
 */
seconds_u ms_d_to_s_u(milliseconds_d milliseconds)
{
    return ((seconds_u) (round(((double) (((milliseconds_d) (round(((double) (milliseconds))))) / 1000.0)))));
}

/**
 * Convert milliseconds_d to uint16_t.
 */
uint16_t ms_d_to_u16(milliseconds_d milliseconds)
{
    return ((uint16_t) (MAX(((milliseconds_d) (0)), ((milliseconds_d) (round(milliseconds))))));
}

/**
 * Convert milliseconds_d to uint32_t.
 */
uint32_t ms_d_to_u32(milliseconds_d milliseconds)
{
    return ((uint32_t) (MAX(((milliseconds_d) (0)), ((milliseconds_d) (round(milliseconds))))));
}

/**
 * Convert milliseconds_d to uint64_t.
 */
uint64_t ms_d_to_u64(milliseconds_d milliseconds)
{
    return ((uint64_t) (MAX(((milliseconds_d) (0)), ((milliseconds_d) (round(milliseconds))))));
}

/**
 * Convert milliseconds_d to uint8_t.
 */
uint8_t ms_d_to_u8(milliseconds_d milliseconds)
{
    return ((uint8_t) (MAX(((milliseconds_d) (0)), ((milliseconds_d) (round(milliseconds))))));
}

/**
 * Convert milliseconds_d to unsigned int.
 */
unsigned int ms_d_to_u(milliseconds_d milliseconds)
{
    return ((unsigned int) (MAX(((milliseconds_d) (0)), ((milliseconds_d) (round(milliseconds))))));
}

/**
 * Convert milliseconds_f to double.
 */
double ms_f_to_d(milliseconds_f milliseconds)
{
    return ((double) (milliseconds));
}

/**
 * Convert milliseconds_f to float.
 */
float ms_f_to_f(milliseconds_f milliseconds)
{
    return ((float) (milliseconds));
}

/**
 * Convert milliseconds_f to int.
 */
int ms_f_to_i(milliseconds_f milliseconds)
{
    return ((int) (((milliseconds_f) (round(((double) (milliseconds)))))));
}

/**
 * Convert milliseconds_f to int16_t.
 */
int16_t ms_f_to_i16(milliseconds_f milliseconds)
{
    return ((int16_t) (((milliseconds_f) (round(((double) (milliseconds)))))));
}

/**
 * Convert milliseconds_f to int32_t.
 */
int32_t ms_f_to_i32(milliseconds_f milliseconds)
{
    return ((int32_t) (((milliseconds_f) (round(((double) (milliseconds)))))));
}

/**
 * Convert milliseconds_f to int64_t.
 */
int64_t ms_f_to_i64(milliseconds_f milliseconds)
{
    return ((int64_t) (((milliseconds_f) (round(((double) (milliseconds)))))));
}

/**
 * Convert milliseconds_f to int8_t.
 */
int8_t ms_f_to_i8(milliseconds_f milliseconds)
{
    return ((int8_t) (((milliseconds_f) (round(((double) (milliseconds)))))));
}

/**
 * Convert milliseconds_f to microseconds_d.
 */
microseconds_d ms_f_to_us_d(milliseconds_f milliseconds)
{
    return ((microseconds_d) (milliseconds * 1000.0f));
}

/**
 * Convert milliseconds_f to microseconds_f.
 */
microseconds_f ms_f_to_us_f(milliseconds_f milliseconds)
{
    return ((microseconds_f) (round(((double) (milliseconds * 1000.0f)))));
}

/**
 * Convert milliseconds_f to microseconds_t.
 */
microseconds_t ms_f_to_us_t(milliseconds_f milliseconds)
{
    return ((microseconds_t) (round(((double) (milliseconds * 1000.0f)))));
}

/**
 * Convert milliseconds_f to microseconds_u.
 */
microseconds_u ms_f_to_us_u(milliseconds_f milliseconds)
{
    return ((microseconds_u) (round(((double) (milliseconds * 1000.0f)))));
}

/**
 * Convert milliseconds_f to milliseconds_d.
 */
milliseconds_d ms_f_to_ms_d(milliseconds_f milliseconds)
{
    return ((milliseconds_d) (milliseconds));
}

/**
 * Convert milliseconds_f to milliseconds_t.
 */
milliseconds_t ms_f_to_ms_t(milliseconds_f milliseconds)
{
    return ((milliseconds_t) (round(((double) (milliseconds)))));
}

/**
 * Convert milliseconds_f to milliseconds_u.
 */
milliseconds_u ms_f_to_ms_u(milliseconds_f milliseconds)
{
    return ((milliseconds_u) (round(((double) (milliseconds)))));
}

/**
 * Convert milliseconds_f to seconds_d.
 */
seconds_d ms_f_to_s_d(milliseconds_f milliseconds)
{
    return ((seconds_d) (round(((double) (((milliseconds_d) (milliseconds)) / 1000.0)))));
}

/**
 * Convert milliseconds_f to seconds_f.
 */
seconds_f ms_f_to_s_f(milliseconds_f milliseconds)
{
    return ((seconds_f) (((milliseconds_d) (milliseconds)) / 1000.0));
}

/**
 * Convert milliseconds_f to seconds_t.
 */
seconds_t ms_f_to_s_t(milliseconds_f milliseconds)
{
    return ((seconds_t) (round(((double) (((milliseconds_d) (milliseconds)) / 1000.0)))));
}

/**
 * Convert milliseconds_f to seconds_u.
 */
seconds_u ms_f_to_s_u(milliseconds_f milliseconds)
{
    return ((seconds_u) (round(((double) (((milliseconds_d) (milliseconds)) / 1000.0)))));
}

/**
 * Convert milliseconds_f to uint16_t.
 */
uint16_t ms_f_to_u16(milliseconds_f milliseconds)
{
    return ((uint16_t) (MAX(((milliseconds_f) (0)), ((milliseconds_f) (round(((double) (milliseconds))))))));
}

/**
 * Convert milliseconds_f to uint32_t.
 */
uint32_t ms_f_to_u32(milliseconds_f milliseconds)
{
    return ((uint32_t) (MAX(((milliseconds_f) (0)), ((milliseconds_f) (round(((double) (milliseconds))))))));
}

/**
 * Convert milliseconds_f to uint64_t.
 */
uint64_t ms_f_to_u64(milliseconds_f milliseconds)
{
    return ((uint64_t) (MAX(((milliseconds_f) (0)), ((milliseconds_f) (round(((double) (milliseconds))))))));
}

/**
 * Convert milliseconds_f to uint8_t.
 */
uint8_t ms_f_to_u8(milliseconds_f milliseconds)
{
    return ((uint8_t) (MAX(((milliseconds_f) (0)), ((milliseconds_f) (round(((double) (milliseconds))))))));
}

/**
 * Convert milliseconds_f to unsigned int.
 */
unsigned int ms_f_to_u(milliseconds_f milliseconds)
{
    return ((unsigned int) (MAX(((milliseconds_f) (0)), ((milliseconds_f) (round(((double) (milliseconds))))))));
}

/**
 * Convert milliseconds_t to double.
 */
double ms_t_to_d(milliseconds_t milliseconds)
{
    return ((double) (milliseconds));
}

/**
 * Convert milliseconds_t to float.
 */
float ms_t_to_f(milliseconds_t milliseconds)
{
    return ((float) (milliseconds));
}

/**
 * Convert milliseconds_t to int.
 */
int ms_t_to_i(milliseconds_t milliseconds)
{
    return ((int) (milliseconds));
}

/**
 * Convert milliseconds_t to int16_t.
 */
int16_t ms_t_to_i16(milliseconds_t milliseconds)
{
    return ((int16_t) (MIN(((milliseconds_t) (SHRT_MAX)), MAX(((milliseconds_t) (SHRT_MIN)), milliseconds))));
}

/**
 * Convert milliseconds_t to int32_t.
 */
int32_t ms_t_to_i32(milliseconds_t milliseconds)
{
    return ((int32_t) (MIN(((milliseconds_t) (INT_MAX)), MAX(((milliseconds_t) (INT_MIN)), milliseconds))));
}

/**
 * Convert milliseconds_t to int64_t.
 */
int64_t ms_t_to_i64(milliseconds_t milliseconds)
{
    return ((int64_t) (milliseconds));
}

/**
 * Convert milliseconds_t to int8_t.
 */
int8_t ms_t_to_i8(milliseconds_t milliseconds)
{
    return ((int8_t) (MIN(((milliseconds_t) (127)), MAX(((milliseconds_t) (-128)), milliseconds))));
}

/**
 * Convert milliseconds_t to microseconds_d.
 */
microseconds_d ms_t_to_us_d(milliseconds_t milliseconds)
{
    return ((microseconds_d) (milliseconds * 1000));
}

/**
 * Convert milliseconds_t to microseconds_f.
 */
microseconds_f ms_t_to_us_f(milliseconds_t milliseconds)
{
    return ((microseconds_f) (milliseconds * 1000));
}

/**
 * Convert milliseconds_t to microseconds_t.
 */
microseconds_t ms_t_to_us_t(milliseconds_t milliseconds)
{
    return ((microseconds_t) (round(((double) (milliseconds * 1000)))));
}

/**
 * Convert milliseconds_t to microseconds_u.
 */
microseconds_u ms_t_to_us_u(milliseconds_t milliseconds)
{
    return ((microseconds_u) ((milliseconds * 1000) < 0 ? 0 : milliseconds * 1000));
}

/**
 * Convert milliseconds_t to milliseconds_d.
 */
milliseconds_d ms_t_to_ms_d(milliseconds_t milliseconds)
{
    return ((milliseconds_d) (milliseconds));
}

/**
 * Convert milliseconds_t to milliseconds_f.
 */
milliseconds_f ms_t_to_ms_f(milliseconds_t milliseconds)
{
    return ((milliseconds_f) (milliseconds));
}

/**
 * Convert milliseconds_t to milliseconds_u.
 */
milliseconds_u ms_t_to_ms_u(milliseconds_t milliseconds)
{
    return ((milliseconds_u) ((milliseconds) < 0 ? 0 : milliseconds));
}

/**
 * Convert milliseconds_t to seconds_d.
 */
seconds_d ms_t_to_s_d(milliseconds_t milliseconds)
{
    return ((seconds_d) (round(((double) (((milliseconds_d) (milliseconds)) / 1000.0)))));
}

/**
 * Convert milliseconds_t to seconds_f.
 */
seconds_f ms_t_to_s_f(milliseconds_t milliseconds)
{
    return ((seconds_f) (((milliseconds_d) (milliseconds)) / 1000.0));
}

/**
 * Convert milliseconds_t to seconds_t.
 */
seconds_t ms_t_to_s_t(milliseconds_t milliseconds)
{
    return ((seconds_t) (round(((double) (((milliseconds_d) (milliseconds)) / 1000.0)))));
}

/**
 * Convert milliseconds_t to seconds_u.
 */
seconds_u ms_t_to_s_u(milliseconds_t milliseconds)
{
    return ((seconds_u) (round(((double) (((milliseconds_d) (milliseconds)) / 1000.0)))));
}

/**
 * Convert milliseconds_t to uint16_t.
 */
uint16_t ms_t_to_u16(milliseconds_t milliseconds)
{
    return ((uint16_t) (MAX(((milliseconds_t) (0)), milliseconds)));
}

/**
 * Convert milliseconds_t to uint32_t.
 */
uint32_t ms_t_to_u32(milliseconds_t milliseconds)
{
    return ((uint32_t) (MAX(((milliseconds_t) (0)), milliseconds)));
}

/**
 * Convert milliseconds_t to uint64_t.
 */
uint64_t ms_t_to_u64(milliseconds_t milliseconds)
{
    return ((uint64_t) (MAX(((milliseconds_t) (0)), milliseconds)));
}

/**
 * Convert milliseconds_t to uint8_t.
 */
uint8_t ms_t_to_u8(milliseconds_t milliseconds)
{
    return ((uint8_t) (MAX(((milliseconds_t) (0)), milliseconds)));
}

/**
 * Convert milliseconds_t to unsigned int.
 */
unsigned int ms_t_to_u(milliseconds_t milliseconds)
{
    return ((unsigned int) (MAX(((milliseconds_t) (0)), milliseconds)));
}

/**
 * Convert milliseconds_u to double.
 */
double ms_u_to_d(milliseconds_u milliseconds)
{
    return ((double) (MIN(((milliseconds_u) (INT_MAX)), milliseconds)));
}

/**
 * Convert milliseconds_u to float.
 */
float ms_u_to_f(milliseconds_u milliseconds)
{
    return ((float) (MIN(((milliseconds_u) (INT_MAX)), milliseconds)));
}

/**
 * Convert milliseconds_u to int.
 */
int ms_u_to_i(milliseconds_u milliseconds)
{
    return ((int) (MIN(((milliseconds_u) (INT_MAX)), milliseconds)));
}

/**
 * Convert milliseconds_u to int16_t.
 */
int16_t ms_u_to_i16(milliseconds_u milliseconds)
{
    return ((int16_t) (MIN(((milliseconds_u) (SHRT_MAX)), milliseconds)));
}

/**
 * Convert milliseconds_u to int32_t.
 */
int32_t ms_u_to_i32(milliseconds_u milliseconds)
{
    return ((int32_t) (MIN(((milliseconds_u) (INT_MAX)), milliseconds)));
}

/**
 * Convert milliseconds_u to int64_t.
 */
int64_t ms_u_to_i64(milliseconds_u milliseconds)
{
    return ((int64_t) (milliseconds));
}

/**
 * Convert milliseconds_u to int8_t.
 */
int8_t ms_u_to_i8(milliseconds_u milliseconds)
{
    return ((int8_t) (MIN(((milliseconds_u) (127)), milliseconds)));
}

/**
 * Convert milliseconds_u to microseconds_d.
 */
microseconds_d ms_u_to_us_d(milliseconds_u milliseconds)
{
    return ((microseconds_d) (milliseconds * 1000));
}

/**
 * Convert milliseconds_u to microseconds_f.
 */
microseconds_f ms_u_to_us_f(milliseconds_u milliseconds)
{
    return ((microseconds_f) (milliseconds * 1000));
}

/**
 * Convert milliseconds_u to microseconds_t.
 */
microseconds_t ms_u_to_us_t(milliseconds_u milliseconds)
{
    return ((microseconds_t) ((milliseconds * 1000) > ((unsigned int) (INT_MAX)) ? ((unsigned int) (INT_MAX)) : milliseconds * 1000));
}

/**
 * Convert milliseconds_u to microseconds_u.
 */
microseconds_u ms_u_to_us_u(milliseconds_u milliseconds)
{
    return ((microseconds_u) (round(((double) (milliseconds * 1000)))));
}

/**
 * Convert milliseconds_u to milliseconds_d.
 */
milliseconds_d ms_u_to_ms_d(milliseconds_u milliseconds)
{
    return ((milliseconds_d) (milliseconds));
}

/**
 * Convert milliseconds_u to milliseconds_f.
 */
milliseconds_f ms_u_to_ms_f(milliseconds_u milliseconds)
{
    return ((milliseconds_f) (milliseconds));
}

/**
 * Convert milliseconds_u to milliseconds_t.
 */
milliseconds_t ms_u_to_ms_t(milliseconds_u milliseconds)
{
    return ((milliseconds_t) ((milliseconds) > ((unsigned int) (INT_MAX)) ? ((unsigned int) (INT_MAX)) : milliseconds));
}

/**
 * Convert milliseconds_u to seconds_d.
 */
seconds_d ms_u_to_s_d(milliseconds_u milliseconds)
{
    return ((seconds_d) (round(((double) (((milliseconds_d) (milliseconds)) / 1000.0)))));
}

/**
 * Convert milliseconds_u to seconds_f.
 */
seconds_f ms_u_to_s_f(milliseconds_u milliseconds)
{
    return ((seconds_f) (((milliseconds_d) (milliseconds)) / 1000.0));
}

/**
 * Convert milliseconds_u to seconds_t.
 */
seconds_t ms_u_to_s_t(milliseconds_u milliseconds)
{
    return ((seconds_t) (round(((double) (((milliseconds_d) (milliseconds)) / 1000.0)))));
}

/**
 * Convert milliseconds_u to seconds_u.
 */
seconds_u ms_u_to_s_u(milliseconds_u milliseconds)
{
    return ((seconds_u) (round(((double) (((milliseconds_d) (milliseconds)) / 1000.0)))));
}

/**
 * Convert milliseconds_u to uint16_t.
 */
uint16_t ms_u_to_u16(milliseconds_u milliseconds)
{
    return ((uint16_t) (MIN(((milliseconds_u) (USHRT_MAX)), MAX(((milliseconds_u) (0)), milliseconds))));
}

/**
 * Convert milliseconds_u to uint32_t.
 */
uint32_t ms_u_to_u32(milliseconds_u milliseconds)
{
    return ((uint32_t) (MIN(((milliseconds_u) (UINT_MAX)), MAX(((milliseconds_u) (0)), milliseconds))));
}

/**
 * Convert milliseconds_u to uint64_t.
 */
uint64_t ms_u_to_u64(milliseconds_u milliseconds)
{
    return ((uint64_t) (milliseconds));
}

/**
 * Convert milliseconds_u to uint8_t.
 */
uint8_t ms_u_to_u8(milliseconds_u milliseconds)
{
    return ((uint8_t) (MIN(((milliseconds_u) (255)), MAX(((milliseconds_u) (0)), milliseconds))));
}

/**
 * Convert milliseconds_u to unsigned int.
 */
unsigned int ms_u_to_u(milliseconds_u milliseconds)
{
    return ((unsigned int) (milliseconds));
}

/**
 * Convert seconds_d to double.
 */
double s_d_to_d(seconds_d seconds)
{
    return ((double) (seconds));
}

/**
 * Convert seconds_d to float.
 */
float s_d_to_f(seconds_d seconds)
{
    return ((float) (seconds));
}

/**
 * Convert seconds_d to int.
 */
int s_d_to_i(seconds_d seconds)
{
    return ((int) (((seconds_d) (round(seconds)))));
}

/**
 * Convert seconds_d to int16_t.
 */
int16_t s_d_to_i16(seconds_d seconds)
{
    return ((int16_t) (((seconds_d) (round(seconds)))));
}

/**
 * Convert seconds_d to int32_t.
 */
int32_t s_d_to_i32(seconds_d seconds)
{
    return ((int32_t) (((seconds_d) (round(seconds)))));
}

/**
 * Convert seconds_d to int64_t.
 */
int64_t s_d_to_i64(seconds_d seconds)
{
    return ((int64_t) (((seconds_d) (round(seconds)))));
}

/**
 * Convert seconds_d to int8_t.
 */
int8_t s_d_to_i8(seconds_d seconds)
{
    return ((int8_t) (((seconds_d) (round(seconds)))));
}

/**
 * Convert seconds_d to microseconds_d.
 */
microseconds_d s_d_to_us_d(seconds_d seconds)
{
    return ((microseconds_d) (round(((double) (seconds * 1000000.0)))));
}

/**
 * Convert seconds_d to microseconds_f.
 */
microseconds_f s_d_to_us_f(seconds_d seconds)
{
    return ((microseconds_f) (seconds * 1000000.0));
}

/**
 * Convert seconds_d to microseconds_t.
 */
microseconds_t s_d_to_us_t(seconds_d seconds)
{
    return ((microseconds_t) (round(((double) (seconds * 1000000.0)))));
}

/**
 * Convert seconds_d to microseconds_u.
 */
microseconds_u s_d_to_us_u(seconds_d seconds)
{
    return ((microseconds_u) (round(((double) (seconds * 1000000.0)))));
}

/**
 * Convert seconds_d to milliseconds_d.
 */
milliseconds_d s_d_to_ms_d(seconds_d seconds)
{
    return ((milliseconds_d) (round(((double) (seconds * 1000.0)))));
}

/**
 * Convert seconds_d to milliseconds_f.
 */
milliseconds_f s_d_to_ms_f(seconds_d seconds)
{
    return ((milliseconds_f) (seconds * 1000.0));
}

/**
 * Convert seconds_d to milliseconds_t.
 */
milliseconds_t s_d_to_ms_t(seconds_d seconds)
{
    return ((milliseconds_t) (round(((double) (seconds * 1000.0)))));
}

/**
 * Convert seconds_d to milliseconds_u.
 */
milliseconds_u s_d_to_ms_u(seconds_d seconds)
{
    return ((milliseconds_u) (round(((double) (seconds * 1000.0)))));
}

/**
 * Convert seconds_d to seconds_f.
 */
seconds_f s_d_to_s_f(seconds_d seconds)
{
    return ((seconds_f) (seconds));
}

/**
 * Convert seconds_d to seconds_t.
 */
seconds_t s_d_to_s_t(seconds_d seconds)
{
    return ((seconds_t) (round(((double) (seconds)))));
}

/**
 * Convert seconds_d to seconds_u.
 */
seconds_u s_d_to_s_u(seconds_d seconds)
{
    return ((seconds_u) (round(((double) (seconds)))));
}

/**
 * Convert seconds_d to uint16_t.
 */
uint16_t s_d_to_u16(seconds_d seconds)
{
    return ((uint16_t) (MAX(((seconds_d) (0)), ((seconds_d) (round(seconds))))));
}

/**
 * Convert seconds_d to uint32_t.
 */
uint32_t s_d_to_u32(seconds_d seconds)
{
    return ((uint32_t) (MAX(((seconds_d) (0)), ((seconds_d) (round(seconds))))));
}

/**
 * Convert seconds_d to uint64_t.
 */
uint64_t s_d_to_u64(seconds_d seconds)
{
    return ((uint64_t) (MAX(((seconds_d) (0)), ((seconds_d) (round(seconds))))));
}

/**
 * Convert seconds_d to uint8_t.
 */
uint8_t s_d_to_u8(seconds_d seconds)
{
    return ((uint8_t) (MAX(((seconds_d) (0)), ((seconds_d) (round(seconds))))));
}

/**
 * Convert seconds_d to unsigned int.
 */
unsigned int s_d_to_u(seconds_d seconds)
{
    return ((unsigned int) (MAX(((seconds_d) (0)), ((seconds_d) (round(seconds))))));
}

/**
 * Convert seconds_f to double.
 */
double s_f_to_d(seconds_f seconds)
{
    return ((double) (seconds));
}

/**
 * Convert seconds_f to float.
 */
float s_f_to_f(seconds_f seconds)
{
    return ((float) (seconds));
}

/**
 * Convert seconds_f to int.
 */
int s_f_to_i(seconds_f seconds)
{
    return ((int) (((seconds_f) (round(((double) (seconds)))))));
}

/**
 * Convert seconds_f to int16_t.
 */
int16_t s_f_to_i16(seconds_f seconds)
{
    return ((int16_t) (((seconds_f) (round(((double) (seconds)))))));
}

/**
 * Convert seconds_f to int32_t.
 */
int32_t s_f_to_i32(seconds_f seconds)
{
    return ((int32_t) (((seconds_f) (round(((double) (seconds)))))));
}

/**
 * Convert seconds_f to int64_t.
 */
int64_t s_f_to_i64(seconds_f seconds)
{
    return ((int64_t) (((seconds_f) (round(((double) (seconds)))))));
}

/**
 * Convert seconds_f to int8_t.
 */
int8_t s_f_to_i8(seconds_f seconds)
{
    return ((int8_t) (((seconds_f) (round(((double) (seconds)))))));
}

/**
 * Convert seconds_f to microseconds_d.
 */
microseconds_d s_f_to_us_d(seconds_f seconds)
{
    return ((microseconds_d) (seconds * 1000000.0f));
}

/**
 * Convert seconds_f to microseconds_f.
 */
microseconds_f s_f_to_us_f(seconds_f seconds)
{
    return ((microseconds_f) (round(((double) (seconds * 1000000.0f)))));
}

/**
 * Convert seconds_f to microseconds_t.
 */
microseconds_t s_f_to_us_t(seconds_f seconds)
{
    return ((microseconds_t) (round(((double) (seconds * 1000000.0f)))));
}

/**
 * Convert seconds_f to microseconds_u.
 */
microseconds_u s_f_to_us_u(seconds_f seconds)
{
    return ((microseconds_u) (round(((double) (seconds * 1000000.0f)))));
}

/**
 * Convert seconds_f to milliseconds_d.
 */
milliseconds_d s_f_to_ms_d(seconds_f seconds)
{
    return ((milliseconds_d) (seconds * 1000.0f));
}

/**
 * Convert seconds_f to milliseconds_f.
 */
milliseconds_f s_f_to_ms_f(seconds_f seconds)
{
    return ((milliseconds_f) (round(((double) (seconds * 1000.0f)))));
}

/**
 * Convert seconds_f to milliseconds_t.
 */
milliseconds_t s_f_to_ms_t(seconds_f seconds)
{
    return ((milliseconds_t) (round(((double) (seconds * 1000.0f)))));
}

/**
 * Convert seconds_f to milliseconds_u.
 */
milliseconds_u s_f_to_ms_u(seconds_f seconds)
{
    return ((milliseconds_u) (round(((double) (seconds * 1000.0f)))));
}

/**
 * Convert seconds_f to seconds_d.
 */
seconds_d s_f_to_s_d(seconds_f seconds)
{
    return ((seconds_d) (seconds));
}

/**
 * Convert seconds_f to seconds_t.
 */
seconds_t s_f_to_s_t(seconds_f seconds)
{
    return ((seconds_t) (round(((double) (seconds)))));
}

/**
 * Convert seconds_f to seconds_u.
 */
seconds_u s_f_to_s_u(seconds_f seconds)
{
    return ((seconds_u) (round(((double) (seconds)))));
}

/**
 * Convert seconds_f to uint16_t.
 */
uint16_t s_f_to_u16(seconds_f seconds)
{
    return ((uint16_t) (MAX(((seconds_f) (0)), ((seconds_f) (round(((double) (seconds))))))));
}

/**
 * Convert seconds_f to uint32_t.
 */
uint32_t s_f_to_u32(seconds_f seconds)
{
    return ((uint32_t) (MAX(((seconds_f) (0)), ((seconds_f) (round(((double) (seconds))))))));
}

/**
 * Convert seconds_f to uint64_t.
 */
uint64_t s_f_to_u64(seconds_f seconds)
{
    return ((uint64_t) (MAX(((seconds_f) (0)), ((seconds_f) (round(((double) (seconds))))))));
}

/**
 * Convert seconds_f to uint8_t.
 */
uint8_t s_f_to_u8(seconds_f seconds)
{
    return ((uint8_t) (MAX(((seconds_f) (0)), ((seconds_f) (round(((double) (seconds))))))));
}

/**
 * Convert seconds_f to unsigned int.
 */
unsigned int s_f_to_u(seconds_f seconds)
{
    return ((unsigned int) (MAX(((seconds_f) (0)), ((seconds_f) (round(((double) (seconds))))))));
}

/**
 * Convert seconds_t to double.
 */
double s_t_to_d(seconds_t seconds)
{
    return ((double) (seconds));
}

/**
 * Convert seconds_t to float.
 */
float s_t_to_f(seconds_t seconds)
{
    return ((float) (seconds));
}

/**
 * Convert seconds_t to int.
 */
int s_t_to_i(seconds_t seconds)
{
    return ((int) (seconds));
}

/**
 * Convert seconds_t to int16_t.
 */
int16_t s_t_to_i16(seconds_t seconds)
{
    return ((int16_t) (MIN(((seconds_t) (SHRT_MAX)), MAX(((seconds_t) (SHRT_MIN)), seconds))));
}

/**
 * Convert seconds_t to int32_t.
 */
int32_t s_t_to_i32(seconds_t seconds)
{
    return ((int32_t) (MIN(((seconds_t) (INT_MAX)), MAX(((seconds_t) (INT_MIN)), seconds))));
}

/**
 * Convert seconds_t to int64_t.
 */
int64_t s_t_to_i64(seconds_t seconds)
{
    return ((int64_t) (seconds));
}

/**
 * Convert seconds_t to int8_t.
 */
int8_t s_t_to_i8(seconds_t seconds)
{
    return ((int8_t) (MIN(((seconds_t) (127)), MAX(((seconds_t) (-128)), seconds))));
}

/**
 * Convert seconds_t to microseconds_d.
 */
microseconds_d s_t_to_us_d(seconds_t seconds)
{
    return ((microseconds_d) (seconds * 1000000));
}

/**
 * Convert seconds_t to microseconds_f.
 */
microseconds_f s_t_to_us_f(seconds_t seconds)
{
    return ((microseconds_f) (seconds * 1000000));
}

/**
 * Convert seconds_t to microseconds_t.
 */
microseconds_t s_t_to_us_t(seconds_t seconds)
{
    return ((microseconds_t) (round(((double) (seconds * 1000000)))));
}

/**
 * Convert seconds_t to microseconds_u.
 */
microseconds_u s_t_to_us_u(seconds_t seconds)
{
    return ((microseconds_u) ((seconds * 1000000) < 0 ? 0 : seconds * 1000000));
}

/**
 * Convert seconds_t to milliseconds_d.
 */
milliseconds_d s_t_to_ms_d(seconds_t seconds)
{
    return ((milliseconds_d) (seconds * 1000));
}

/**
 * Convert seconds_t to milliseconds_f.
 */
milliseconds_f s_t_to_ms_f(seconds_t seconds)
{
    return ((milliseconds_f) (seconds * 1000));
}

/**
 * Convert seconds_t to milliseconds_t.
 */
milliseconds_t s_t_to_ms_t(seconds_t seconds)
{
    return ((milliseconds_t) (round(((double) (seconds * 1000)))));
}

/**
 * Convert seconds_t to milliseconds_u.
 */
milliseconds_u s_t_to_ms_u(seconds_t seconds)
{
    return ((milliseconds_u) ((seconds * 1000) < 0 ? 0 : seconds * 1000));
}

/**
 * Convert seconds_t to seconds_d.
 */
seconds_d s_t_to_s_d(seconds_t seconds)
{
    return ((seconds_d) (seconds));
}

/**
 * Convert seconds_t to seconds_f.
 */
seconds_f s_t_to_s_f(seconds_t seconds)
{
    return ((seconds_f) (seconds));
}

/**
 * Convert seconds_t to seconds_u.
 */
seconds_u s_t_to_s_u(seconds_t seconds)
{
    return ((seconds_u) ((seconds) < 0 ? 0 : seconds));
}

/**
 * Convert seconds_t to uint16_t.
 */
uint16_t s_t_to_u16(seconds_t seconds)
{
    return ((uint16_t) (MAX(((seconds_t) (0)), seconds)));
}

/**
 * Convert seconds_t to uint32_t.
 */
uint32_t s_t_to_u32(seconds_t seconds)
{
    return ((uint32_t) (MAX(((seconds_t) (0)), seconds)));
}

/**
 * Convert seconds_t to uint64_t.
 */
uint64_t s_t_to_u64(seconds_t seconds)
{
    return ((uint64_t) (MAX(((seconds_t) (0)), seconds)));
}

/**
 * Convert seconds_t to uint8_t.
 */
uint8_t s_t_to_u8(seconds_t seconds)
{
    return ((uint8_t) (MAX(((seconds_t) (0)), seconds)));
}

/**
 * Convert seconds_t to unsigned int.
 */
unsigned int s_t_to_u(seconds_t seconds)
{
    return ((unsigned int) (MAX(((seconds_t) (0)), seconds)));
}

/**
 * Convert seconds_u to double.
 */
double s_u_to_d(seconds_u seconds)
{
    return ((double) (MIN(((seconds_u) (INT_MAX)), seconds)));
}

/**
 * Convert seconds_u to float.
 */
float s_u_to_f(seconds_u seconds)
{
    return ((float) (MIN(((seconds_u) (INT_MAX)), seconds)));
}

/**
 * Convert seconds_u to int.
 */
int s_u_to_i(seconds_u seconds)
{
    return ((int) (MIN(((seconds_u) (INT_MAX)), seconds)));
}

/**
 * Convert seconds_u to int16_t.
 */
int16_t s_u_to_i16(seconds_u seconds)
{
    return ((int16_t) (MIN(((seconds_u) (SHRT_MAX)), seconds)));
}

/**
 * Convert seconds_u to int32_t.
 */
int32_t s_u_to_i32(seconds_u seconds)
{
    return ((int32_t) (MIN(((seconds_u) (INT_MAX)), seconds)));
}

/**
 * Convert seconds_u to int64_t.
 */
int64_t s_u_to_i64(seconds_u seconds)
{
    return ((int64_t) (seconds));
}

/**
 * Convert seconds_u to int8_t.
 */
int8_t s_u_to_i8(seconds_u seconds)
{
    return ((int8_t) (MIN(((seconds_u) (127)), seconds)));
}

/**
 * Convert seconds_u to microseconds_d.
 */
microseconds_d s_u_to_us_d(seconds_u seconds)
{
    return ((microseconds_d) (seconds * 1000000));
}

/**
 * Convert seconds_u to microseconds_f.
 */
microseconds_f s_u_to_us_f(seconds_u seconds)
{
    return ((microseconds_f) (seconds * 1000000));
}

/**
 * Convert seconds_u to microseconds_t.
 */
microseconds_t s_u_to_us_t(seconds_u seconds)
{
    return ((microseconds_t) ((seconds * 1000000) > ((unsigned int) (INT_MAX)) ? ((unsigned int) (INT_MAX)) : seconds * 1000000));
}

/**
 * Convert seconds_u to microseconds_u.
 */
microseconds_u s_u_to_us_u(seconds_u seconds)
{
    return ((microseconds_u) (round(((double) (seconds * 1000000)))));
}

/**
 * Convert seconds_u to milliseconds_d.
 */
milliseconds_d s_u_to_ms_d(seconds_u seconds)
{
    return ((milliseconds_d) (seconds * 1000));
}

/**
 * Convert seconds_u to milliseconds_f.
 */
milliseconds_f s_u_to_ms_f(seconds_u seconds)
{
    return ((milliseconds_f) (seconds * 1000));
}

/**
 * Convert seconds_u to milliseconds_t.
 */
milliseconds_t s_u_to_ms_t(seconds_u seconds)
{
    return ((milliseconds_t) ((seconds * 1000) > ((unsigned int) (INT_MAX)) ? ((unsigned int) (INT_MAX)) : seconds * 1000));
}

/**
 * Convert seconds_u to milliseconds_u.
 */
milliseconds_u s_u_to_ms_u(seconds_u seconds)
{
    return ((milliseconds_u) (round(((double) (seconds * 1000)))));
}

/**
 * Convert seconds_u to seconds_d.
 */
seconds_d s_u_to_s_d(seconds_u seconds)
{
    return ((seconds_d) (seconds));
}

/**
 * Convert seconds_u to seconds_f.
 */
seconds_f s_u_to_s_f(seconds_u seconds)
{
    return ((seconds_f) (seconds));
}

/**
 * Convert seconds_u to seconds_t.
 */
seconds_t s_u_to_s_t(seconds_u seconds)
{
    return ((seconds_t) ((seconds) > ((unsigned int) (INT_MAX)) ? ((unsigned int) (INT_MAX)) : seconds));
}

/**
 * Convert seconds_u to uint16_t.
 */
uint16_t s_u_to_u16(seconds_u seconds)
{
    return ((uint16_t) (MIN(((seconds_u) (USHRT_MAX)), MAX(((seconds_u) (0)), seconds))));
}

/**
 * Convert seconds_u to uint32_t.
 */
uint32_t s_u_to_u32(seconds_u seconds)
{
    return ((uint32_t) (MIN(((seconds_u) (UINT_MAX)), MAX(((seconds_u) (0)), seconds))));
}

/**
 * Convert seconds_u to uint64_t.
 */
uint64_t s_u_to_u64(seconds_u seconds)
{
    return ((uint64_t) (seconds));
}

/**
 * Convert seconds_u to uint8_t.
 */
uint8_t s_u_to_u8(seconds_u seconds)
{
    return ((uint8_t) (MIN(((seconds_u) (255)), MAX(((seconds_u) (0)), seconds))));
}

/**
 * Convert seconds_u to unsigned int.
 */
unsigned int s_u_to_u(seconds_u seconds)
{
    return ((unsigned int) (seconds));
}

/**
 * Convert uint16_t to microseconds_d.
 */
microseconds_d u16_to_us_d(uint16_t microseconds)
{
    return ((microseconds_d) (microseconds));
}

/**
 * Convert uint16_t to microseconds_f.
 */
microseconds_f u16_to_us_f(uint16_t microseconds)
{
    return ((microseconds_f) (microseconds));
}

/**
 * Convert uint16_t to microseconds_t.
 */
microseconds_t u16_to_us_t(uint16_t microseconds)
{
    return ((microseconds_t) (microseconds));
}

/**
 * Convert uint16_t to microseconds_u.
 */
microseconds_u u16_to_us_u(uint16_t microseconds)
{
    return ((microseconds_u) (microseconds));
}

/**
 * Convert uint16_t to milliseconds_d.
 */
milliseconds_d u16_to_ms_d(uint16_t milliseconds)
{
    return ((milliseconds_d) (milliseconds));
}

/**
 * Convert uint16_t to milliseconds_f.
 */
milliseconds_f u16_to_ms_f(uint16_t milliseconds)
{
    return ((milliseconds_f) (milliseconds));
}

/**
 * Convert uint16_t to milliseconds_t.
 */
milliseconds_t u16_to_ms_t(uint16_t milliseconds)
{
    return ((milliseconds_t) (milliseconds));
}

/**
 * Convert uint16_t to milliseconds_u.
 */
milliseconds_u u16_to_ms_u(uint16_t milliseconds)
{
    return ((milliseconds_u) (milliseconds));
}

/**
 * Convert uint16_t to seconds_d.
 */
seconds_d u16_to_s_d(uint16_t seconds)
{
    return ((seconds_d) (seconds));
}

/**
 * Convert uint16_t to seconds_f.
 */
seconds_f u16_to_s_f(uint16_t seconds)
{
    return ((seconds_f) (seconds));
}

/**
 * Convert uint16_t to seconds_t.
 */
seconds_t u16_to_s_t(uint16_t seconds)
{
    return ((seconds_t) (seconds));
}

/**
 * Convert uint16_t to seconds_u.
 */
seconds_u u16_to_s_u(uint16_t seconds)
{
    return ((seconds_u) (seconds));
}

/**
 * Convert uint32_t to microseconds_d.
 */
microseconds_d u32_to_us_d(uint32_t microseconds)
{
    return ((microseconds_d) (MIN(((uint32_t) (INT_MAX)), microseconds)));
}

/**
 * Convert uint32_t to microseconds_f.
 */
microseconds_f u32_to_us_f(uint32_t microseconds)
{
    return ((microseconds_f) (MIN(((uint32_t) (INT_MAX)), microseconds)));
}

/**
 * Convert uint32_t to microseconds_t.
 */
microseconds_t u32_to_us_t(uint32_t microseconds)
{
    return ((microseconds_t) (MIN(((uint32_t) (INT_MAX)), microseconds)));
}

/**
 * Convert uint32_t to microseconds_u.
 */
microseconds_u u32_to_us_u(uint32_t microseconds)
{
    return ((microseconds_u) (MIN(((uint32_t) (UINT_MAX)), MAX(((uint32_t) (0)), microseconds))));
}

/**
 * Convert uint32_t to milliseconds_d.
 */
milliseconds_d u32_to_ms_d(uint32_t milliseconds)
{
    return ((milliseconds_d) (MIN(((uint32_t) (INT_MAX)), milliseconds)));
}

/**
 * Convert uint32_t to milliseconds_f.
 */
milliseconds_f u32_to_ms_f(uint32_t milliseconds)
{
    return ((milliseconds_f) (MIN(((uint32_t) (INT_MAX)), milliseconds)));
}

/**
 * Convert uint32_t to milliseconds_t.
 */
milliseconds_t u32_to_ms_t(uint32_t milliseconds)
{
    return ((milliseconds_t) (MIN(((uint32_t) (INT_MAX)), milliseconds)));
}

/**
 * Convert uint32_t to milliseconds_u.
 */
milliseconds_u u32_to_ms_u(uint32_t milliseconds)
{
    return ((milliseconds_u) (MIN(((uint32_t) (UINT_MAX)), MAX(((uint32_t) (0)), milliseconds))));
}

/**
 * Convert uint32_t to seconds_d.
 */
seconds_d u32_to_s_d(uint32_t seconds)
{
    return ((seconds_d) (MIN(((uint32_t) (INT_MAX)), seconds)));
}

/**
 * Convert uint32_t to seconds_f.
 */
seconds_f u32_to_s_f(uint32_t seconds)
{
    return ((seconds_f) (MIN(((uint32_t) (INT_MAX)), seconds)));
}

/**
 * Convert uint32_t to seconds_t.
 */
seconds_t u32_to_s_t(uint32_t seconds)
{
    return ((seconds_t) (MIN(((uint32_t) (INT_MAX)), seconds)));
}

/**
 * Convert uint32_t to seconds_u.
 */
seconds_u u32_to_s_u(uint32_t seconds)
{
    return ((seconds_u) (MIN(((uint32_t) (UINT_MAX)), MAX(((uint32_t) (0)), seconds))));
}

/**
 * Convert uint64_t to microseconds_d.
 */
microseconds_d u64_to_us_d(uint64_t microseconds)
{
    return ((microseconds_d) (MIN(((uint64_t) (INT_MAX)), microseconds)));
}

/**
 * Convert uint64_t to microseconds_f.
 */
microseconds_f u64_to_us_f(uint64_t microseconds)
{
    return ((microseconds_f) (MIN(((uint64_t) (INT_MAX)), microseconds)));
}

/**
 * Convert uint64_t to microseconds_t.
 */
microseconds_t u64_to_us_t(uint64_t microseconds)
{
    return ((microseconds_t) (MIN(((uint64_t) (INT_MAX)), microseconds)));
}

/**
 * Convert uint64_t to microseconds_u.
 */
microseconds_u u64_to_us_u(uint64_t microseconds)
{
    return ((microseconds_u) (MIN(((uint64_t) (UINT_MAX)), MAX(((uint64_t) (0)), microseconds))));
}

/**
 * Convert uint64_t to milliseconds_d.
 */
milliseconds_d u64_to_ms_d(uint64_t milliseconds)
{
    return ((milliseconds_d) (MIN(((uint64_t) (INT_MAX)), milliseconds)));
}

/**
 * Convert uint64_t to milliseconds_f.
 */
milliseconds_f u64_to_ms_f(uint64_t milliseconds)
{
    return ((milliseconds_f) (MIN(((uint64_t) (INT_MAX)), milliseconds)));
}

/**
 * Convert uint64_t to milliseconds_t.
 */
milliseconds_t u64_to_ms_t(uint64_t milliseconds)
{
    return ((milliseconds_t) (MIN(((uint64_t) (INT_MAX)), milliseconds)));
}

/**
 * Convert uint64_t to milliseconds_u.
 */
milliseconds_u u64_to_ms_u(uint64_t milliseconds)
{
    return ((milliseconds_u) (MIN(((uint64_t) (UINT_MAX)), MAX(((uint64_t) (0)), milliseconds))));
}

/**
 * Convert uint64_t to seconds_d.
 */
seconds_d u64_to_s_d(uint64_t seconds)
{
    return ((seconds_d) (MIN(((uint64_t) (INT_MAX)), seconds)));
}

/**
 * Convert uint64_t to seconds_f.
 */
seconds_f u64_to_s_f(uint64_t seconds)
{
    return ((seconds_f) (MIN(((uint64_t) (INT_MAX)), seconds)));
}

/**
 * Convert uint64_t to seconds_t.
 */
seconds_t u64_to_s_t(uint64_t seconds)
{
    return ((seconds_t) (MIN(((uint64_t) (INT_MAX)), seconds)));
}

/**
 * Convert uint64_t to seconds_u.
 */
seconds_u u64_to_s_u(uint64_t seconds)
{
    return ((seconds_u) (MIN(((uint64_t) (UINT_MAX)), MAX(((uint64_t) (0)), seconds))));
}

/**
 * Convert uint8_t to microseconds_d.
 */
microseconds_d u8_to_us_d(uint8_t microseconds)
{
    return ((microseconds_d) (microseconds));
}

/**
 * Convert uint8_t to microseconds_f.
 */
microseconds_f u8_to_us_f(uint8_t microseconds)
{
    return ((microseconds_f) (microseconds));
}

/**
 * Convert uint8_t to microseconds_t.
 */
microseconds_t u8_to_us_t(uint8_t microseconds)
{
    return ((microseconds_t) (microseconds));
}

/**
 * Convert uint8_t to microseconds_u.
 */
microseconds_u u8_to_us_u(uint8_t microseconds)
{
    return ((microseconds_u) (microseconds));
}

/**
 * Convert uint8_t to milliseconds_d.
 */
milliseconds_d u8_to_ms_d(uint8_t milliseconds)
{
    return ((milliseconds_d) (milliseconds));
}

/**
 * Convert uint8_t to milliseconds_f.
 */
milliseconds_f u8_to_ms_f(uint8_t milliseconds)
{
    return ((milliseconds_f) (milliseconds));
}

/**
 * Convert uint8_t to milliseconds_t.
 */
milliseconds_t u8_to_ms_t(uint8_t milliseconds)
{
    return ((milliseconds_t) (milliseconds));
}

/**
 * Convert uint8_t to milliseconds_u.
 */
milliseconds_u u8_to_ms_u(uint8_t milliseconds)
{
    return ((milliseconds_u) (milliseconds));
}

/**
 * Convert uint8_t to seconds_d.
 */
seconds_d u8_to_s_d(uint8_t seconds)
{
    return ((seconds_d) (seconds));
}

/**
 * Convert uint8_t to seconds_f.
 */
seconds_f u8_to_s_f(uint8_t seconds)
{
    return ((seconds_f) (seconds));
}

/**
 * Convert uint8_t to seconds_t.
 */
seconds_t u8_to_s_t(uint8_t seconds)
{
    return ((seconds_t) (seconds));
}

/**
 * Convert uint8_t to seconds_u.
 */
seconds_u u8_to_s_u(uint8_t seconds)
{
    return ((seconds_u) (seconds));
}

/**
 * Convert unsigned int to microseconds_d.
 */
microseconds_d u_to_us_d(unsigned int microseconds)
{
    return ((microseconds_d) (MIN(((unsigned int) (INT_MAX)), microseconds)));
}

/**
 * Convert unsigned int to microseconds_f.
 */
microseconds_f u_to_us_f(unsigned int microseconds)
{
    return ((microseconds_f) (MIN(((unsigned int) (INT_MAX)), microseconds)));
}

/**
 * Convert unsigned int to microseconds_t.
 */
microseconds_t u_to_us_t(unsigned int microseconds)
{
    return ((microseconds_t) (MIN(((unsigned int) (INT_MAX)), microseconds)));
}

/**
 * Convert unsigned int to microseconds_u.
 */
microseconds_u u_to_us_u(unsigned int microseconds)
{
    return ((microseconds_u) (microseconds));
}

/**
 * Convert unsigned int to milliseconds_d.
 */
milliseconds_d u_to_ms_d(unsigned int milliseconds)
{
    return ((milliseconds_d) (MIN(((unsigned int) (INT_MAX)), milliseconds)));
}

/**
 * Convert unsigned int to milliseconds_f.
 */
milliseconds_f u_to_ms_f(unsigned int milliseconds)
{
    return ((milliseconds_f) (MIN(((unsigned int) (INT_MAX)), milliseconds)));
}

/**
 * Convert unsigned int to milliseconds_t.
 */
milliseconds_t u_to_ms_t(unsigned int milliseconds)
{
    return ((milliseconds_t) (MIN(((unsigned int) (INT_MAX)), milliseconds)));
}

/**
 * Convert unsigned int to milliseconds_u.
 */
milliseconds_u u_to_ms_u(unsigned int milliseconds)
{
    return ((milliseconds_u) (milliseconds));
}

/**
 * Convert unsigned int to seconds_d.
 */
seconds_d u_to_s_d(unsigned int seconds)
{
    return ((seconds_d) (MIN(((unsigned int) (INT_MAX)), seconds)));
}

/**
 * Convert unsigned int to seconds_f.
 */
seconds_f u_to_s_f(unsigned int seconds)
{
    return ((seconds_f) (MIN(((unsigned int) (INT_MAX)), seconds)));
}

/**
 * Convert unsigned int to seconds_t.
 */
seconds_t u_to_s_t(unsigned int seconds)
{
    return ((seconds_t) (MIN(((unsigned int) (INT_MAX)), seconds)));
}

/**
 * Convert unsigned int to seconds_u.
 */
seconds_u u_to_s_u(unsigned int seconds)
{
    return ((seconds_u) (seconds));
}

//Angle Conversion Functions

/**
 * Convert degrees_d to degrees_f.
 */
degrees_f deg_d_to_deg_f(degrees_d degrees)
{
    return ((degrees_f) (degrees));
}

/**
 * Convert degrees_d to degrees_t.
 */
degrees_t deg_d_to_deg_t(degrees_d degrees)
{
    return ((degrees_t) (round(((double) (degrees)))));
}

/**
 * Convert degrees_d to degrees_u.
 */
degrees_u deg_d_to_deg_u(degrees_d degrees)
{
    return ((degrees_u) (round(((double) (degrees)))));
}

/**
 * Convert degrees_d to double.
 */
double deg_d_to_d(degrees_d degrees)
{
    return ((double) (degrees));
}

/**
 * Convert degrees_d to float.
 */
float deg_d_to_f(degrees_d degrees)
{
    return ((float) (degrees));
}

/**
 * Convert degrees_d to int.
 */
int deg_d_to_i(degrees_d degrees)
{
    return ((int) (((degrees_d) (round(degrees)))));
}

/**
 * Convert degrees_d to int16_t.
 */
int16_t deg_d_to_i16(degrees_d degrees)
{
    return ((int16_t) (((degrees_d) (round(degrees)))));
}

/**
 * Convert degrees_d to int32_t.
 */
int32_t deg_d_to_i32(degrees_d degrees)
{
    return ((int32_t) (((degrees_d) (round(degrees)))));
}

/**
 * Convert degrees_d to int64_t.
 */
int64_t deg_d_to_i64(degrees_d degrees)
{
    return ((int64_t) (((degrees_d) (round(degrees)))));
}

/**
 * Convert degrees_d to int8_t.
 */
int8_t deg_d_to_i8(degrees_d degrees)
{
    return ((int8_t) (((degrees_d) (round(degrees)))));
}

/**
 * Convert degrees_d to radians_d.
 */
radians_d deg_d_to_rad_d(degrees_d degrees)
{
    return ((radians_d) (((double) degrees) * M_PI / 180.0));
}

/**
 * Convert degrees_d to radians_f.
 */
radians_f deg_d_to_rad_f(degrees_d degrees)
{
    return ((radians_f) (((double) degrees) * M_PI / 180.0));
}

/**
 * Convert degrees_d to radians_t.
 */
radians_t deg_d_to_rad_t(degrees_d degrees)
{
    return ((radians_t) (round(((double) degrees) * M_PI / 180.0)));
}

/**
 * Convert degrees_d to radians_u.
 */
radians_u deg_d_to_rad_u(degrees_d degrees)
{
    return ((radians_u) (round(((double) degrees) * M_PI / 180.0)));
}

/**
 * Convert degrees_d to uint16_t.
 */
uint16_t deg_d_to_u16(degrees_d degrees)
{
    return ((uint16_t) (MAX(((degrees_d) (0)), ((degrees_d) (round(degrees))))));
}

/**
 * Convert degrees_d to uint32_t.
 */
uint32_t deg_d_to_u32(degrees_d degrees)
{
    return ((uint32_t) (MAX(((degrees_d) (0)), ((degrees_d) (round(degrees))))));
}

/**
 * Convert degrees_d to uint64_t.
 */
uint64_t deg_d_to_u64(degrees_d degrees)
{
    return ((uint64_t) (MAX(((degrees_d) (0)), ((degrees_d) (round(degrees))))));
}

/**
 * Convert degrees_d to uint8_t.
 */
uint8_t deg_d_to_u8(degrees_d degrees)
{
    return ((uint8_t) (MAX(((degrees_d) (0)), ((degrees_d) (round(degrees))))));
}

/**
 * Convert degrees_d to unsigned int.
 */
unsigned int deg_d_to_u(degrees_d degrees)
{
    return ((unsigned int) (MAX(((degrees_d) (0)), ((degrees_d) (round(degrees))))));
}

/**
 * Convert degrees_f to degrees_d.
 */
degrees_d deg_f_to_deg_d(degrees_f degrees)
{
    return ((degrees_d) (degrees));
}

/**
 * Convert degrees_f to degrees_t.
 */
degrees_t deg_f_to_deg_t(degrees_f degrees)
{
    return ((degrees_t) (round(((double) (degrees)))));
}

/**
 * Convert degrees_f to degrees_u.
 */
degrees_u deg_f_to_deg_u(degrees_f degrees)
{
    return ((degrees_u) (round(((double) (degrees)))));
}

/**
 * Convert degrees_f to double.
 */
double deg_f_to_d(degrees_f degrees)
{
    return ((double) (degrees));
}

/**
 * Convert degrees_f to float.
 */
float deg_f_to_f(degrees_f degrees)
{
    return ((float) (degrees));
}

/**
 * Convert degrees_f to int.
 */
int deg_f_to_i(degrees_f degrees)
{
    return ((int) (((degrees_f) (round(((double) (degrees)))))));
}

/**
 * Convert degrees_f to int16_t.
 */
int16_t deg_f_to_i16(degrees_f degrees)
{
    return ((int16_t) (((degrees_f) (round(((double) (degrees)))))));
}

/**
 * Convert degrees_f to int32_t.
 */
int32_t deg_f_to_i32(degrees_f degrees)
{
    return ((int32_t) (((degrees_f) (round(((double) (degrees)))))));
}

/**
 * Convert degrees_f to int64_t.
 */
int64_t deg_f_to_i64(degrees_f degrees)
{
    return ((int64_t) (((degrees_f) (round(((double) (degrees)))))));
}

/**
 * Convert degrees_f to int8_t.
 */
int8_t deg_f_to_i8(degrees_f degrees)
{
    return ((int8_t) (((degrees_f) (round(((double) (degrees)))))));
}

/**
 * Convert degrees_f to radians_d.
 */
radians_d deg_f_to_rad_d(degrees_f degrees)
{
    return ((radians_d) (((double) degrees) * M_PI / 180.0));
}

/**
 * Convert degrees_f to radians_f.
 */
radians_f deg_f_to_rad_f(degrees_f degrees)
{
    return ((radians_f) (((double) degrees) * M_PI / 180.0));
}

/**
 * Convert degrees_f to radians_t.
 */
radians_t deg_f_to_rad_t(degrees_f degrees)
{
    return ((radians_t) (round(((double) degrees) * M_PI / 180.0)));
}

/**
 * Convert degrees_f to radians_u.
 */
radians_u deg_f_to_rad_u(degrees_f degrees)
{
    return ((radians_u) (round(((double) degrees) * M_PI / 180.0)));
}

/**
 * Convert degrees_f to uint16_t.
 */
uint16_t deg_f_to_u16(degrees_f degrees)
{
    return ((uint16_t) (MAX(((degrees_f) (0)), ((degrees_f) (round(((double) (degrees))))))));
}

/**
 * Convert degrees_f to uint32_t.
 */
uint32_t deg_f_to_u32(degrees_f degrees)
{
    return ((uint32_t) (MAX(((degrees_f) (0)), ((degrees_f) (round(((double) (degrees))))))));
}

/**
 * Convert degrees_f to uint64_t.
 */
uint64_t deg_f_to_u64(degrees_f degrees)
{
    return ((uint64_t) (MAX(((degrees_f) (0)), ((degrees_f) (round(((double) (degrees))))))));
}

/**
 * Convert degrees_f to uint8_t.
 */
uint8_t deg_f_to_u8(degrees_f degrees)
{
    return ((uint8_t) (MAX(((degrees_f) (0)), ((degrees_f) (round(((double) (degrees))))))));
}

/**
 * Convert degrees_f to unsigned int.
 */
unsigned int deg_f_to_u(degrees_f degrees)
{
    return ((unsigned int) (MAX(((degrees_f) (0)), ((degrees_f) (round(((double) (degrees))))))));
}

/**
 * Convert degrees_t to degrees_d.
 */
degrees_d deg_t_to_deg_d(degrees_t degrees)
{
    return ((degrees_d) (degrees));
}

/**
 * Convert degrees_t to degrees_f.
 */
degrees_f deg_t_to_deg_f(degrees_t degrees)
{
    return ((degrees_f) (degrees));
}

/**
 * Convert degrees_t to degrees_u.
 */
degrees_u deg_t_to_deg_u(degrees_t degrees)
{
    return ((degrees_u) ((degrees) < 0 ? 0 : degrees));
}

/**
 * Convert degrees_t to double.
 */
double deg_t_to_d(degrees_t degrees)
{
    return ((double) (degrees));
}

/**
 * Convert degrees_t to float.
 */
float deg_t_to_f(degrees_t degrees)
{
    return ((float) (degrees));
}

/**
 * Convert degrees_t to int.
 */
int deg_t_to_i(degrees_t degrees)
{
    return ((int) (degrees));
}

/**
 * Convert degrees_t to int16_t.
 */
int16_t deg_t_to_i16(degrees_t degrees)
{
    return ((int16_t) (MIN(((degrees_t) (SHRT_MAX)), MAX(((degrees_t) (SHRT_MIN)), degrees))));
}

/**
 * Convert degrees_t to int32_t.
 */
int32_t deg_t_to_i32(degrees_t degrees)
{
    return ((int32_t) (MIN(((degrees_t) (INT_MAX)), MAX(((degrees_t) (INT_MIN)), degrees))));
}

/**
 * Convert degrees_t to int64_t.
 */
int64_t deg_t_to_i64(degrees_t degrees)
{
    return ((int64_t) (degrees));
}

/**
 * Convert degrees_t to int8_t.
 */
int8_t deg_t_to_i8(degrees_t degrees)
{
    return ((int8_t) (MIN(((degrees_t) (127)), MAX(((degrees_t) (-128)), degrees))));
}

/**
 * Convert degrees_t to radians_d.
 */
radians_d deg_t_to_rad_d(degrees_t degrees)
{
    return ((radians_d) (((double) degrees) * M_PI / 180.0));
}

/**
 * Convert degrees_t to radians_f.
 */
radians_f deg_t_to_rad_f(degrees_t degrees)
{
    return ((radians_f) (((double) degrees) * M_PI / 180.0));
}

/**
 * Convert degrees_t to radians_t.
 */
radians_t deg_t_to_rad_t(degrees_t degrees)
{
    return ((radians_t) (((double) degrees) * M_PI / 180.0));
}

/**
 * Convert degrees_t to radians_u.
 */
radians_u deg_t_to_rad_u(degrees_t degrees)
{
    return ((radians_u) (((double) degrees) * M_PI / 180.0));
}

/**
 * Convert degrees_t to uint16_t.
 */
uint16_t deg_t_to_u16(degrees_t degrees)
{
    return ((uint16_t) (MAX(((degrees_t) (0)), degrees)));
}

/**
 * Convert degrees_t to uint32_t.
 */
uint32_t deg_t_to_u32(degrees_t degrees)
{
    return ((uint32_t) (MAX(((degrees_t) (0)), degrees)));
}

/**
 * Convert degrees_t to uint64_t.
 */
uint64_t deg_t_to_u64(degrees_t degrees)
{
    return ((uint64_t) (MAX(((degrees_t) (0)), degrees)));
}

/**
 * Convert degrees_t to uint8_t.
 */
uint8_t deg_t_to_u8(degrees_t degrees)
{
    return ((uint8_t) (MAX(((degrees_t) (0)), degrees)));
}

/**
 * Convert degrees_t to unsigned int.
 */
unsigned int deg_t_to_u(degrees_t degrees)
{
    return ((unsigned int) (MAX(((degrees_t) (0)), degrees)));
}

/**
 * Convert degrees_u to degrees_d.
 */
degrees_d deg_u_to_deg_d(degrees_u degrees)
{
    return ((degrees_d) (degrees));
}

/**
 * Convert degrees_u to degrees_f.
 */
degrees_f deg_u_to_deg_f(degrees_u degrees)
{
    return ((degrees_f) (degrees));
}

/**
 * Convert degrees_u to degrees_t.
 */
degrees_t deg_u_to_deg_t(degrees_u degrees)
{
    return ((degrees_t) ((degrees) > ((unsigned int) (INT_MAX)) ? ((unsigned int) (INT_MAX)) : degrees));
}

/**
 * Convert degrees_u to double.
 */
double deg_u_to_d(degrees_u degrees)
{
    return ((double) (MIN(((degrees_u) (INT_MAX)), degrees)));
}

/**
 * Convert degrees_u to float.
 */
float deg_u_to_f(degrees_u degrees)
{
    return ((float) (MIN(((degrees_u) (INT_MAX)), degrees)));
}

/**
 * Convert degrees_u to int.
 */
int deg_u_to_i(degrees_u degrees)
{
    return ((int) (MIN(((degrees_u) (INT_MAX)), degrees)));
}

/**
 * Convert degrees_u to int16_t.
 */
int16_t deg_u_to_i16(degrees_u degrees)
{
    return ((int16_t) (MIN(((degrees_u) (SHRT_MAX)), degrees)));
}

/**
 * Convert degrees_u to int32_t.
 */
int32_t deg_u_to_i32(degrees_u degrees)
{
    return ((int32_t) (MIN(((degrees_u) (INT_MAX)), degrees)));
}

/**
 * Convert degrees_u to int64_t.
 */
int64_t deg_u_to_i64(degrees_u degrees)
{
    return ((int64_t) (degrees));
}

/**
 * Convert degrees_u to int8_t.
 */
int8_t deg_u_to_i8(degrees_u degrees)
{
    return ((int8_t) (MIN(((degrees_u) (127)), degrees)));
}

/**
 * Convert degrees_u to radians_d.
 */
radians_d deg_u_to_rad_d(degrees_u degrees)
{
    return ((radians_d) (((double) degrees) * M_PI / 180.0));
}

/**
 * Convert degrees_u to radians_f.
 */
radians_f deg_u_to_rad_f(degrees_u degrees)
{
    return ((radians_f) (((double) degrees) * M_PI / 180.0));
}

/**
 * Convert degrees_u to radians_t.
 */
radians_t deg_u_to_rad_t(degrees_u degrees)
{
    return ((radians_t) (((double) degrees) * M_PI / 180.0));
}

/**
 * Convert degrees_u to radians_u.
 */
radians_u deg_u_to_rad_u(degrees_u degrees)
{
    return ((radians_u) (((double) degrees) * M_PI / 180.0));
}

/**
 * Convert degrees_u to uint16_t.
 */
uint16_t deg_u_to_u16(degrees_u degrees)
{
    return ((uint16_t) (MIN(((degrees_u) (USHRT_MAX)), MAX(((degrees_u) (0)), degrees))));
}

/**
 * Convert degrees_u to uint32_t.
 */
uint32_t deg_u_to_u32(degrees_u degrees)
{
    return ((uint32_t) (MIN(((degrees_u) (UINT_MAX)), MAX(((degrees_u) (0)), degrees))));
}

/**
 * Convert degrees_u to uint64_t.
 */
uint64_t deg_u_to_u64(degrees_u degrees)
{
    return ((uint64_t) (degrees));
}

/**
 * Convert degrees_u to uint8_t.
 */
uint8_t deg_u_to_u8(degrees_u degrees)
{
    return ((uint8_t) (MIN(((degrees_u) (255)), MAX(((degrees_u) (0)), degrees))));
}

/**
 * Convert degrees_u to unsigned int.
 */
unsigned int deg_u_to_u(degrees_u degrees)
{
    return ((unsigned int) (degrees));
}

/**
 * Convert double to degrees_d.
 */
degrees_d d_to_deg_d(double degrees)
{
    return ((degrees_d) (degrees));
}

/**
 * Convert double to degrees_f.
 */
degrees_f d_to_deg_f(double degrees)
{
    return ((degrees_f) (degrees));
}

/**
 * Convert double to degrees_t.
 */
degrees_t d_to_deg_t(double degrees)
{
    return ((degrees_t) (((double) (round(degrees)))));
}

/**
 * Convert double to degrees_u.
 */
degrees_u d_to_deg_u(double degrees)
{
    return ((degrees_u) (MAX(((double) (0)), ((double) (round(degrees))))));
}

/**
 * Convert double to radians_d.
 */
radians_d d_to_rad_d(double radians)
{
    return ((radians_d) (radians));
}

/**
 * Convert double to radians_f.
 */
radians_f d_to_rad_f(double radians)
{
    return ((radians_f) (radians));
}

/**
 * Convert double to radians_t.
 */
radians_t d_to_rad_t(double radians)
{
    return ((radians_t) (((double) (round(radians)))));
}

/**
 * Convert double to radians_u.
 */
radians_u d_to_rad_u(double radians)
{
    return ((radians_u) (MAX(((double) (0)), ((double) (round(radians))))));
}

/**
 * Convert float to degrees_d.
 */
degrees_d f_to_deg_d(float degrees)
{
    return ((degrees_d) (degrees));
}

/**
 * Convert float to degrees_f.
 */
degrees_f f_to_deg_f(float degrees)
{
    return ((degrees_f) (degrees));
}

/**
 * Convert float to degrees_t.
 */
degrees_t f_to_deg_t(float degrees)
{
    return ((degrees_t) (((float) (round(((double) (degrees)))))));
}

/**
 * Convert float to degrees_u.
 */
degrees_u f_to_deg_u(float degrees)
{
    return ((degrees_u) (MAX(((float) (0)), ((float) (round(((double) (degrees))))))));
}

/**
 * Convert float to radians_d.
 */
radians_d f_to_rad_d(float radians)
{
    return ((radians_d) (radians));
}

/**
 * Convert float to radians_f.
 */
radians_f f_to_rad_f(float radians)
{
    return ((radians_f) (radians));
}

/**
 * Convert float to radians_t.
 */
radians_t f_to_rad_t(float radians)
{
    return ((radians_t) (((float) (round(((double) (radians)))))));
}

/**
 * Convert float to radians_u.
 */
radians_u f_to_rad_u(float radians)
{
    return ((radians_u) (MAX(((float) (0)), ((float) (round(((double) (radians))))))));
}

/**
 * Convert int16_t to degrees_d.
 */
degrees_d i16_to_deg_d(int16_t degrees)
{
    return ((degrees_d) (degrees));
}

/**
 * Convert int16_t to degrees_f.
 */
degrees_f i16_to_deg_f(int16_t degrees)
{
    return ((degrees_f) (degrees));
}

/**
 * Convert int16_t to degrees_t.
 */
degrees_t i16_to_deg_t(int16_t degrees)
{
    return ((degrees_t) (degrees));
}

/**
 * Convert int16_t to degrees_u.
 */
degrees_u i16_to_deg_u(int16_t degrees)
{
    return ((degrees_u) (MAX(((int16_t) (0)), degrees)));
}

/**
 * Convert int16_t to radians_d.
 */
radians_d i16_to_rad_d(int16_t radians)
{
    return ((radians_d) (radians));
}

/**
 * Convert int16_t to radians_f.
 */
radians_f i16_to_rad_f(int16_t radians)
{
    return ((radians_f) (radians));
}

/**
 * Convert int16_t to radians_t.
 */
radians_t i16_to_rad_t(int16_t radians)
{
    return ((radians_t) (radians));
}

/**
 * Convert int16_t to radians_u.
 */
radians_u i16_to_rad_u(int16_t radians)
{
    return ((radians_u) (MAX(((int16_t) (0)), radians)));
}

/**
 * Convert int32_t to degrees_d.
 */
degrees_d i32_to_deg_d(int32_t degrees)
{
    return ((degrees_d) (degrees));
}

/**
 * Convert int32_t to degrees_f.
 */
degrees_f i32_to_deg_f(int32_t degrees)
{
    return ((degrees_f) (degrees));
}

/**
 * Convert int32_t to degrees_t.
 */
degrees_t i32_to_deg_t(int32_t degrees)
{
    return ((degrees_t) (MIN(((int32_t) (INT_MAX)), MAX(((int32_t) (INT_MIN)), degrees))));
}

/**
 * Convert int32_t to degrees_u.
 */
degrees_u i32_to_deg_u(int32_t degrees)
{
    return ((degrees_u) (MAX(((int32_t) (0)), degrees)));
}

/**
 * Convert int32_t to radians_d.
 */
radians_d i32_to_rad_d(int32_t radians)
{
    return ((radians_d) (radians));
}

/**
 * Convert int32_t to radians_f.
 */
radians_f i32_to_rad_f(int32_t radians)
{
    return ((radians_f) (radians));
}

/**
 * Convert int32_t to radians_t.
 */
radians_t i32_to_rad_t(int32_t radians)
{
    return ((radians_t) (MIN(((int32_t) (INT_MAX)), MAX(((int32_t) (INT_MIN)), radians))));
}

/**
 * Convert int32_t to radians_u.
 */
radians_u i32_to_rad_u(int32_t radians)
{
    return ((radians_u) (MAX(((int32_t) (0)), radians)));
}

/**
 * Convert int64_t to degrees_d.
 */
degrees_d i64_to_deg_d(int64_t degrees)
{
    return ((degrees_d) (degrees));
}

/**
 * Convert int64_t to degrees_f.
 */
degrees_f i64_to_deg_f(int64_t degrees)
{
    return ((degrees_f) (degrees));
}

/**
 * Convert int64_t to degrees_t.
 */
degrees_t i64_to_deg_t(int64_t degrees)
{
    return ((degrees_t) (MIN(((int64_t) (INT_MAX)), MAX(((int64_t) (INT_MIN)), degrees))));
}

/**
 * Convert int64_t to degrees_u.
 */
degrees_u i64_to_deg_u(int64_t degrees)
{
    return ((degrees_u) (MAX(((int64_t) (0)), degrees)));
}

/**
 * Convert int64_t to radians_d.
 */
radians_d i64_to_rad_d(int64_t radians)
{
    return ((radians_d) (radians));
}

/**
 * Convert int64_t to radians_f.
 */
radians_f i64_to_rad_f(int64_t radians)
{
    return ((radians_f) (radians));
}

/**
 * Convert int64_t to radians_t.
 */
radians_t i64_to_rad_t(int64_t radians)
{
    return ((radians_t) (MIN(((int64_t) (INT_MAX)), MAX(((int64_t) (INT_MIN)), radians))));
}

/**
 * Convert int64_t to radians_u.
 */
radians_u i64_to_rad_u(int64_t radians)
{
    return ((radians_u) (MAX(((int64_t) (0)), radians)));
}

/**
 * Convert int8_t to degrees_d.
 */
degrees_d i8_to_deg_d(int8_t degrees)
{
    return ((degrees_d) (degrees));
}

/**
 * Convert int8_t to degrees_f.
 */
degrees_f i8_to_deg_f(int8_t degrees)
{
    return ((degrees_f) (degrees));
}

/**
 * Convert int8_t to degrees_t.
 */
degrees_t i8_to_deg_t(int8_t degrees)
{
    return ((degrees_t) (degrees));
}

/**
 * Convert int8_t to degrees_u.
 */
degrees_u i8_to_deg_u(int8_t degrees)
{
    return ((degrees_u) (MAX(((int8_t) (0)), degrees)));
}

/**
 * Convert int8_t to radians_d.
 */
radians_d i8_to_rad_d(int8_t radians)
{
    return ((radians_d) (radians));
}

/**
 * Convert int8_t to radians_f.
 */
radians_f i8_to_rad_f(int8_t radians)
{
    return ((radians_f) (radians));
}

/**
 * Convert int8_t to radians_t.
 */
radians_t i8_to_rad_t(int8_t radians)
{
    return ((radians_t) (radians));
}

/**
 * Convert int8_t to radians_u.
 */
radians_u i8_to_rad_u(int8_t radians)
{
    return ((radians_u) (MAX(((int8_t) (0)), radians)));
}

/**
 * Convert int to degrees_d.
 */
degrees_d i_to_deg_d(int degrees)
{
    return ((degrees_d) (degrees));
}

/**
 * Convert int to degrees_f.
 */
degrees_f i_to_deg_f(int degrees)
{
    return ((degrees_f) (degrees));
}

/**
 * Convert int to degrees_t.
 */
degrees_t i_to_deg_t(int degrees)
{
    return ((degrees_t) (degrees));
}

/**
 * Convert int to degrees_u.
 */
degrees_u i_to_deg_u(int degrees)
{
    return ((degrees_u) (MAX(((int) (0)), degrees)));
}

/**
 * Convert int to radians_d.
 */
radians_d i_to_rad_d(int radians)
{
    return ((radians_d) (radians));
}

/**
 * Convert int to radians_f.
 */
radians_f i_to_rad_f(int radians)
{
    return ((radians_f) (radians));
}

/**
 * Convert int to radians_t.
 */
radians_t i_to_rad_t(int radians)
{
    return ((radians_t) (radians));
}

/**
 * Convert int to radians_u.
 */
radians_u i_to_rad_u(int radians)
{
    return ((radians_u) (MAX(((int) (0)), radians)));
}

/**
 * Convert radians_d to degrees_d.
 */
degrees_d rad_d_to_deg_d(radians_d radians)
{
    return ((degrees_d) (180.0 / M_PI * ((double) radians)));
}

/**
 * Convert radians_d to degrees_f.
 */
degrees_f rad_d_to_deg_f(radians_d radians)
{
    return ((degrees_f) (180.0 / M_PI * ((double) radians)));
}

/**
 * Convert radians_d to degrees_t.
 */
degrees_t rad_d_to_deg_t(radians_d radians)
{
    return ((degrees_t) (round(180.0 / M_PI * ((double) radians))));
}

/**
 * Convert radians_d to degrees_u.
 */
degrees_u rad_d_to_deg_u(radians_d radians)
{
    return ((degrees_u) (round(180.0 / M_PI * ((double) radians))));
}

/**
 * Convert radians_d to double.
 */
double rad_d_to_d(radians_d radians)
{
    return ((double) (radians));
}

/**
 * Convert radians_d to float.
 */
float rad_d_to_f(radians_d radians)
{
    return ((float) (radians));
}

/**
 * Convert radians_d to int.
 */
int rad_d_to_i(radians_d radians)
{
    return ((int) (((radians_d) (round(radians)))));
}

/**
 * Convert radians_d to int16_t.
 */
int16_t rad_d_to_i16(radians_d radians)
{
    return ((int16_t) (((radians_d) (round(radians)))));
}

/**
 * Convert radians_d to int32_t.
 */
int32_t rad_d_to_i32(radians_d radians)
{
    return ((int32_t) (((radians_d) (round(radians)))));
}

/**
 * Convert radians_d to int64_t.
 */
int64_t rad_d_to_i64(radians_d radians)
{
    return ((int64_t) (((radians_d) (round(radians)))));
}

/**
 * Convert radians_d to int8_t.
 */
int8_t rad_d_to_i8(radians_d radians)
{
    return ((int8_t) (((radians_d) (round(radians)))));
}

/**
 * Convert radians_d to radians_f.
 */
radians_f rad_d_to_rad_f(radians_d radians)
{
    return ((radians_f) (radians));
}

/**
 * Convert radians_d to radians_t.
 */
radians_t rad_d_to_rad_t(radians_d radians)
{
    return ((radians_t) (round(((double) (radians)))));
}

/**
 * Convert radians_d to radians_u.
 */
radians_u rad_d_to_rad_u(radians_d radians)
{
    return ((radians_u) (round(((double) (radians)))));
}

/**
 * Convert radians_d to uint16_t.
 */
uint16_t rad_d_to_u16(radians_d radians)
{
    return ((uint16_t) (MAX(((radians_d) (0)), ((radians_d) (round(radians))))));
}

/**
 * Convert radians_d to uint32_t.
 */
uint32_t rad_d_to_u32(radians_d radians)
{
    return ((uint32_t) (MAX(((radians_d) (0)), ((radians_d) (round(radians))))));
}

/**
 * Convert radians_d to uint64_t.
 */
uint64_t rad_d_to_u64(radians_d radians)
{
    return ((uint64_t) (MAX(((radians_d) (0)), ((radians_d) (round(radians))))));
}

/**
 * Convert radians_d to uint8_t.
 */
uint8_t rad_d_to_u8(radians_d radians)
{
    return ((uint8_t) (MAX(((radians_d) (0)), ((radians_d) (round(radians))))));
}

/**
 * Convert radians_d to unsigned int.
 */
unsigned int rad_d_to_u(radians_d radians)
{
    return ((unsigned int) (MAX(((radians_d) (0)), ((radians_d) (round(radians))))));
}

/**
 * Convert radians_f to degrees_d.
 */
degrees_d rad_f_to_deg_d(radians_f radians)
{
    return ((degrees_d) (180.0 / M_PI * ((double) radians)));
}

/**
 * Convert radians_f to degrees_f.
 */
degrees_f rad_f_to_deg_f(radians_f radians)
{
    return ((degrees_f) (180.0 / M_PI * ((double) radians)));
}

/**
 * Convert radians_f to degrees_t.
 */
degrees_t rad_f_to_deg_t(radians_f radians)
{
    return ((degrees_t) (round(180.0 / M_PI * ((double) radians))));
}

/**
 * Convert radians_f to degrees_u.
 */
degrees_u rad_f_to_deg_u(radians_f radians)
{
    return ((degrees_u) (round(180.0 / M_PI * ((double) radians))));
}

/**
 * Convert radians_f to double.
 */
double rad_f_to_d(radians_f radians)
{
    return ((double) (radians));
}

/**
 * Convert radians_f to float.
 */
float rad_f_to_f(radians_f radians)
{
    return ((float) (radians));
}

/**
 * Convert radians_f to int.
 */
int rad_f_to_i(radians_f radians)
{
    return ((int) (((radians_f) (round(((double) (radians)))))));
}

/**
 * Convert radians_f to int16_t.
 */
int16_t rad_f_to_i16(radians_f radians)
{
    return ((int16_t) (((radians_f) (round(((double) (radians)))))));
}

/**
 * Convert radians_f to int32_t.
 */
int32_t rad_f_to_i32(radians_f radians)
{
    return ((int32_t) (((radians_f) (round(((double) (radians)))))));
}

/**
 * Convert radians_f to int64_t.
 */
int64_t rad_f_to_i64(radians_f radians)
{
    return ((int64_t) (((radians_f) (round(((double) (radians)))))));
}

/**
 * Convert radians_f to int8_t.
 */
int8_t rad_f_to_i8(radians_f radians)
{
    return ((int8_t) (((radians_f) (round(((double) (radians)))))));
}

/**
 * Convert radians_f to radians_d.
 */
radians_d rad_f_to_rad_d(radians_f radians)
{
    return ((radians_d) (radians));
}

/**
 * Convert radians_f to radians_t.
 */
radians_t rad_f_to_rad_t(radians_f radians)
{
    return ((radians_t) (round(((double) (radians)))));
}

/**
 * Convert radians_f to radians_u.
 */
radians_u rad_f_to_rad_u(radians_f radians)
{
    return ((radians_u) (round(((double) (radians)))));
}

/**
 * Convert radians_f to uint16_t.
 */
uint16_t rad_f_to_u16(radians_f radians)
{
    return ((uint16_t) (MAX(((radians_f) (0)), ((radians_f) (round(((double) (radians))))))));
}

/**
 * Convert radians_f to uint32_t.
 */
uint32_t rad_f_to_u32(radians_f radians)
{
    return ((uint32_t) (MAX(((radians_f) (0)), ((radians_f) (round(((double) (radians))))))));
}

/**
 * Convert radians_f to uint64_t.
 */
uint64_t rad_f_to_u64(radians_f radians)
{
    return ((uint64_t) (MAX(((radians_f) (0)), ((radians_f) (round(((double) (radians))))))));
}

/**
 * Convert radians_f to uint8_t.
 */
uint8_t rad_f_to_u8(radians_f radians)
{
    return ((uint8_t) (MAX(((radians_f) (0)), ((radians_f) (round(((double) (radians))))))));
}

/**
 * Convert radians_f to unsigned int.
 */
unsigned int rad_f_to_u(radians_f radians)
{
    return ((unsigned int) (MAX(((radians_f) (0)), ((radians_f) (round(((double) (radians))))))));
}

/**
 * Convert radians_t to degrees_d.
 */
degrees_d rad_t_to_deg_d(radians_t radians)
{
    return ((degrees_d) (180.0 / M_PI * ((double) radians)));
}

/**
 * Convert radians_t to degrees_f.
 */
degrees_f rad_t_to_deg_f(radians_t radians)
{
    return ((degrees_f) (180.0 / M_PI * ((double) radians)));
}

/**
 * Convert radians_t to degrees_t.
 */
degrees_t rad_t_to_deg_t(radians_t radians)
{
    return ((degrees_t) (180.0 / M_PI * ((double) radians)));
}

/**
 * Convert radians_t to degrees_u.
 */
degrees_u rad_t_to_deg_u(radians_t radians)
{
    return ((degrees_u) (180.0 / M_PI * ((double) radians)));
}

/**
 * Convert radians_t to double.
 */
double rad_t_to_d(radians_t radians)
{
    return ((double) (radians));
}

/**
 * Convert radians_t to float.
 */
float rad_t_to_f(radians_t radians)
{
    return ((float) (radians));
}

/**
 * Convert radians_t to int.
 */
int rad_t_to_i(radians_t radians)
{
    return ((int) (radians));
}

/**
 * Convert radians_t to int16_t.
 */
int16_t rad_t_to_i16(radians_t radians)
{
    return ((int16_t) (MIN(((radians_t) (SHRT_MAX)), MAX(((radians_t) (SHRT_MIN)), radians))));
}

/**
 * Convert radians_t to int32_t.
 */
int32_t rad_t_to_i32(radians_t radians)
{
    return ((int32_t) (MIN(((radians_t) (INT_MAX)), MAX(((radians_t) (INT_MIN)), radians))));
}

/**
 * Convert radians_t to int64_t.
 */
int64_t rad_t_to_i64(radians_t radians)
{
    return ((int64_t) (radians));
}

/**
 * Convert radians_t to int8_t.
 */
int8_t rad_t_to_i8(radians_t radians)
{
    return ((int8_t) (MIN(((radians_t) (127)), MAX(((radians_t) (-128)), radians))));
}

/**
 * Convert radians_t to radians_d.
 */
radians_d rad_t_to_rad_d(radians_t radians)
{
    return ((radians_d) (radians));
}

/**
 * Convert radians_t to radians_f.
 */
radians_f rad_t_to_rad_f(radians_t radians)
{
    return ((radians_f) (radians));
}

/**
 * Convert radians_t to radians_u.
 */
radians_u rad_t_to_rad_u(radians_t radians)
{
    return ((radians_u) ((radians) < 0 ? 0 : radians));
}

/**
 * Convert radians_t to uint16_t.
 */
uint16_t rad_t_to_u16(radians_t radians)
{
    return ((uint16_t) (MAX(((radians_t) (0)), radians)));
}

/**
 * Convert radians_t to uint32_t.
 */
uint32_t rad_t_to_u32(radians_t radians)
{
    return ((uint32_t) (MAX(((radians_t) (0)), radians)));
}

/**
 * Convert radians_t to uint64_t.
 */
uint64_t rad_t_to_u64(radians_t radians)
{
    return ((uint64_t) (MAX(((radians_t) (0)), radians)));
}

/**
 * Convert radians_t to uint8_t.
 */
uint8_t rad_t_to_u8(radians_t radians)
{
    return ((uint8_t) (MAX(((radians_t) (0)), radians)));
}

/**
 * Convert radians_t to unsigned int.
 */
unsigned int rad_t_to_u(radians_t radians)
{
    return ((unsigned int) (MAX(((radians_t) (0)), radians)));
}

/**
 * Convert radians_u to degrees_d.
 */
degrees_d rad_u_to_deg_d(radians_u radians)
{
    return ((degrees_d) (180.0 / M_PI * ((double) radians)));
}

/**
 * Convert radians_u to degrees_f.
 */
degrees_f rad_u_to_deg_f(radians_u radians)
{
    return ((degrees_f) (180.0 / M_PI * ((double) radians)));
}

/**
 * Convert radians_u to degrees_t.
 */
degrees_t rad_u_to_deg_t(radians_u radians)
{
    return ((degrees_t) (180.0 / M_PI * ((double) radians)));
}

/**
 * Convert radians_u to degrees_u.
 */
degrees_u rad_u_to_deg_u(radians_u radians)
{
    return ((degrees_u) (180.0 / M_PI * ((double) radians)));
}

/**
 * Convert radians_u to double.
 */
double rad_u_to_d(radians_u radians)
{
    return ((double) (MIN(((radians_u) (INT_MAX)), radians)));
}

/**
 * Convert radians_u to float.
 */
float rad_u_to_f(radians_u radians)
{
    return ((float) (MIN(((radians_u) (INT_MAX)), radians)));
}

/**
 * Convert radians_u to int.
 */
int rad_u_to_i(radians_u radians)
{
    return ((int) (MIN(((radians_u) (INT_MAX)), radians)));
}

/**
 * Convert radians_u to int16_t.
 */
int16_t rad_u_to_i16(radians_u radians)
{
    return ((int16_t) (MIN(((radians_u) (SHRT_MAX)), radians)));
}

/**
 * Convert radians_u to int32_t.
 */
int32_t rad_u_to_i32(radians_u radians)
{
    return ((int32_t) (MIN(((radians_u) (INT_MAX)), radians)));
}

/**
 * Convert radians_u to int64_t.
 */
int64_t rad_u_to_i64(radians_u radians)
{
    return ((int64_t) (radians));
}

/**
 * Convert radians_u to int8_t.
 */
int8_t rad_u_to_i8(radians_u radians)
{
    return ((int8_t) (MIN(((radians_u) (127)), radians)));
}

/**
 * Convert radians_u to radians_d.
 */
radians_d rad_u_to_rad_d(radians_u radians)
{
    return ((radians_d) (radians));
}

/**
 * Convert radians_u to radians_f.
 */
radians_f rad_u_to_rad_f(radians_u radians)
{
    return ((radians_f) (radians));
}

/**
 * Convert radians_u to radians_t.
 */
radians_t rad_u_to_rad_t(radians_u radians)
{
    return ((radians_t) ((radians) > ((unsigned int) (INT_MAX)) ? ((unsigned int) (INT_MAX)) : radians));
}

/**
 * Convert radians_u to uint16_t.
 */
uint16_t rad_u_to_u16(radians_u radians)
{
    return ((uint16_t) (MIN(((radians_u) (USHRT_MAX)), MAX(((radians_u) (0)), radians))));
}

/**
 * Convert radians_u to uint32_t.
 */
uint32_t rad_u_to_u32(radians_u radians)
{
    return ((uint32_t) (MIN(((radians_u) (UINT_MAX)), MAX(((radians_u) (0)), radians))));
}

/**
 * Convert radians_u to uint64_t.
 */
uint64_t rad_u_to_u64(radians_u radians)
{
    return ((uint64_t) (radians));
}

/**
 * Convert radians_u to uint8_t.
 */
uint8_t rad_u_to_u8(radians_u radians)
{
    return ((uint8_t) (MIN(((radians_u) (255)), MAX(((radians_u) (0)), radians))));
}

/**
 * Convert radians_u to unsigned int.
 */
unsigned int rad_u_to_u(radians_u radians)
{
    return ((unsigned int) (radians));
}

/**
 * Convert uint16_t to degrees_d.
 */
degrees_d u16_to_deg_d(uint16_t degrees)
{
    return ((degrees_d) (degrees));
}

/**
 * Convert uint16_t to degrees_f.
 */
degrees_f u16_to_deg_f(uint16_t degrees)
{
    return ((degrees_f) (degrees));
}

/**
 * Convert uint16_t to degrees_t.
 */
degrees_t u16_to_deg_t(uint16_t degrees)
{
    return ((degrees_t) (degrees));
}

/**
 * Convert uint16_t to degrees_u.
 */
degrees_u u16_to_deg_u(uint16_t degrees)
{
    return ((degrees_u) (degrees));
}

/**
 * Convert uint16_t to radians_d.
 */
radians_d u16_to_rad_d(uint16_t radians)
{
    return ((radians_d) (radians));
}

/**
 * Convert uint16_t to radians_f.
 */
radians_f u16_to_rad_f(uint16_t radians)
{
    return ((radians_f) (radians));
}

/**
 * Convert uint16_t to radians_t.
 */
radians_t u16_to_rad_t(uint16_t radians)
{
    return ((radians_t) (radians));
}

/**
 * Convert uint16_t to radians_u.
 */
radians_u u16_to_rad_u(uint16_t radians)
{
    return ((radians_u) (radians));
}

/**
 * Convert uint32_t to degrees_d.
 */
degrees_d u32_to_deg_d(uint32_t degrees)
{
    return ((degrees_d) (MIN(((uint32_t) (INT_MAX)), degrees)));
}

/**
 * Convert uint32_t to degrees_f.
 */
degrees_f u32_to_deg_f(uint32_t degrees)
{
    return ((degrees_f) (MIN(((uint32_t) (INT_MAX)), degrees)));
}

/**
 * Convert uint32_t to degrees_t.
 */
degrees_t u32_to_deg_t(uint32_t degrees)
{
    return ((degrees_t) (MIN(((uint32_t) (INT_MAX)), degrees)));
}

/**
 * Convert uint32_t to degrees_u.
 */
degrees_u u32_to_deg_u(uint32_t degrees)
{
    return ((degrees_u) (MIN(((uint32_t) (UINT_MAX)), MAX(((uint32_t) (0)), degrees))));
}

/**
 * Convert uint32_t to radians_d.
 */
radians_d u32_to_rad_d(uint32_t radians)
{
    return ((radians_d) (MIN(((uint32_t) (INT_MAX)), radians)));
}

/**
 * Convert uint32_t to radians_f.
 */
radians_f u32_to_rad_f(uint32_t radians)
{
    return ((radians_f) (MIN(((uint32_t) (INT_MAX)), radians)));
}

/**
 * Convert uint32_t to radians_t.
 */
radians_t u32_to_rad_t(uint32_t radians)
{
    return ((radians_t) (MIN(((uint32_t) (INT_MAX)), radians)));
}

/**
 * Convert uint32_t to radians_u.
 */
radians_u u32_to_rad_u(uint32_t radians)
{
    return ((radians_u) (MIN(((uint32_t) (UINT_MAX)), MAX(((uint32_t) (0)), radians))));
}

/**
 * Convert uint64_t to degrees_d.
 */
degrees_d u64_to_deg_d(uint64_t degrees)
{
    return ((degrees_d) (MIN(((uint64_t) (INT_MAX)), degrees)));
}

/**
 * Convert uint64_t to degrees_f.
 */
degrees_f u64_to_deg_f(uint64_t degrees)
{
    return ((degrees_f) (MIN(((uint64_t) (INT_MAX)), degrees)));
}

/**
 * Convert uint64_t to degrees_t.
 */
degrees_t u64_to_deg_t(uint64_t degrees)
{
    return ((degrees_t) (MIN(((uint64_t) (INT_MAX)), degrees)));
}

/**
 * Convert uint64_t to degrees_u.
 */
degrees_u u64_to_deg_u(uint64_t degrees)
{
    return ((degrees_u) (MIN(((uint64_t) (UINT_MAX)), MAX(((uint64_t) (0)), degrees))));
}

/**
 * Convert uint64_t to radians_d.
 */
radians_d u64_to_rad_d(uint64_t radians)
{
    return ((radians_d) (MIN(((uint64_t) (INT_MAX)), radians)));
}

/**
 * Convert uint64_t to radians_f.
 */
radians_f u64_to_rad_f(uint64_t radians)
{
    return ((radians_f) (MIN(((uint64_t) (INT_MAX)), radians)));
}

/**
 * Convert uint64_t to radians_t.
 */
radians_t u64_to_rad_t(uint64_t radians)
{
    return ((radians_t) (MIN(((uint64_t) (INT_MAX)), radians)));
}

/**
 * Convert uint64_t to radians_u.
 */
radians_u u64_to_rad_u(uint64_t radians)
{
    return ((radians_u) (MIN(((uint64_t) (UINT_MAX)), MAX(((uint64_t) (0)), radians))));
}

/**
 * Convert uint8_t to degrees_d.
 */
degrees_d u8_to_deg_d(uint8_t degrees)
{
    return ((degrees_d) (degrees));
}

/**
 * Convert uint8_t to degrees_f.
 */
degrees_f u8_to_deg_f(uint8_t degrees)
{
    return ((degrees_f) (degrees));
}

/**
 * Convert uint8_t to degrees_t.
 */
degrees_t u8_to_deg_t(uint8_t degrees)
{
    return ((degrees_t) (degrees));
}

/**
 * Convert uint8_t to degrees_u.
 */
degrees_u u8_to_deg_u(uint8_t degrees)
{
    return ((degrees_u) (degrees));
}

/**
 * Convert uint8_t to radians_d.
 */
radians_d u8_to_rad_d(uint8_t radians)
{
    return ((radians_d) (radians));
}

/**
 * Convert uint8_t to radians_f.
 */
radians_f u8_to_rad_f(uint8_t radians)
{
    return ((radians_f) (radians));
}

/**
 * Convert uint8_t to radians_t.
 */
radians_t u8_to_rad_t(uint8_t radians)
{
    return ((radians_t) (radians));
}

/**
 * Convert uint8_t to radians_u.
 */
radians_u u8_to_rad_u(uint8_t radians)
{
    return ((radians_u) (radians));
}

/**
 * Convert unsigned int to degrees_d.
 */
degrees_d u_to_deg_d(unsigned int degrees)
{
    return ((degrees_d) (MIN(((unsigned int) (INT_MAX)), degrees)));
}

/**
 * Convert unsigned int to degrees_f.
 */
degrees_f u_to_deg_f(unsigned int degrees)
{
    return ((degrees_f) (MIN(((unsigned int) (INT_MAX)), degrees)));
}

/**
 * Convert unsigned int to degrees_t.
 */
degrees_t u_to_deg_t(unsigned int degrees)
{
    return ((degrees_t) (MIN(((unsigned int) (INT_MAX)), degrees)));
}

/**
 * Convert unsigned int to degrees_u.
 */
degrees_u u_to_deg_u(unsigned int degrees)
{
    return ((degrees_u) (degrees));
}

/**
 * Convert unsigned int to radians_d.
 */
radians_d u_to_rad_d(unsigned int radians)
{
    return ((radians_d) (MIN(((unsigned int) (INT_MAX)), radians)));
}

/**
 * Convert unsigned int to radians_f.
 */
radians_f u_to_rad_f(unsigned int radians)
{
    return ((radians_f) (MIN(((unsigned int) (INT_MAX)), radians)));
}

/**
 * Convert unsigned int to radians_t.
 */
radians_t u_to_rad_t(unsigned int radians)
{
    return ((radians_t) (MIN(((unsigned int) (INT_MAX)), radians)));
}

/**
 * Convert unsigned int to radians_u.
 */
radians_u u_to_rad_u(unsigned int radians)
{
    return ((radians_u) (radians));
}

