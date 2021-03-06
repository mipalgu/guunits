/*
* guunits.h
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


#ifndef GUUNITS_H
#define GUUNITS_H

#include <stdint.h>
#include <limits.h>

#ifdef __cplusplus
extern "C" {
#endif

// Distance Units.
typedef int millimetres_t;
typedef unsigned int millimetres_u;
typedef float millimetres_f;
typedef double millimetres_d;
typedef int centimetres_t;
typedef unsigned int centimetres_u;
typedef float centimetres_f;
typedef double centimetres_d;
typedef int metres_t;
typedef unsigned int metres_u;
typedef float metres_f;
typedef double metres_d;

// Time Units.
typedef int microseconds_t;
typedef unsigned int microseconds_u;
typedef float microseconds_f;
typedef double microseconds_d;
typedef int milliseconds_t;
typedef unsigned int milliseconds_u;
typedef float milliseconds_f;
typedef double milliseconds_d;
typedef int seconds_t;
typedef unsigned int seconds_u;
typedef float seconds_f;
typedef double seconds_d;

// Angle Units.
typedef int degrees_t;
typedef unsigned int degrees_u;
typedef float degrees_f;
typedef double degrees_d;
typedef int radians_t;
typedef unsigned int radians_u;
typedef float radians_f;
typedef double radians_d;

// Image Units.
typedef int pixels_t;
typedef unsigned int pixels_u;
typedef float pixels_f;
typedef double pixels_d;

// Percent Units.
typedef int percent_t;
typedef unsigned int percent_u;
typedef float percent_f;
typedef double percent_d;

// Distance Conversion Functions

/**
 * Convert centimetres_d to centimetres_f.
 */
centimetres_f cm_d_to_cm_f(centimetres_d centimetres);

/**
 * Convert centimetres_d to centimetres_t.
 */
centimetres_t cm_d_to_cm_t(centimetres_d centimetres);

/**
 * Convert centimetres_d to centimetres_u.
 */
centimetres_u cm_d_to_cm_u(centimetres_d centimetres);

/**
 * Convert centimetres_d to double.
 */
double cm_d_to_d(centimetres_d centimetres);

/**
 * Convert centimetres_d to float.
 */
float cm_d_to_f(centimetres_d centimetres);

/**
 * Convert centimetres_d to int.
 */
int cm_d_to_i(centimetres_d centimetres);

/**
 * Convert centimetres_d to int16_t.
 */
int16_t cm_d_to_i16(centimetres_d centimetres);

/**
 * Convert centimetres_d to int32_t.
 */
int32_t cm_d_to_i32(centimetres_d centimetres);

/**
 * Convert centimetres_d to int64_t.
 */
int64_t cm_d_to_i64(centimetres_d centimetres);

/**
 * Convert centimetres_d to int8_t.
 */
int8_t cm_d_to_i8(centimetres_d centimetres);

/**
 * Convert centimetres_d to metres_d.
 */
metres_d cm_d_to_m_d(centimetres_d centimetres);

/**
 * Convert centimetres_d to metres_f.
 */
metres_f cm_d_to_m_f(centimetres_d centimetres);

/**
 * Convert centimetres_d to metres_t.
 */
metres_t cm_d_to_m_t(centimetres_d centimetres);

/**
 * Convert centimetres_d to metres_u.
 */
metres_u cm_d_to_m_u(centimetres_d centimetres);

/**
 * Convert centimetres_d to millimetres_d.
 */
millimetres_d cm_d_to_mm_d(centimetres_d centimetres);

/**
 * Convert centimetres_d to millimetres_f.
 */
millimetres_f cm_d_to_mm_f(centimetres_d centimetres);

/**
 * Convert centimetres_d to millimetres_t.
 */
millimetres_t cm_d_to_mm_t(centimetres_d centimetres);

/**
 * Convert centimetres_d to millimetres_u.
 */
millimetres_u cm_d_to_mm_u(centimetres_d centimetres);

/**
 * Convert centimetres_d to uint16_t.
 */
uint16_t cm_d_to_u16(centimetres_d centimetres);

/**
 * Convert centimetres_d to uint32_t.
 */
uint32_t cm_d_to_u32(centimetres_d centimetres);

/**
 * Convert centimetres_d to uint64_t.
 */
uint64_t cm_d_to_u64(centimetres_d centimetres);

/**
 * Convert centimetres_d to uint8_t.
 */
uint8_t cm_d_to_u8(centimetres_d centimetres);

/**
 * Convert centimetres_d to unsigned int.
 */
unsigned int cm_d_to_u(centimetres_d centimetres);

/**
 * Convert centimetres_f to centimetres_d.
 */
centimetres_d cm_f_to_cm_d(centimetres_f centimetres);

/**
 * Convert centimetres_f to centimetres_t.
 */
centimetres_t cm_f_to_cm_t(centimetres_f centimetres);

/**
 * Convert centimetres_f to centimetres_u.
 */
centimetres_u cm_f_to_cm_u(centimetres_f centimetres);

/**
 * Convert centimetres_f to double.
 */
double cm_f_to_d(centimetres_f centimetres);

/**
 * Convert centimetres_f to float.
 */
float cm_f_to_f(centimetres_f centimetres);

/**
 * Convert centimetres_f to int.
 */
int cm_f_to_i(centimetres_f centimetres);

/**
 * Convert centimetres_f to int16_t.
 */
int16_t cm_f_to_i16(centimetres_f centimetres);

/**
 * Convert centimetres_f to int32_t.
 */
int32_t cm_f_to_i32(centimetres_f centimetres);

/**
 * Convert centimetres_f to int64_t.
 */
int64_t cm_f_to_i64(centimetres_f centimetres);

/**
 * Convert centimetres_f to int8_t.
 */
int8_t cm_f_to_i8(centimetres_f centimetres);

/**
 * Convert centimetres_f to metres_d.
 */
metres_d cm_f_to_m_d(centimetres_f centimetres);

/**
 * Convert centimetres_f to metres_f.
 */
metres_f cm_f_to_m_f(centimetres_f centimetres);

/**
 * Convert centimetres_f to metres_t.
 */
metres_t cm_f_to_m_t(centimetres_f centimetres);

/**
 * Convert centimetres_f to metres_u.
 */
metres_u cm_f_to_m_u(centimetres_f centimetres);

/**
 * Convert centimetres_f to millimetres_d.
 */
millimetres_d cm_f_to_mm_d(centimetres_f centimetres);

/**
 * Convert centimetres_f to millimetres_f.
 */
millimetres_f cm_f_to_mm_f(centimetres_f centimetres);

/**
 * Convert centimetres_f to millimetres_t.
 */
millimetres_t cm_f_to_mm_t(centimetres_f centimetres);

/**
 * Convert centimetres_f to millimetres_u.
 */
millimetres_u cm_f_to_mm_u(centimetres_f centimetres);

/**
 * Convert centimetres_f to uint16_t.
 */
uint16_t cm_f_to_u16(centimetres_f centimetres);

/**
 * Convert centimetres_f to uint32_t.
 */
uint32_t cm_f_to_u32(centimetres_f centimetres);

/**
 * Convert centimetres_f to uint64_t.
 */
uint64_t cm_f_to_u64(centimetres_f centimetres);

/**
 * Convert centimetres_f to uint8_t.
 */
uint8_t cm_f_to_u8(centimetres_f centimetres);

/**
 * Convert centimetres_f to unsigned int.
 */
unsigned int cm_f_to_u(centimetres_f centimetres);

/**
 * Convert centimetres_t to centimetres_d.
 */
centimetres_d cm_t_to_cm_d(centimetres_t centimetres);

/**
 * Convert centimetres_t to centimetres_f.
 */
centimetres_f cm_t_to_cm_f(centimetres_t centimetres);

/**
 * Convert centimetres_t to centimetres_u.
 */
centimetres_u cm_t_to_cm_u(centimetres_t centimetres);

/**
 * Convert centimetres_t to double.
 */
double cm_t_to_d(centimetres_t centimetres);

/**
 * Convert centimetres_t to float.
 */
float cm_t_to_f(centimetres_t centimetres);

/**
 * Convert centimetres_t to int.
 */
int cm_t_to_i(centimetres_t centimetres);

/**
 * Convert centimetres_t to int16_t.
 */
int16_t cm_t_to_i16(centimetres_t centimetres);

/**
 * Convert centimetres_t to int32_t.
 */
int32_t cm_t_to_i32(centimetres_t centimetres);

/**
 * Convert centimetres_t to int64_t.
 */
int64_t cm_t_to_i64(centimetres_t centimetres);

/**
 * Convert centimetres_t to int8_t.
 */
int8_t cm_t_to_i8(centimetres_t centimetres);

/**
 * Convert centimetres_t to metres_d.
 */
metres_d cm_t_to_m_d(centimetres_t centimetres);

/**
 * Convert centimetres_t to metres_f.
 */
metres_f cm_t_to_m_f(centimetres_t centimetres);

/**
 * Convert centimetres_t to metres_t.
 */
metres_t cm_t_to_m_t(centimetres_t centimetres);

/**
 * Convert centimetres_t to metres_u.
 */
metres_u cm_t_to_m_u(centimetres_t centimetres);

/**
 * Convert centimetres_t to millimetres_d.
 */
millimetres_d cm_t_to_mm_d(centimetres_t centimetres);

/**
 * Convert centimetres_t to millimetres_f.
 */
millimetres_f cm_t_to_mm_f(centimetres_t centimetres);

/**
 * Convert centimetres_t to millimetres_t.
 */
millimetres_t cm_t_to_mm_t(centimetres_t centimetres);

/**
 * Convert centimetres_t to millimetres_u.
 */
millimetres_u cm_t_to_mm_u(centimetres_t centimetres);

/**
 * Convert centimetres_t to uint16_t.
 */
uint16_t cm_t_to_u16(centimetres_t centimetres);

/**
 * Convert centimetres_t to uint32_t.
 */
uint32_t cm_t_to_u32(centimetres_t centimetres);

/**
 * Convert centimetres_t to uint64_t.
 */
uint64_t cm_t_to_u64(centimetres_t centimetres);

/**
 * Convert centimetres_t to uint8_t.
 */
uint8_t cm_t_to_u8(centimetres_t centimetres);

/**
 * Convert centimetres_t to unsigned int.
 */
unsigned int cm_t_to_u(centimetres_t centimetres);

/**
 * Convert centimetres_u to centimetres_d.
 */
centimetres_d cm_u_to_cm_d(centimetres_u centimetres);

/**
 * Convert centimetres_u to centimetres_f.
 */
centimetres_f cm_u_to_cm_f(centimetres_u centimetres);

/**
 * Convert centimetres_u to centimetres_t.
 */
centimetres_t cm_u_to_cm_t(centimetres_u centimetres);

/**
 * Convert centimetres_u to double.
 */
double cm_u_to_d(centimetres_u centimetres);

/**
 * Convert centimetres_u to float.
 */
float cm_u_to_f(centimetres_u centimetres);

/**
 * Convert centimetres_u to int.
 */
int cm_u_to_i(centimetres_u centimetres);

/**
 * Convert centimetres_u to int16_t.
 */
int16_t cm_u_to_i16(centimetres_u centimetres);

/**
 * Convert centimetres_u to int32_t.
 */
int32_t cm_u_to_i32(centimetres_u centimetres);

/**
 * Convert centimetres_u to int64_t.
 */
int64_t cm_u_to_i64(centimetres_u centimetres);

/**
 * Convert centimetres_u to int8_t.
 */
int8_t cm_u_to_i8(centimetres_u centimetres);

/**
 * Convert centimetres_u to metres_d.
 */
metres_d cm_u_to_m_d(centimetres_u centimetres);

/**
 * Convert centimetres_u to metres_f.
 */
metres_f cm_u_to_m_f(centimetres_u centimetres);

/**
 * Convert centimetres_u to metres_t.
 */
metres_t cm_u_to_m_t(centimetres_u centimetres);

/**
 * Convert centimetres_u to metres_u.
 */
metres_u cm_u_to_m_u(centimetres_u centimetres);

/**
 * Convert centimetres_u to millimetres_d.
 */
millimetres_d cm_u_to_mm_d(centimetres_u centimetres);

/**
 * Convert centimetres_u to millimetres_f.
 */
millimetres_f cm_u_to_mm_f(centimetres_u centimetres);

/**
 * Convert centimetres_u to millimetres_t.
 */
millimetres_t cm_u_to_mm_t(centimetres_u centimetres);

/**
 * Convert centimetres_u to millimetres_u.
 */
millimetres_u cm_u_to_mm_u(centimetres_u centimetres);

/**
 * Convert centimetres_u to uint16_t.
 */
uint16_t cm_u_to_u16(centimetres_u centimetres);

/**
 * Convert centimetres_u to uint32_t.
 */
uint32_t cm_u_to_u32(centimetres_u centimetres);

/**
 * Convert centimetres_u to uint64_t.
 */
uint64_t cm_u_to_u64(centimetres_u centimetres);

/**
 * Convert centimetres_u to uint8_t.
 */
uint8_t cm_u_to_u8(centimetres_u centimetres);

/**
 * Convert centimetres_u to unsigned int.
 */
unsigned int cm_u_to_u(centimetres_u centimetres);

/**
 * Convert double to centimetres_d.
 */
centimetres_d d_to_cm_d(double centimetres);

/**
 * Convert double to centimetres_f.
 */
centimetres_f d_to_cm_f(double centimetres);

/**
 * Convert double to centimetres_t.
 */
centimetres_t d_to_cm_t(double centimetres);

/**
 * Convert double to centimetres_u.
 */
centimetres_u d_to_cm_u(double centimetres);

/**
 * Convert double to metres_d.
 */
metres_d d_to_m_d(double metres);

/**
 * Convert double to metres_f.
 */
metres_f d_to_m_f(double metres);

/**
 * Convert double to metres_t.
 */
metres_t d_to_m_t(double metres);

/**
 * Convert double to metres_u.
 */
metres_u d_to_m_u(double metres);

/**
 * Convert double to millimetres_d.
 */
millimetres_d d_to_mm_d(double millimetres);

/**
 * Convert double to millimetres_f.
 */
millimetres_f d_to_mm_f(double millimetres);

/**
 * Convert double to millimetres_t.
 */
millimetres_t d_to_mm_t(double millimetres);

/**
 * Convert double to millimetres_u.
 */
millimetres_u d_to_mm_u(double millimetres);

/**
 * Convert float to centimetres_d.
 */
centimetres_d f_to_cm_d(float centimetres);

/**
 * Convert float to centimetres_f.
 */
centimetres_f f_to_cm_f(float centimetres);

/**
 * Convert float to centimetres_t.
 */
centimetres_t f_to_cm_t(float centimetres);

/**
 * Convert float to centimetres_u.
 */
centimetres_u f_to_cm_u(float centimetres);

/**
 * Convert float to metres_d.
 */
metres_d f_to_m_d(float metres);

/**
 * Convert float to metres_f.
 */
metres_f f_to_m_f(float metres);

/**
 * Convert float to metres_t.
 */
metres_t f_to_m_t(float metres);

/**
 * Convert float to metres_u.
 */
metres_u f_to_m_u(float metres);

/**
 * Convert float to millimetres_d.
 */
millimetres_d f_to_mm_d(float millimetres);

/**
 * Convert float to millimetres_f.
 */
millimetres_f f_to_mm_f(float millimetres);

/**
 * Convert float to millimetres_t.
 */
millimetres_t f_to_mm_t(float millimetres);

/**
 * Convert float to millimetres_u.
 */
millimetres_u f_to_mm_u(float millimetres);

/**
 * Convert int16_t to centimetres_d.
 */
centimetres_d i16_to_cm_d(int16_t centimetres);

/**
 * Convert int16_t to centimetres_f.
 */
centimetres_f i16_to_cm_f(int16_t centimetres);

/**
 * Convert int16_t to centimetres_t.
 */
centimetres_t i16_to_cm_t(int16_t centimetres);

/**
 * Convert int16_t to centimetres_u.
 */
centimetres_u i16_to_cm_u(int16_t centimetres);

/**
 * Convert int16_t to metres_d.
 */
metres_d i16_to_m_d(int16_t metres);

/**
 * Convert int16_t to metres_f.
 */
metres_f i16_to_m_f(int16_t metres);

/**
 * Convert int16_t to metres_t.
 */
metres_t i16_to_m_t(int16_t metres);

/**
 * Convert int16_t to metres_u.
 */
metres_u i16_to_m_u(int16_t metres);

/**
 * Convert int16_t to millimetres_d.
 */
millimetres_d i16_to_mm_d(int16_t millimetres);

/**
 * Convert int16_t to millimetres_f.
 */
millimetres_f i16_to_mm_f(int16_t millimetres);

/**
 * Convert int16_t to millimetres_t.
 */
millimetres_t i16_to_mm_t(int16_t millimetres);

/**
 * Convert int16_t to millimetres_u.
 */
millimetres_u i16_to_mm_u(int16_t millimetres);

/**
 * Convert int32_t to centimetres_d.
 */
centimetres_d i32_to_cm_d(int32_t centimetres);

/**
 * Convert int32_t to centimetres_f.
 */
centimetres_f i32_to_cm_f(int32_t centimetres);

/**
 * Convert int32_t to centimetres_t.
 */
centimetres_t i32_to_cm_t(int32_t centimetres);

/**
 * Convert int32_t to centimetres_u.
 */
centimetres_u i32_to_cm_u(int32_t centimetres);

/**
 * Convert int32_t to metres_d.
 */
metres_d i32_to_m_d(int32_t metres);

/**
 * Convert int32_t to metres_f.
 */
metres_f i32_to_m_f(int32_t metres);

/**
 * Convert int32_t to metres_t.
 */
metres_t i32_to_m_t(int32_t metres);

/**
 * Convert int32_t to metres_u.
 */
metres_u i32_to_m_u(int32_t metres);

/**
 * Convert int32_t to millimetres_d.
 */
millimetres_d i32_to_mm_d(int32_t millimetres);

/**
 * Convert int32_t to millimetres_f.
 */
millimetres_f i32_to_mm_f(int32_t millimetres);

/**
 * Convert int32_t to millimetres_t.
 */
millimetres_t i32_to_mm_t(int32_t millimetres);

/**
 * Convert int32_t to millimetres_u.
 */
millimetres_u i32_to_mm_u(int32_t millimetres);

/**
 * Convert int64_t to centimetres_d.
 */
centimetres_d i64_to_cm_d(int64_t centimetres);

/**
 * Convert int64_t to centimetres_f.
 */
centimetres_f i64_to_cm_f(int64_t centimetres);

/**
 * Convert int64_t to centimetres_t.
 */
centimetres_t i64_to_cm_t(int64_t centimetres);

/**
 * Convert int64_t to centimetres_u.
 */
centimetres_u i64_to_cm_u(int64_t centimetres);

/**
 * Convert int64_t to metres_d.
 */
metres_d i64_to_m_d(int64_t metres);

/**
 * Convert int64_t to metres_f.
 */
metres_f i64_to_m_f(int64_t metres);

/**
 * Convert int64_t to metres_t.
 */
metres_t i64_to_m_t(int64_t metres);

/**
 * Convert int64_t to metres_u.
 */
metres_u i64_to_m_u(int64_t metres);

/**
 * Convert int64_t to millimetres_d.
 */
millimetres_d i64_to_mm_d(int64_t millimetres);

/**
 * Convert int64_t to millimetres_f.
 */
millimetres_f i64_to_mm_f(int64_t millimetres);

/**
 * Convert int64_t to millimetres_t.
 */
millimetres_t i64_to_mm_t(int64_t millimetres);

/**
 * Convert int64_t to millimetres_u.
 */
millimetres_u i64_to_mm_u(int64_t millimetres);

/**
 * Convert int8_t to centimetres_d.
 */
centimetres_d i8_to_cm_d(int8_t centimetres);

/**
 * Convert int8_t to centimetres_f.
 */
centimetres_f i8_to_cm_f(int8_t centimetres);

/**
 * Convert int8_t to centimetres_t.
 */
centimetres_t i8_to_cm_t(int8_t centimetres);

/**
 * Convert int8_t to centimetres_u.
 */
centimetres_u i8_to_cm_u(int8_t centimetres);

/**
 * Convert int8_t to metres_d.
 */
metres_d i8_to_m_d(int8_t metres);

/**
 * Convert int8_t to metres_f.
 */
metres_f i8_to_m_f(int8_t metres);

/**
 * Convert int8_t to metres_t.
 */
metres_t i8_to_m_t(int8_t metres);

/**
 * Convert int8_t to metres_u.
 */
metres_u i8_to_m_u(int8_t metres);

/**
 * Convert int8_t to millimetres_d.
 */
millimetres_d i8_to_mm_d(int8_t millimetres);

/**
 * Convert int8_t to millimetres_f.
 */
millimetres_f i8_to_mm_f(int8_t millimetres);

/**
 * Convert int8_t to millimetres_t.
 */
millimetres_t i8_to_mm_t(int8_t millimetres);

/**
 * Convert int8_t to millimetres_u.
 */
millimetres_u i8_to_mm_u(int8_t millimetres);

/**
 * Convert int to centimetres_d.
 */
centimetres_d i_to_cm_d(int centimetres);

/**
 * Convert int to centimetres_f.
 */
centimetres_f i_to_cm_f(int centimetres);

/**
 * Convert int to centimetres_t.
 */
centimetres_t i_to_cm_t(int centimetres);

/**
 * Convert int to centimetres_u.
 */
centimetres_u i_to_cm_u(int centimetres);

/**
 * Convert int to metres_d.
 */
metres_d i_to_m_d(int metres);

/**
 * Convert int to metres_f.
 */
metres_f i_to_m_f(int metres);

/**
 * Convert int to metres_t.
 */
metres_t i_to_m_t(int metres);

/**
 * Convert int to metres_u.
 */
metres_u i_to_m_u(int metres);

/**
 * Convert int to millimetres_d.
 */
millimetres_d i_to_mm_d(int millimetres);

/**
 * Convert int to millimetres_f.
 */
millimetres_f i_to_mm_f(int millimetres);

/**
 * Convert int to millimetres_t.
 */
millimetres_t i_to_mm_t(int millimetres);

/**
 * Convert int to millimetres_u.
 */
millimetres_u i_to_mm_u(int millimetres);

/**
 * Convert metres_d to centimetres_d.
 */
centimetres_d m_d_to_cm_d(metres_d metres);

/**
 * Convert metres_d to centimetres_f.
 */
centimetres_f m_d_to_cm_f(metres_d metres);

/**
 * Convert metres_d to centimetres_t.
 */
centimetres_t m_d_to_cm_t(metres_d metres);

/**
 * Convert metres_d to centimetres_u.
 */
centimetres_u m_d_to_cm_u(metres_d metres);

/**
 * Convert metres_d to double.
 */
double m_d_to_d(metres_d metres);

/**
 * Convert metres_d to float.
 */
float m_d_to_f(metres_d metres);

/**
 * Convert metres_d to int.
 */
int m_d_to_i(metres_d metres);

/**
 * Convert metres_d to int16_t.
 */
int16_t m_d_to_i16(metres_d metres);

/**
 * Convert metres_d to int32_t.
 */
int32_t m_d_to_i32(metres_d metres);

/**
 * Convert metres_d to int64_t.
 */
int64_t m_d_to_i64(metres_d metres);

/**
 * Convert metres_d to int8_t.
 */
int8_t m_d_to_i8(metres_d metres);

/**
 * Convert metres_d to metres_f.
 */
metres_f m_d_to_m_f(metres_d metres);

/**
 * Convert metres_d to metres_t.
 */
metres_t m_d_to_m_t(metres_d metres);

/**
 * Convert metres_d to metres_u.
 */
metres_u m_d_to_m_u(metres_d metres);

/**
 * Convert metres_d to millimetres_d.
 */
millimetres_d m_d_to_mm_d(metres_d metres);

/**
 * Convert metres_d to millimetres_f.
 */
millimetres_f m_d_to_mm_f(metres_d metres);

/**
 * Convert metres_d to millimetres_t.
 */
millimetres_t m_d_to_mm_t(metres_d metres);

/**
 * Convert metres_d to millimetres_u.
 */
millimetres_u m_d_to_mm_u(metres_d metres);

/**
 * Convert metres_d to uint16_t.
 */
uint16_t m_d_to_u16(metres_d metres);

/**
 * Convert metres_d to uint32_t.
 */
uint32_t m_d_to_u32(metres_d metres);

/**
 * Convert metres_d to uint64_t.
 */
uint64_t m_d_to_u64(metres_d metres);

/**
 * Convert metres_d to uint8_t.
 */
uint8_t m_d_to_u8(metres_d metres);

/**
 * Convert metres_d to unsigned int.
 */
unsigned int m_d_to_u(metres_d metres);

/**
 * Convert metres_f to centimetres_d.
 */
centimetres_d m_f_to_cm_d(metres_f metres);

/**
 * Convert metres_f to centimetres_f.
 */
centimetres_f m_f_to_cm_f(metres_f metres);

/**
 * Convert metres_f to centimetres_t.
 */
centimetres_t m_f_to_cm_t(metres_f metres);

/**
 * Convert metres_f to centimetres_u.
 */
centimetres_u m_f_to_cm_u(metres_f metres);

/**
 * Convert metres_f to double.
 */
double m_f_to_d(metres_f metres);

/**
 * Convert metres_f to float.
 */
float m_f_to_f(metres_f metres);

/**
 * Convert metres_f to int.
 */
int m_f_to_i(metres_f metres);

/**
 * Convert metres_f to int16_t.
 */
int16_t m_f_to_i16(metres_f metres);

/**
 * Convert metres_f to int32_t.
 */
int32_t m_f_to_i32(metres_f metres);

/**
 * Convert metres_f to int64_t.
 */
int64_t m_f_to_i64(metres_f metres);

/**
 * Convert metres_f to int8_t.
 */
int8_t m_f_to_i8(metres_f metres);

/**
 * Convert metres_f to metres_d.
 */
metres_d m_f_to_m_d(metres_f metres);

/**
 * Convert metres_f to metres_t.
 */
metres_t m_f_to_m_t(metres_f metres);

/**
 * Convert metres_f to metres_u.
 */
metres_u m_f_to_m_u(metres_f metres);

/**
 * Convert metres_f to millimetres_d.
 */
millimetres_d m_f_to_mm_d(metres_f metres);

/**
 * Convert metres_f to millimetres_f.
 */
millimetres_f m_f_to_mm_f(metres_f metres);

/**
 * Convert metres_f to millimetres_t.
 */
millimetres_t m_f_to_mm_t(metres_f metres);

/**
 * Convert metres_f to millimetres_u.
 */
millimetres_u m_f_to_mm_u(metres_f metres);

/**
 * Convert metres_f to uint16_t.
 */
uint16_t m_f_to_u16(metres_f metres);

/**
 * Convert metres_f to uint32_t.
 */
uint32_t m_f_to_u32(metres_f metres);

/**
 * Convert metres_f to uint64_t.
 */
uint64_t m_f_to_u64(metres_f metres);

/**
 * Convert metres_f to uint8_t.
 */
uint8_t m_f_to_u8(metres_f metres);

/**
 * Convert metres_f to unsigned int.
 */
unsigned int m_f_to_u(metres_f metres);

/**
 * Convert metres_t to centimetres_d.
 */
centimetres_d m_t_to_cm_d(metres_t metres);

/**
 * Convert metres_t to centimetres_f.
 */
centimetres_f m_t_to_cm_f(metres_t metres);

/**
 * Convert metres_t to centimetres_t.
 */
centimetres_t m_t_to_cm_t(metres_t metres);

/**
 * Convert metres_t to centimetres_u.
 */
centimetres_u m_t_to_cm_u(metres_t metres);

/**
 * Convert metres_t to double.
 */
double m_t_to_d(metres_t metres);

/**
 * Convert metres_t to float.
 */
float m_t_to_f(metres_t metres);

/**
 * Convert metres_t to int.
 */
int m_t_to_i(metres_t metres);

/**
 * Convert metres_t to int16_t.
 */
int16_t m_t_to_i16(metres_t metres);

/**
 * Convert metres_t to int32_t.
 */
int32_t m_t_to_i32(metres_t metres);

/**
 * Convert metres_t to int64_t.
 */
int64_t m_t_to_i64(metres_t metres);

/**
 * Convert metres_t to int8_t.
 */
int8_t m_t_to_i8(metres_t metres);

/**
 * Convert metres_t to metres_d.
 */
metres_d m_t_to_m_d(metres_t metres);

/**
 * Convert metres_t to metres_f.
 */
metres_f m_t_to_m_f(metres_t metres);

/**
 * Convert metres_t to metres_u.
 */
metres_u m_t_to_m_u(metres_t metres);

/**
 * Convert metres_t to millimetres_d.
 */
millimetres_d m_t_to_mm_d(metres_t metres);

/**
 * Convert metres_t to millimetres_f.
 */
millimetres_f m_t_to_mm_f(metres_t metres);

/**
 * Convert metres_t to millimetres_t.
 */
millimetres_t m_t_to_mm_t(metres_t metres);

/**
 * Convert metres_t to millimetres_u.
 */
millimetres_u m_t_to_mm_u(metres_t metres);

/**
 * Convert metres_t to uint16_t.
 */
uint16_t m_t_to_u16(metres_t metres);

/**
 * Convert metres_t to uint32_t.
 */
uint32_t m_t_to_u32(metres_t metres);

/**
 * Convert metres_t to uint64_t.
 */
uint64_t m_t_to_u64(metres_t metres);

/**
 * Convert metres_t to uint8_t.
 */
uint8_t m_t_to_u8(metres_t metres);

/**
 * Convert metres_t to unsigned int.
 */
unsigned int m_t_to_u(metres_t metres);

/**
 * Convert metres_u to centimetres_d.
 */
centimetres_d m_u_to_cm_d(metres_u metres);

/**
 * Convert metres_u to centimetres_f.
 */
centimetres_f m_u_to_cm_f(metres_u metres);

/**
 * Convert metres_u to centimetres_t.
 */
centimetres_t m_u_to_cm_t(metres_u metres);

/**
 * Convert metres_u to centimetres_u.
 */
centimetres_u m_u_to_cm_u(metres_u metres);

/**
 * Convert metres_u to double.
 */
double m_u_to_d(metres_u metres);

/**
 * Convert metres_u to float.
 */
float m_u_to_f(metres_u metres);

/**
 * Convert metres_u to int.
 */
int m_u_to_i(metres_u metres);

/**
 * Convert metres_u to int16_t.
 */
int16_t m_u_to_i16(metres_u metres);

/**
 * Convert metres_u to int32_t.
 */
int32_t m_u_to_i32(metres_u metres);

/**
 * Convert metres_u to int64_t.
 */
int64_t m_u_to_i64(metres_u metres);

/**
 * Convert metres_u to int8_t.
 */
int8_t m_u_to_i8(metres_u metres);

/**
 * Convert metres_u to metres_d.
 */
metres_d m_u_to_m_d(metres_u metres);

/**
 * Convert metres_u to metres_f.
 */
metres_f m_u_to_m_f(metres_u metres);

/**
 * Convert metres_u to metres_t.
 */
metres_t m_u_to_m_t(metres_u metres);

/**
 * Convert metres_u to millimetres_d.
 */
millimetres_d m_u_to_mm_d(metres_u metres);

/**
 * Convert metres_u to millimetres_f.
 */
millimetres_f m_u_to_mm_f(metres_u metres);

/**
 * Convert metres_u to millimetres_t.
 */
millimetres_t m_u_to_mm_t(metres_u metres);

/**
 * Convert metres_u to millimetres_u.
 */
millimetres_u m_u_to_mm_u(metres_u metres);

/**
 * Convert metres_u to uint16_t.
 */
uint16_t m_u_to_u16(metres_u metres);

/**
 * Convert metres_u to uint32_t.
 */
uint32_t m_u_to_u32(metres_u metres);

/**
 * Convert metres_u to uint64_t.
 */
uint64_t m_u_to_u64(metres_u metres);

/**
 * Convert metres_u to uint8_t.
 */
uint8_t m_u_to_u8(metres_u metres);

/**
 * Convert metres_u to unsigned int.
 */
unsigned int m_u_to_u(metres_u metres);

/**
 * Convert millimetres_d to centimetres_d.
 */
centimetres_d mm_d_to_cm_d(millimetres_d millimetres);

/**
 * Convert millimetres_d to centimetres_f.
 */
centimetres_f mm_d_to_cm_f(millimetres_d millimetres);

/**
 * Convert millimetres_d to centimetres_t.
 */
centimetres_t mm_d_to_cm_t(millimetres_d millimetres);

/**
 * Convert millimetres_d to centimetres_u.
 */
centimetres_u mm_d_to_cm_u(millimetres_d millimetres);

/**
 * Convert millimetres_d to double.
 */
double mm_d_to_d(millimetres_d millimetres);

/**
 * Convert millimetres_d to float.
 */
float mm_d_to_f(millimetres_d millimetres);

/**
 * Convert millimetres_d to int.
 */
int mm_d_to_i(millimetres_d millimetres);

/**
 * Convert millimetres_d to int16_t.
 */
int16_t mm_d_to_i16(millimetres_d millimetres);

/**
 * Convert millimetres_d to int32_t.
 */
int32_t mm_d_to_i32(millimetres_d millimetres);

/**
 * Convert millimetres_d to int64_t.
 */
int64_t mm_d_to_i64(millimetres_d millimetres);

/**
 * Convert millimetres_d to int8_t.
 */
int8_t mm_d_to_i8(millimetres_d millimetres);

/**
 * Convert millimetres_d to metres_d.
 */
metres_d mm_d_to_m_d(millimetres_d millimetres);

/**
 * Convert millimetres_d to metres_f.
 */
metres_f mm_d_to_m_f(millimetres_d millimetres);

/**
 * Convert millimetres_d to metres_t.
 */
metres_t mm_d_to_m_t(millimetres_d millimetres);

/**
 * Convert millimetres_d to metres_u.
 */
metres_u mm_d_to_m_u(millimetres_d millimetres);

/**
 * Convert millimetres_d to millimetres_f.
 */
millimetres_f mm_d_to_mm_f(millimetres_d millimetres);

/**
 * Convert millimetres_d to millimetres_t.
 */
millimetres_t mm_d_to_mm_t(millimetres_d millimetres);

/**
 * Convert millimetres_d to millimetres_u.
 */
millimetres_u mm_d_to_mm_u(millimetres_d millimetres);

/**
 * Convert millimetres_d to uint16_t.
 */
uint16_t mm_d_to_u16(millimetres_d millimetres);

/**
 * Convert millimetres_d to uint32_t.
 */
uint32_t mm_d_to_u32(millimetres_d millimetres);

/**
 * Convert millimetres_d to uint64_t.
 */
uint64_t mm_d_to_u64(millimetres_d millimetres);

/**
 * Convert millimetres_d to uint8_t.
 */
uint8_t mm_d_to_u8(millimetres_d millimetres);

/**
 * Convert millimetres_d to unsigned int.
 */
unsigned int mm_d_to_u(millimetres_d millimetres);

/**
 * Convert millimetres_f to centimetres_d.
 */
centimetres_d mm_f_to_cm_d(millimetres_f millimetres);

/**
 * Convert millimetres_f to centimetres_f.
 */
centimetres_f mm_f_to_cm_f(millimetres_f millimetres);

/**
 * Convert millimetres_f to centimetres_t.
 */
centimetres_t mm_f_to_cm_t(millimetres_f millimetres);

/**
 * Convert millimetres_f to centimetres_u.
 */
centimetres_u mm_f_to_cm_u(millimetres_f millimetres);

/**
 * Convert millimetres_f to double.
 */
double mm_f_to_d(millimetres_f millimetres);

/**
 * Convert millimetres_f to float.
 */
float mm_f_to_f(millimetres_f millimetres);

/**
 * Convert millimetres_f to int.
 */
int mm_f_to_i(millimetres_f millimetres);

/**
 * Convert millimetres_f to int16_t.
 */
int16_t mm_f_to_i16(millimetres_f millimetres);

/**
 * Convert millimetres_f to int32_t.
 */
int32_t mm_f_to_i32(millimetres_f millimetres);

/**
 * Convert millimetres_f to int64_t.
 */
int64_t mm_f_to_i64(millimetres_f millimetres);

/**
 * Convert millimetres_f to int8_t.
 */
int8_t mm_f_to_i8(millimetres_f millimetres);

/**
 * Convert millimetres_f to metres_d.
 */
metres_d mm_f_to_m_d(millimetres_f millimetres);

/**
 * Convert millimetres_f to metres_f.
 */
metres_f mm_f_to_m_f(millimetres_f millimetres);

/**
 * Convert millimetres_f to metres_t.
 */
metres_t mm_f_to_m_t(millimetres_f millimetres);

/**
 * Convert millimetres_f to metres_u.
 */
metres_u mm_f_to_m_u(millimetres_f millimetres);

/**
 * Convert millimetres_f to millimetres_d.
 */
millimetres_d mm_f_to_mm_d(millimetres_f millimetres);

/**
 * Convert millimetres_f to millimetres_t.
 */
millimetres_t mm_f_to_mm_t(millimetres_f millimetres);

/**
 * Convert millimetres_f to millimetres_u.
 */
millimetres_u mm_f_to_mm_u(millimetres_f millimetres);

/**
 * Convert millimetres_f to uint16_t.
 */
uint16_t mm_f_to_u16(millimetres_f millimetres);

/**
 * Convert millimetres_f to uint32_t.
 */
uint32_t mm_f_to_u32(millimetres_f millimetres);

/**
 * Convert millimetres_f to uint64_t.
 */
uint64_t mm_f_to_u64(millimetres_f millimetres);

/**
 * Convert millimetres_f to uint8_t.
 */
uint8_t mm_f_to_u8(millimetres_f millimetres);

/**
 * Convert millimetres_f to unsigned int.
 */
unsigned int mm_f_to_u(millimetres_f millimetres);

/**
 * Convert millimetres_t to centimetres_d.
 */
centimetres_d mm_t_to_cm_d(millimetres_t millimetres);

/**
 * Convert millimetres_t to centimetres_f.
 */
centimetres_f mm_t_to_cm_f(millimetres_t millimetres);

/**
 * Convert millimetres_t to centimetres_t.
 */
centimetres_t mm_t_to_cm_t(millimetres_t millimetres);

/**
 * Convert millimetres_t to centimetres_u.
 */
centimetres_u mm_t_to_cm_u(millimetres_t millimetres);

/**
 * Convert millimetres_t to double.
 */
double mm_t_to_d(millimetres_t millimetres);

/**
 * Convert millimetres_t to float.
 */
float mm_t_to_f(millimetres_t millimetres);

/**
 * Convert millimetres_t to int.
 */
int mm_t_to_i(millimetres_t millimetres);

/**
 * Convert millimetres_t to int16_t.
 */
int16_t mm_t_to_i16(millimetres_t millimetres);

/**
 * Convert millimetres_t to int32_t.
 */
int32_t mm_t_to_i32(millimetres_t millimetres);

/**
 * Convert millimetres_t to int64_t.
 */
int64_t mm_t_to_i64(millimetres_t millimetres);

/**
 * Convert millimetres_t to int8_t.
 */
int8_t mm_t_to_i8(millimetres_t millimetres);

/**
 * Convert millimetres_t to metres_d.
 */
metres_d mm_t_to_m_d(millimetres_t millimetres);

/**
 * Convert millimetres_t to metres_f.
 */
metres_f mm_t_to_m_f(millimetres_t millimetres);

/**
 * Convert millimetres_t to metres_t.
 */
metres_t mm_t_to_m_t(millimetres_t millimetres);

/**
 * Convert millimetres_t to metres_u.
 */
metres_u mm_t_to_m_u(millimetres_t millimetres);

/**
 * Convert millimetres_t to millimetres_d.
 */
millimetres_d mm_t_to_mm_d(millimetres_t millimetres);

/**
 * Convert millimetres_t to millimetres_f.
 */
millimetres_f mm_t_to_mm_f(millimetres_t millimetres);

/**
 * Convert millimetres_t to millimetres_u.
 */
millimetres_u mm_t_to_mm_u(millimetres_t millimetres);

/**
 * Convert millimetres_t to uint16_t.
 */
uint16_t mm_t_to_u16(millimetres_t millimetres);

/**
 * Convert millimetres_t to uint32_t.
 */
uint32_t mm_t_to_u32(millimetres_t millimetres);

/**
 * Convert millimetres_t to uint64_t.
 */
uint64_t mm_t_to_u64(millimetres_t millimetres);

/**
 * Convert millimetres_t to uint8_t.
 */
uint8_t mm_t_to_u8(millimetres_t millimetres);

/**
 * Convert millimetres_t to unsigned int.
 */
unsigned int mm_t_to_u(millimetres_t millimetres);

/**
 * Convert millimetres_u to centimetres_d.
 */
centimetres_d mm_u_to_cm_d(millimetres_u millimetres);

/**
 * Convert millimetres_u to centimetres_f.
 */
centimetres_f mm_u_to_cm_f(millimetres_u millimetres);

/**
 * Convert millimetres_u to centimetres_t.
 */
centimetres_t mm_u_to_cm_t(millimetres_u millimetres);

/**
 * Convert millimetres_u to centimetres_u.
 */
centimetres_u mm_u_to_cm_u(millimetres_u millimetres);

/**
 * Convert millimetres_u to double.
 */
double mm_u_to_d(millimetres_u millimetres);

/**
 * Convert millimetres_u to float.
 */
float mm_u_to_f(millimetres_u millimetres);

/**
 * Convert millimetres_u to int.
 */
int mm_u_to_i(millimetres_u millimetres);

/**
 * Convert millimetres_u to int16_t.
 */
int16_t mm_u_to_i16(millimetres_u millimetres);

/**
 * Convert millimetres_u to int32_t.
 */
int32_t mm_u_to_i32(millimetres_u millimetres);

/**
 * Convert millimetres_u to int64_t.
 */
int64_t mm_u_to_i64(millimetres_u millimetres);

/**
 * Convert millimetres_u to int8_t.
 */
int8_t mm_u_to_i8(millimetres_u millimetres);

/**
 * Convert millimetres_u to metres_d.
 */
metres_d mm_u_to_m_d(millimetres_u millimetres);

/**
 * Convert millimetres_u to metres_f.
 */
metres_f mm_u_to_m_f(millimetres_u millimetres);

/**
 * Convert millimetres_u to metres_t.
 */
metres_t mm_u_to_m_t(millimetres_u millimetres);

/**
 * Convert millimetres_u to metres_u.
 */
metres_u mm_u_to_m_u(millimetres_u millimetres);

/**
 * Convert millimetres_u to millimetres_d.
 */
millimetres_d mm_u_to_mm_d(millimetres_u millimetres);

/**
 * Convert millimetres_u to millimetres_f.
 */
millimetres_f mm_u_to_mm_f(millimetres_u millimetres);

/**
 * Convert millimetres_u to millimetres_t.
 */
millimetres_t mm_u_to_mm_t(millimetres_u millimetres);

/**
 * Convert millimetres_u to uint16_t.
 */
uint16_t mm_u_to_u16(millimetres_u millimetres);

/**
 * Convert millimetres_u to uint32_t.
 */
uint32_t mm_u_to_u32(millimetres_u millimetres);

/**
 * Convert millimetres_u to uint64_t.
 */
uint64_t mm_u_to_u64(millimetres_u millimetres);

/**
 * Convert millimetres_u to uint8_t.
 */
uint8_t mm_u_to_u8(millimetres_u millimetres);

/**
 * Convert millimetres_u to unsigned int.
 */
unsigned int mm_u_to_u(millimetres_u millimetres);

/**
 * Convert uint16_t to centimetres_d.
 */
centimetres_d u16_to_cm_d(uint16_t centimetres);

/**
 * Convert uint16_t to centimetres_f.
 */
centimetres_f u16_to_cm_f(uint16_t centimetres);

/**
 * Convert uint16_t to centimetres_t.
 */
centimetres_t u16_to_cm_t(uint16_t centimetres);

/**
 * Convert uint16_t to centimetres_u.
 */
centimetres_u u16_to_cm_u(uint16_t centimetres);

/**
 * Convert uint16_t to metres_d.
 */
metres_d u16_to_m_d(uint16_t metres);

/**
 * Convert uint16_t to metres_f.
 */
metres_f u16_to_m_f(uint16_t metres);

/**
 * Convert uint16_t to metres_t.
 */
metres_t u16_to_m_t(uint16_t metres);

/**
 * Convert uint16_t to metres_u.
 */
metres_u u16_to_m_u(uint16_t metres);

/**
 * Convert uint16_t to millimetres_d.
 */
millimetres_d u16_to_mm_d(uint16_t millimetres);

/**
 * Convert uint16_t to millimetres_f.
 */
millimetres_f u16_to_mm_f(uint16_t millimetres);

/**
 * Convert uint16_t to millimetres_t.
 */
millimetres_t u16_to_mm_t(uint16_t millimetres);

/**
 * Convert uint16_t to millimetres_u.
 */
millimetres_u u16_to_mm_u(uint16_t millimetres);

/**
 * Convert uint32_t to centimetres_d.
 */
centimetres_d u32_to_cm_d(uint32_t centimetres);

/**
 * Convert uint32_t to centimetres_f.
 */
centimetres_f u32_to_cm_f(uint32_t centimetres);

/**
 * Convert uint32_t to centimetres_t.
 */
centimetres_t u32_to_cm_t(uint32_t centimetres);

/**
 * Convert uint32_t to centimetres_u.
 */
centimetres_u u32_to_cm_u(uint32_t centimetres);

/**
 * Convert uint32_t to metres_d.
 */
metres_d u32_to_m_d(uint32_t metres);

/**
 * Convert uint32_t to metres_f.
 */
metres_f u32_to_m_f(uint32_t metres);

/**
 * Convert uint32_t to metres_t.
 */
metres_t u32_to_m_t(uint32_t metres);

/**
 * Convert uint32_t to metres_u.
 */
metres_u u32_to_m_u(uint32_t metres);

/**
 * Convert uint32_t to millimetres_d.
 */
millimetres_d u32_to_mm_d(uint32_t millimetres);

/**
 * Convert uint32_t to millimetres_f.
 */
millimetres_f u32_to_mm_f(uint32_t millimetres);

/**
 * Convert uint32_t to millimetres_t.
 */
millimetres_t u32_to_mm_t(uint32_t millimetres);

/**
 * Convert uint32_t to millimetres_u.
 */
millimetres_u u32_to_mm_u(uint32_t millimetres);

/**
 * Convert uint64_t to centimetres_d.
 */
centimetres_d u64_to_cm_d(uint64_t centimetres);

/**
 * Convert uint64_t to centimetres_f.
 */
centimetres_f u64_to_cm_f(uint64_t centimetres);

/**
 * Convert uint64_t to centimetres_t.
 */
centimetres_t u64_to_cm_t(uint64_t centimetres);

/**
 * Convert uint64_t to centimetres_u.
 */
centimetres_u u64_to_cm_u(uint64_t centimetres);

/**
 * Convert uint64_t to metres_d.
 */
metres_d u64_to_m_d(uint64_t metres);

/**
 * Convert uint64_t to metres_f.
 */
metres_f u64_to_m_f(uint64_t metres);

/**
 * Convert uint64_t to metres_t.
 */
metres_t u64_to_m_t(uint64_t metres);

/**
 * Convert uint64_t to metres_u.
 */
metres_u u64_to_m_u(uint64_t metres);

/**
 * Convert uint64_t to millimetres_d.
 */
millimetres_d u64_to_mm_d(uint64_t millimetres);

/**
 * Convert uint64_t to millimetres_f.
 */
millimetres_f u64_to_mm_f(uint64_t millimetres);

/**
 * Convert uint64_t to millimetres_t.
 */
millimetres_t u64_to_mm_t(uint64_t millimetres);

/**
 * Convert uint64_t to millimetres_u.
 */
millimetres_u u64_to_mm_u(uint64_t millimetres);

/**
 * Convert uint8_t to centimetres_d.
 */
centimetres_d u8_to_cm_d(uint8_t centimetres);

/**
 * Convert uint8_t to centimetres_f.
 */
centimetres_f u8_to_cm_f(uint8_t centimetres);

/**
 * Convert uint8_t to centimetres_t.
 */
centimetres_t u8_to_cm_t(uint8_t centimetres);

/**
 * Convert uint8_t to centimetres_u.
 */
centimetres_u u8_to_cm_u(uint8_t centimetres);

/**
 * Convert uint8_t to metres_d.
 */
metres_d u8_to_m_d(uint8_t metres);

/**
 * Convert uint8_t to metres_f.
 */
metres_f u8_to_m_f(uint8_t metres);

/**
 * Convert uint8_t to metres_t.
 */
metres_t u8_to_m_t(uint8_t metres);

/**
 * Convert uint8_t to metres_u.
 */
metres_u u8_to_m_u(uint8_t metres);

/**
 * Convert uint8_t to millimetres_d.
 */
millimetres_d u8_to_mm_d(uint8_t millimetres);

/**
 * Convert uint8_t to millimetres_f.
 */
millimetres_f u8_to_mm_f(uint8_t millimetres);

/**
 * Convert uint8_t to millimetres_t.
 */
millimetres_t u8_to_mm_t(uint8_t millimetres);

/**
 * Convert uint8_t to millimetres_u.
 */
millimetres_u u8_to_mm_u(uint8_t millimetres);

/**
 * Convert unsigned int to centimetres_d.
 */
centimetres_d u_to_cm_d(unsigned int centimetres);

/**
 * Convert unsigned int to centimetres_f.
 */
centimetres_f u_to_cm_f(unsigned int centimetres);

/**
 * Convert unsigned int to centimetres_t.
 */
centimetres_t u_to_cm_t(unsigned int centimetres);

/**
 * Convert unsigned int to centimetres_u.
 */
centimetres_u u_to_cm_u(unsigned int centimetres);

/**
 * Convert unsigned int to metres_d.
 */
metres_d u_to_m_d(unsigned int metres);

/**
 * Convert unsigned int to metres_f.
 */
metres_f u_to_m_f(unsigned int metres);

/**
 * Convert unsigned int to metres_t.
 */
metres_t u_to_m_t(unsigned int metres);

/**
 * Convert unsigned int to metres_u.
 */
metres_u u_to_m_u(unsigned int metres);

/**
 * Convert unsigned int to millimetres_d.
 */
millimetres_d u_to_mm_d(unsigned int millimetres);

/**
 * Convert unsigned int to millimetres_f.
 */
millimetres_f u_to_mm_f(unsigned int millimetres);

/**
 * Convert unsigned int to millimetres_t.
 */
millimetres_t u_to_mm_t(unsigned int millimetres);

/**
 * Convert unsigned int to millimetres_u.
 */
millimetres_u u_to_mm_u(unsigned int millimetres);

// Time Conversion Functions

/**
 * Convert double to microseconds_d.
 */
microseconds_d d_to_us_d(double microseconds);

/**
 * Convert double to microseconds_f.
 */
microseconds_f d_to_us_f(double microseconds);

/**
 * Convert double to microseconds_t.
 */
microseconds_t d_to_us_t(double microseconds);

/**
 * Convert double to microseconds_u.
 */
microseconds_u d_to_us_u(double microseconds);

/**
 * Convert double to milliseconds_d.
 */
milliseconds_d d_to_ms_d(double milliseconds);

/**
 * Convert double to milliseconds_f.
 */
milliseconds_f d_to_ms_f(double milliseconds);

/**
 * Convert double to milliseconds_t.
 */
milliseconds_t d_to_ms_t(double milliseconds);

/**
 * Convert double to milliseconds_u.
 */
milliseconds_u d_to_ms_u(double milliseconds);

/**
 * Convert double to seconds_d.
 */
seconds_d d_to_s_d(double seconds);

/**
 * Convert double to seconds_f.
 */
seconds_f d_to_s_f(double seconds);

/**
 * Convert double to seconds_t.
 */
seconds_t d_to_s_t(double seconds);

/**
 * Convert double to seconds_u.
 */
seconds_u d_to_s_u(double seconds);

/**
 * Convert float to microseconds_d.
 */
microseconds_d f_to_us_d(float microseconds);

/**
 * Convert float to microseconds_f.
 */
microseconds_f f_to_us_f(float microseconds);

/**
 * Convert float to microseconds_t.
 */
microseconds_t f_to_us_t(float microseconds);

/**
 * Convert float to microseconds_u.
 */
microseconds_u f_to_us_u(float microseconds);

/**
 * Convert float to milliseconds_d.
 */
milliseconds_d f_to_ms_d(float milliseconds);

/**
 * Convert float to milliseconds_f.
 */
milliseconds_f f_to_ms_f(float milliseconds);

/**
 * Convert float to milliseconds_t.
 */
milliseconds_t f_to_ms_t(float milliseconds);

/**
 * Convert float to milliseconds_u.
 */
milliseconds_u f_to_ms_u(float milliseconds);

/**
 * Convert float to seconds_d.
 */
seconds_d f_to_s_d(float seconds);

/**
 * Convert float to seconds_f.
 */
seconds_f f_to_s_f(float seconds);

/**
 * Convert float to seconds_t.
 */
seconds_t f_to_s_t(float seconds);

/**
 * Convert float to seconds_u.
 */
seconds_u f_to_s_u(float seconds);

/**
 * Convert int16_t to microseconds_d.
 */
microseconds_d i16_to_us_d(int16_t microseconds);

/**
 * Convert int16_t to microseconds_f.
 */
microseconds_f i16_to_us_f(int16_t microseconds);

/**
 * Convert int16_t to microseconds_t.
 */
microseconds_t i16_to_us_t(int16_t microseconds);

/**
 * Convert int16_t to microseconds_u.
 */
microseconds_u i16_to_us_u(int16_t microseconds);

/**
 * Convert int16_t to milliseconds_d.
 */
milliseconds_d i16_to_ms_d(int16_t milliseconds);

/**
 * Convert int16_t to milliseconds_f.
 */
milliseconds_f i16_to_ms_f(int16_t milliseconds);

/**
 * Convert int16_t to milliseconds_t.
 */
milliseconds_t i16_to_ms_t(int16_t milliseconds);

/**
 * Convert int16_t to milliseconds_u.
 */
milliseconds_u i16_to_ms_u(int16_t milliseconds);

/**
 * Convert int16_t to seconds_d.
 */
seconds_d i16_to_s_d(int16_t seconds);

/**
 * Convert int16_t to seconds_f.
 */
seconds_f i16_to_s_f(int16_t seconds);

/**
 * Convert int16_t to seconds_t.
 */
seconds_t i16_to_s_t(int16_t seconds);

/**
 * Convert int16_t to seconds_u.
 */
seconds_u i16_to_s_u(int16_t seconds);

/**
 * Convert int32_t to microseconds_d.
 */
microseconds_d i32_to_us_d(int32_t microseconds);

/**
 * Convert int32_t to microseconds_f.
 */
microseconds_f i32_to_us_f(int32_t microseconds);

/**
 * Convert int32_t to microseconds_t.
 */
microseconds_t i32_to_us_t(int32_t microseconds);

/**
 * Convert int32_t to microseconds_u.
 */
microseconds_u i32_to_us_u(int32_t microseconds);

/**
 * Convert int32_t to milliseconds_d.
 */
milliseconds_d i32_to_ms_d(int32_t milliseconds);

/**
 * Convert int32_t to milliseconds_f.
 */
milliseconds_f i32_to_ms_f(int32_t milliseconds);

/**
 * Convert int32_t to milliseconds_t.
 */
milliseconds_t i32_to_ms_t(int32_t milliseconds);

/**
 * Convert int32_t to milliseconds_u.
 */
milliseconds_u i32_to_ms_u(int32_t milliseconds);

/**
 * Convert int32_t to seconds_d.
 */
seconds_d i32_to_s_d(int32_t seconds);

/**
 * Convert int32_t to seconds_f.
 */
seconds_f i32_to_s_f(int32_t seconds);

/**
 * Convert int32_t to seconds_t.
 */
seconds_t i32_to_s_t(int32_t seconds);

/**
 * Convert int32_t to seconds_u.
 */
seconds_u i32_to_s_u(int32_t seconds);

/**
 * Convert int64_t to microseconds_d.
 */
microseconds_d i64_to_us_d(int64_t microseconds);

/**
 * Convert int64_t to microseconds_f.
 */
microseconds_f i64_to_us_f(int64_t microseconds);

/**
 * Convert int64_t to microseconds_t.
 */
microseconds_t i64_to_us_t(int64_t microseconds);

/**
 * Convert int64_t to microseconds_u.
 */
microseconds_u i64_to_us_u(int64_t microseconds);

/**
 * Convert int64_t to milliseconds_d.
 */
milliseconds_d i64_to_ms_d(int64_t milliseconds);

/**
 * Convert int64_t to milliseconds_f.
 */
milliseconds_f i64_to_ms_f(int64_t milliseconds);

/**
 * Convert int64_t to milliseconds_t.
 */
milliseconds_t i64_to_ms_t(int64_t milliseconds);

/**
 * Convert int64_t to milliseconds_u.
 */
milliseconds_u i64_to_ms_u(int64_t milliseconds);

/**
 * Convert int64_t to seconds_d.
 */
seconds_d i64_to_s_d(int64_t seconds);

/**
 * Convert int64_t to seconds_f.
 */
seconds_f i64_to_s_f(int64_t seconds);

/**
 * Convert int64_t to seconds_t.
 */
seconds_t i64_to_s_t(int64_t seconds);

/**
 * Convert int64_t to seconds_u.
 */
seconds_u i64_to_s_u(int64_t seconds);

/**
 * Convert int8_t to microseconds_d.
 */
microseconds_d i8_to_us_d(int8_t microseconds);

/**
 * Convert int8_t to microseconds_f.
 */
microseconds_f i8_to_us_f(int8_t microseconds);

/**
 * Convert int8_t to microseconds_t.
 */
microseconds_t i8_to_us_t(int8_t microseconds);

/**
 * Convert int8_t to microseconds_u.
 */
microseconds_u i8_to_us_u(int8_t microseconds);

/**
 * Convert int8_t to milliseconds_d.
 */
milliseconds_d i8_to_ms_d(int8_t milliseconds);

/**
 * Convert int8_t to milliseconds_f.
 */
milliseconds_f i8_to_ms_f(int8_t milliseconds);

/**
 * Convert int8_t to milliseconds_t.
 */
milliseconds_t i8_to_ms_t(int8_t milliseconds);

/**
 * Convert int8_t to milliseconds_u.
 */
milliseconds_u i8_to_ms_u(int8_t milliseconds);

/**
 * Convert int8_t to seconds_d.
 */
seconds_d i8_to_s_d(int8_t seconds);

/**
 * Convert int8_t to seconds_f.
 */
seconds_f i8_to_s_f(int8_t seconds);

/**
 * Convert int8_t to seconds_t.
 */
seconds_t i8_to_s_t(int8_t seconds);

/**
 * Convert int8_t to seconds_u.
 */
seconds_u i8_to_s_u(int8_t seconds);

/**
 * Convert int to microseconds_d.
 */
microseconds_d i_to_us_d(int microseconds);

/**
 * Convert int to microseconds_f.
 */
microseconds_f i_to_us_f(int microseconds);

/**
 * Convert int to microseconds_t.
 */
microseconds_t i_to_us_t(int microseconds);

/**
 * Convert int to microseconds_u.
 */
microseconds_u i_to_us_u(int microseconds);

/**
 * Convert int to milliseconds_d.
 */
milliseconds_d i_to_ms_d(int milliseconds);

/**
 * Convert int to milliseconds_f.
 */
milliseconds_f i_to_ms_f(int milliseconds);

/**
 * Convert int to milliseconds_t.
 */
milliseconds_t i_to_ms_t(int milliseconds);

/**
 * Convert int to milliseconds_u.
 */
milliseconds_u i_to_ms_u(int milliseconds);

/**
 * Convert int to seconds_d.
 */
seconds_d i_to_s_d(int seconds);

/**
 * Convert int to seconds_f.
 */
seconds_f i_to_s_f(int seconds);

/**
 * Convert int to seconds_t.
 */
seconds_t i_to_s_t(int seconds);

/**
 * Convert int to seconds_u.
 */
seconds_u i_to_s_u(int seconds);

/**
 * Convert microseconds_d to double.
 */
double us_d_to_d(microseconds_d microseconds);

/**
 * Convert microseconds_d to float.
 */
float us_d_to_f(microseconds_d microseconds);

/**
 * Convert microseconds_d to int.
 */
int us_d_to_i(microseconds_d microseconds);

/**
 * Convert microseconds_d to int16_t.
 */
int16_t us_d_to_i16(microseconds_d microseconds);

/**
 * Convert microseconds_d to int32_t.
 */
int32_t us_d_to_i32(microseconds_d microseconds);

/**
 * Convert microseconds_d to int64_t.
 */
int64_t us_d_to_i64(microseconds_d microseconds);

/**
 * Convert microseconds_d to int8_t.
 */
int8_t us_d_to_i8(microseconds_d microseconds);

/**
 * Convert microseconds_d to microseconds_f.
 */
microseconds_f us_d_to_us_f(microseconds_d microseconds);

/**
 * Convert microseconds_d to microseconds_t.
 */
microseconds_t us_d_to_us_t(microseconds_d microseconds);

/**
 * Convert microseconds_d to microseconds_u.
 */
microseconds_u us_d_to_us_u(microseconds_d microseconds);

/**
 * Convert microseconds_d to milliseconds_d.
 */
milliseconds_d us_d_to_ms_d(microseconds_d microseconds);

/**
 * Convert microseconds_d to milliseconds_f.
 */
milliseconds_f us_d_to_ms_f(microseconds_d microseconds);

/**
 * Convert microseconds_d to milliseconds_t.
 */
milliseconds_t us_d_to_ms_t(microseconds_d microseconds);

/**
 * Convert microseconds_d to milliseconds_u.
 */
milliseconds_u us_d_to_ms_u(microseconds_d microseconds);

/**
 * Convert microseconds_d to seconds_d.
 */
seconds_d us_d_to_s_d(microseconds_d microseconds);

/**
 * Convert microseconds_d to seconds_f.
 */
seconds_f us_d_to_s_f(microseconds_d microseconds);

/**
 * Convert microseconds_d to seconds_t.
 */
seconds_t us_d_to_s_t(microseconds_d microseconds);

/**
 * Convert microseconds_d to seconds_u.
 */
seconds_u us_d_to_s_u(microseconds_d microseconds);

/**
 * Convert microseconds_d to uint16_t.
 */
uint16_t us_d_to_u16(microseconds_d microseconds);

/**
 * Convert microseconds_d to uint32_t.
 */
uint32_t us_d_to_u32(microseconds_d microseconds);

/**
 * Convert microseconds_d to uint64_t.
 */
uint64_t us_d_to_u64(microseconds_d microseconds);

/**
 * Convert microseconds_d to uint8_t.
 */
uint8_t us_d_to_u8(microseconds_d microseconds);

/**
 * Convert microseconds_d to unsigned int.
 */
unsigned int us_d_to_u(microseconds_d microseconds);

/**
 * Convert microseconds_f to double.
 */
double us_f_to_d(microseconds_f microseconds);

/**
 * Convert microseconds_f to float.
 */
float us_f_to_f(microseconds_f microseconds);

/**
 * Convert microseconds_f to int.
 */
int us_f_to_i(microseconds_f microseconds);

/**
 * Convert microseconds_f to int16_t.
 */
int16_t us_f_to_i16(microseconds_f microseconds);

/**
 * Convert microseconds_f to int32_t.
 */
int32_t us_f_to_i32(microseconds_f microseconds);

/**
 * Convert microseconds_f to int64_t.
 */
int64_t us_f_to_i64(microseconds_f microseconds);

/**
 * Convert microseconds_f to int8_t.
 */
int8_t us_f_to_i8(microseconds_f microseconds);

/**
 * Convert microseconds_f to microseconds_d.
 */
microseconds_d us_f_to_us_d(microseconds_f microseconds);

/**
 * Convert microseconds_f to microseconds_t.
 */
microseconds_t us_f_to_us_t(microseconds_f microseconds);

/**
 * Convert microseconds_f to microseconds_u.
 */
microseconds_u us_f_to_us_u(microseconds_f microseconds);

/**
 * Convert microseconds_f to milliseconds_d.
 */
milliseconds_d us_f_to_ms_d(microseconds_f microseconds);

/**
 * Convert microseconds_f to milliseconds_f.
 */
milliseconds_f us_f_to_ms_f(microseconds_f microseconds);

/**
 * Convert microseconds_f to milliseconds_t.
 */
milliseconds_t us_f_to_ms_t(microseconds_f microseconds);

/**
 * Convert microseconds_f to milliseconds_u.
 */
milliseconds_u us_f_to_ms_u(microseconds_f microseconds);

/**
 * Convert microseconds_f to seconds_d.
 */
seconds_d us_f_to_s_d(microseconds_f microseconds);

/**
 * Convert microseconds_f to seconds_f.
 */
seconds_f us_f_to_s_f(microseconds_f microseconds);

/**
 * Convert microseconds_f to seconds_t.
 */
seconds_t us_f_to_s_t(microseconds_f microseconds);

/**
 * Convert microseconds_f to seconds_u.
 */
seconds_u us_f_to_s_u(microseconds_f microseconds);

/**
 * Convert microseconds_f to uint16_t.
 */
uint16_t us_f_to_u16(microseconds_f microseconds);

/**
 * Convert microseconds_f to uint32_t.
 */
uint32_t us_f_to_u32(microseconds_f microseconds);

/**
 * Convert microseconds_f to uint64_t.
 */
uint64_t us_f_to_u64(microseconds_f microseconds);

/**
 * Convert microseconds_f to uint8_t.
 */
uint8_t us_f_to_u8(microseconds_f microseconds);

/**
 * Convert microseconds_f to unsigned int.
 */
unsigned int us_f_to_u(microseconds_f microseconds);

/**
 * Convert microseconds_t to double.
 */
double us_t_to_d(microseconds_t microseconds);

/**
 * Convert microseconds_t to float.
 */
float us_t_to_f(microseconds_t microseconds);

/**
 * Convert microseconds_t to int.
 */
int us_t_to_i(microseconds_t microseconds);

/**
 * Convert microseconds_t to int16_t.
 */
int16_t us_t_to_i16(microseconds_t microseconds);

/**
 * Convert microseconds_t to int32_t.
 */
int32_t us_t_to_i32(microseconds_t microseconds);

/**
 * Convert microseconds_t to int64_t.
 */
int64_t us_t_to_i64(microseconds_t microseconds);

/**
 * Convert microseconds_t to int8_t.
 */
int8_t us_t_to_i8(microseconds_t microseconds);

/**
 * Convert microseconds_t to microseconds_d.
 */
microseconds_d us_t_to_us_d(microseconds_t microseconds);

/**
 * Convert microseconds_t to microseconds_f.
 */
microseconds_f us_t_to_us_f(microseconds_t microseconds);

/**
 * Convert microseconds_t to microseconds_u.
 */
microseconds_u us_t_to_us_u(microseconds_t microseconds);

/**
 * Convert microseconds_t to milliseconds_d.
 */
milliseconds_d us_t_to_ms_d(microseconds_t microseconds);

/**
 * Convert microseconds_t to milliseconds_f.
 */
milliseconds_f us_t_to_ms_f(microseconds_t microseconds);

/**
 * Convert microseconds_t to milliseconds_t.
 */
milliseconds_t us_t_to_ms_t(microseconds_t microseconds);

/**
 * Convert microseconds_t to milliseconds_u.
 */
milliseconds_u us_t_to_ms_u(microseconds_t microseconds);

/**
 * Convert microseconds_t to seconds_d.
 */
seconds_d us_t_to_s_d(microseconds_t microseconds);

/**
 * Convert microseconds_t to seconds_f.
 */
seconds_f us_t_to_s_f(microseconds_t microseconds);

/**
 * Convert microseconds_t to seconds_t.
 */
seconds_t us_t_to_s_t(microseconds_t microseconds);

/**
 * Convert microseconds_t to seconds_u.
 */
seconds_u us_t_to_s_u(microseconds_t microseconds);

/**
 * Convert microseconds_t to uint16_t.
 */
uint16_t us_t_to_u16(microseconds_t microseconds);

/**
 * Convert microseconds_t to uint32_t.
 */
uint32_t us_t_to_u32(microseconds_t microseconds);

/**
 * Convert microseconds_t to uint64_t.
 */
uint64_t us_t_to_u64(microseconds_t microseconds);

/**
 * Convert microseconds_t to uint8_t.
 */
uint8_t us_t_to_u8(microseconds_t microseconds);

/**
 * Convert microseconds_t to unsigned int.
 */
unsigned int us_t_to_u(microseconds_t microseconds);

/**
 * Convert microseconds_u to double.
 */
double us_u_to_d(microseconds_u microseconds);

/**
 * Convert microseconds_u to float.
 */
float us_u_to_f(microseconds_u microseconds);

/**
 * Convert microseconds_u to int.
 */
int us_u_to_i(microseconds_u microseconds);

/**
 * Convert microseconds_u to int16_t.
 */
int16_t us_u_to_i16(microseconds_u microseconds);

/**
 * Convert microseconds_u to int32_t.
 */
int32_t us_u_to_i32(microseconds_u microseconds);

/**
 * Convert microseconds_u to int64_t.
 */
int64_t us_u_to_i64(microseconds_u microseconds);

/**
 * Convert microseconds_u to int8_t.
 */
int8_t us_u_to_i8(microseconds_u microseconds);

/**
 * Convert microseconds_u to microseconds_d.
 */
microseconds_d us_u_to_us_d(microseconds_u microseconds);

/**
 * Convert microseconds_u to microseconds_f.
 */
microseconds_f us_u_to_us_f(microseconds_u microseconds);

/**
 * Convert microseconds_u to microseconds_t.
 */
microseconds_t us_u_to_us_t(microseconds_u microseconds);

/**
 * Convert microseconds_u to milliseconds_d.
 */
milliseconds_d us_u_to_ms_d(microseconds_u microseconds);

/**
 * Convert microseconds_u to milliseconds_f.
 */
milliseconds_f us_u_to_ms_f(microseconds_u microseconds);

/**
 * Convert microseconds_u to milliseconds_t.
 */
milliseconds_t us_u_to_ms_t(microseconds_u microseconds);

/**
 * Convert microseconds_u to milliseconds_u.
 */
milliseconds_u us_u_to_ms_u(microseconds_u microseconds);

/**
 * Convert microseconds_u to seconds_d.
 */
seconds_d us_u_to_s_d(microseconds_u microseconds);

/**
 * Convert microseconds_u to seconds_f.
 */
seconds_f us_u_to_s_f(microseconds_u microseconds);

/**
 * Convert microseconds_u to seconds_t.
 */
seconds_t us_u_to_s_t(microseconds_u microseconds);

/**
 * Convert microseconds_u to seconds_u.
 */
seconds_u us_u_to_s_u(microseconds_u microseconds);

/**
 * Convert microseconds_u to uint16_t.
 */
uint16_t us_u_to_u16(microseconds_u microseconds);

/**
 * Convert microseconds_u to uint32_t.
 */
uint32_t us_u_to_u32(microseconds_u microseconds);

/**
 * Convert microseconds_u to uint64_t.
 */
uint64_t us_u_to_u64(microseconds_u microseconds);

/**
 * Convert microseconds_u to uint8_t.
 */
uint8_t us_u_to_u8(microseconds_u microseconds);

/**
 * Convert microseconds_u to unsigned int.
 */
unsigned int us_u_to_u(microseconds_u microseconds);

/**
 * Convert milliseconds_d to double.
 */
double ms_d_to_d(milliseconds_d milliseconds);

/**
 * Convert milliseconds_d to float.
 */
float ms_d_to_f(milliseconds_d milliseconds);

/**
 * Convert milliseconds_d to int.
 */
int ms_d_to_i(milliseconds_d milliseconds);

/**
 * Convert milliseconds_d to int16_t.
 */
int16_t ms_d_to_i16(milliseconds_d milliseconds);

/**
 * Convert milliseconds_d to int32_t.
 */
int32_t ms_d_to_i32(milliseconds_d milliseconds);

/**
 * Convert milliseconds_d to int64_t.
 */
int64_t ms_d_to_i64(milliseconds_d milliseconds);

/**
 * Convert milliseconds_d to int8_t.
 */
int8_t ms_d_to_i8(milliseconds_d milliseconds);

/**
 * Convert milliseconds_d to microseconds_d.
 */
microseconds_d ms_d_to_us_d(milliseconds_d milliseconds);

/**
 * Convert milliseconds_d to microseconds_f.
 */
microseconds_f ms_d_to_us_f(milliseconds_d milliseconds);

/**
 * Convert milliseconds_d to microseconds_t.
 */
microseconds_t ms_d_to_us_t(milliseconds_d milliseconds);

/**
 * Convert milliseconds_d to microseconds_u.
 */
microseconds_u ms_d_to_us_u(milliseconds_d milliseconds);

/**
 * Convert milliseconds_d to milliseconds_f.
 */
milliseconds_f ms_d_to_ms_f(milliseconds_d milliseconds);

/**
 * Convert milliseconds_d to milliseconds_t.
 */
milliseconds_t ms_d_to_ms_t(milliseconds_d milliseconds);

/**
 * Convert milliseconds_d to milliseconds_u.
 */
milliseconds_u ms_d_to_ms_u(milliseconds_d milliseconds);

/**
 * Convert milliseconds_d to seconds_d.
 */
seconds_d ms_d_to_s_d(milliseconds_d milliseconds);

/**
 * Convert milliseconds_d to seconds_f.
 */
seconds_f ms_d_to_s_f(milliseconds_d milliseconds);

/**
 * Convert milliseconds_d to seconds_t.
 */
seconds_t ms_d_to_s_t(milliseconds_d milliseconds);

/**
 * Convert milliseconds_d to seconds_u.
 */
seconds_u ms_d_to_s_u(milliseconds_d milliseconds);

/**
 * Convert milliseconds_d to uint16_t.
 */
uint16_t ms_d_to_u16(milliseconds_d milliseconds);

/**
 * Convert milliseconds_d to uint32_t.
 */
uint32_t ms_d_to_u32(milliseconds_d milliseconds);

/**
 * Convert milliseconds_d to uint64_t.
 */
uint64_t ms_d_to_u64(milliseconds_d milliseconds);

/**
 * Convert milliseconds_d to uint8_t.
 */
uint8_t ms_d_to_u8(milliseconds_d milliseconds);

/**
 * Convert milliseconds_d to unsigned int.
 */
unsigned int ms_d_to_u(milliseconds_d milliseconds);

/**
 * Convert milliseconds_f to double.
 */
double ms_f_to_d(milliseconds_f milliseconds);

/**
 * Convert milliseconds_f to float.
 */
float ms_f_to_f(milliseconds_f milliseconds);

/**
 * Convert milliseconds_f to int.
 */
int ms_f_to_i(milliseconds_f milliseconds);

/**
 * Convert milliseconds_f to int16_t.
 */
int16_t ms_f_to_i16(milliseconds_f milliseconds);

/**
 * Convert milliseconds_f to int32_t.
 */
int32_t ms_f_to_i32(milliseconds_f milliseconds);

/**
 * Convert milliseconds_f to int64_t.
 */
int64_t ms_f_to_i64(milliseconds_f milliseconds);

/**
 * Convert milliseconds_f to int8_t.
 */
int8_t ms_f_to_i8(milliseconds_f milliseconds);

/**
 * Convert milliseconds_f to microseconds_d.
 */
microseconds_d ms_f_to_us_d(milliseconds_f milliseconds);

/**
 * Convert milliseconds_f to microseconds_f.
 */
microseconds_f ms_f_to_us_f(milliseconds_f milliseconds);

/**
 * Convert milliseconds_f to microseconds_t.
 */
microseconds_t ms_f_to_us_t(milliseconds_f milliseconds);

/**
 * Convert milliseconds_f to microseconds_u.
 */
microseconds_u ms_f_to_us_u(milliseconds_f milliseconds);

/**
 * Convert milliseconds_f to milliseconds_d.
 */
milliseconds_d ms_f_to_ms_d(milliseconds_f milliseconds);

/**
 * Convert milliseconds_f to milliseconds_t.
 */
milliseconds_t ms_f_to_ms_t(milliseconds_f milliseconds);

/**
 * Convert milliseconds_f to milliseconds_u.
 */
milliseconds_u ms_f_to_ms_u(milliseconds_f milliseconds);

/**
 * Convert milliseconds_f to seconds_d.
 */
seconds_d ms_f_to_s_d(milliseconds_f milliseconds);

/**
 * Convert milliseconds_f to seconds_f.
 */
seconds_f ms_f_to_s_f(milliseconds_f milliseconds);

/**
 * Convert milliseconds_f to seconds_t.
 */
seconds_t ms_f_to_s_t(milliseconds_f milliseconds);

/**
 * Convert milliseconds_f to seconds_u.
 */
seconds_u ms_f_to_s_u(milliseconds_f milliseconds);

/**
 * Convert milliseconds_f to uint16_t.
 */
uint16_t ms_f_to_u16(milliseconds_f milliseconds);

/**
 * Convert milliseconds_f to uint32_t.
 */
uint32_t ms_f_to_u32(milliseconds_f milliseconds);

/**
 * Convert milliseconds_f to uint64_t.
 */
uint64_t ms_f_to_u64(milliseconds_f milliseconds);

/**
 * Convert milliseconds_f to uint8_t.
 */
uint8_t ms_f_to_u8(milliseconds_f milliseconds);

/**
 * Convert milliseconds_f to unsigned int.
 */
unsigned int ms_f_to_u(milliseconds_f milliseconds);

/**
 * Convert milliseconds_t to double.
 */
double ms_t_to_d(milliseconds_t milliseconds);

/**
 * Convert milliseconds_t to float.
 */
float ms_t_to_f(milliseconds_t milliseconds);

/**
 * Convert milliseconds_t to int.
 */
int ms_t_to_i(milliseconds_t milliseconds);

/**
 * Convert milliseconds_t to int16_t.
 */
int16_t ms_t_to_i16(milliseconds_t milliseconds);

/**
 * Convert milliseconds_t to int32_t.
 */
int32_t ms_t_to_i32(milliseconds_t milliseconds);

/**
 * Convert milliseconds_t to int64_t.
 */
int64_t ms_t_to_i64(milliseconds_t milliseconds);

/**
 * Convert milliseconds_t to int8_t.
 */
int8_t ms_t_to_i8(milliseconds_t milliseconds);

/**
 * Convert milliseconds_t to microseconds_d.
 */
microseconds_d ms_t_to_us_d(milliseconds_t milliseconds);

/**
 * Convert milliseconds_t to microseconds_f.
 */
microseconds_f ms_t_to_us_f(milliseconds_t milliseconds);

/**
 * Convert milliseconds_t to microseconds_t.
 */
microseconds_t ms_t_to_us_t(milliseconds_t milliseconds);

/**
 * Convert milliseconds_t to microseconds_u.
 */
microseconds_u ms_t_to_us_u(milliseconds_t milliseconds);

/**
 * Convert milliseconds_t to milliseconds_d.
 */
milliseconds_d ms_t_to_ms_d(milliseconds_t milliseconds);

/**
 * Convert milliseconds_t to milliseconds_f.
 */
milliseconds_f ms_t_to_ms_f(milliseconds_t milliseconds);

/**
 * Convert milliseconds_t to milliseconds_u.
 */
milliseconds_u ms_t_to_ms_u(milliseconds_t milliseconds);

/**
 * Convert milliseconds_t to seconds_d.
 */
seconds_d ms_t_to_s_d(milliseconds_t milliseconds);

/**
 * Convert milliseconds_t to seconds_f.
 */
seconds_f ms_t_to_s_f(milliseconds_t milliseconds);

/**
 * Convert milliseconds_t to seconds_t.
 */
seconds_t ms_t_to_s_t(milliseconds_t milliseconds);

/**
 * Convert milliseconds_t to seconds_u.
 */
seconds_u ms_t_to_s_u(milliseconds_t milliseconds);

/**
 * Convert milliseconds_t to uint16_t.
 */
uint16_t ms_t_to_u16(milliseconds_t milliseconds);

/**
 * Convert milliseconds_t to uint32_t.
 */
uint32_t ms_t_to_u32(milliseconds_t milliseconds);

/**
 * Convert milliseconds_t to uint64_t.
 */
uint64_t ms_t_to_u64(milliseconds_t milliseconds);

/**
 * Convert milliseconds_t to uint8_t.
 */
uint8_t ms_t_to_u8(milliseconds_t milliseconds);

/**
 * Convert milliseconds_t to unsigned int.
 */
unsigned int ms_t_to_u(milliseconds_t milliseconds);

/**
 * Convert milliseconds_u to double.
 */
double ms_u_to_d(milliseconds_u milliseconds);

/**
 * Convert milliseconds_u to float.
 */
float ms_u_to_f(milliseconds_u milliseconds);

/**
 * Convert milliseconds_u to int.
 */
int ms_u_to_i(milliseconds_u milliseconds);

/**
 * Convert milliseconds_u to int16_t.
 */
int16_t ms_u_to_i16(milliseconds_u milliseconds);

/**
 * Convert milliseconds_u to int32_t.
 */
int32_t ms_u_to_i32(milliseconds_u milliseconds);

/**
 * Convert milliseconds_u to int64_t.
 */
int64_t ms_u_to_i64(milliseconds_u milliseconds);

/**
 * Convert milliseconds_u to int8_t.
 */
int8_t ms_u_to_i8(milliseconds_u milliseconds);

/**
 * Convert milliseconds_u to microseconds_d.
 */
microseconds_d ms_u_to_us_d(milliseconds_u milliseconds);

/**
 * Convert milliseconds_u to microseconds_f.
 */
microseconds_f ms_u_to_us_f(milliseconds_u milliseconds);

/**
 * Convert milliseconds_u to microseconds_t.
 */
microseconds_t ms_u_to_us_t(milliseconds_u milliseconds);

/**
 * Convert milliseconds_u to microseconds_u.
 */
microseconds_u ms_u_to_us_u(milliseconds_u milliseconds);

/**
 * Convert milliseconds_u to milliseconds_d.
 */
milliseconds_d ms_u_to_ms_d(milliseconds_u milliseconds);

/**
 * Convert milliseconds_u to milliseconds_f.
 */
milliseconds_f ms_u_to_ms_f(milliseconds_u milliseconds);

/**
 * Convert milliseconds_u to milliseconds_t.
 */
milliseconds_t ms_u_to_ms_t(milliseconds_u milliseconds);

/**
 * Convert milliseconds_u to seconds_d.
 */
seconds_d ms_u_to_s_d(milliseconds_u milliseconds);

/**
 * Convert milliseconds_u to seconds_f.
 */
seconds_f ms_u_to_s_f(milliseconds_u milliseconds);

/**
 * Convert milliseconds_u to seconds_t.
 */
seconds_t ms_u_to_s_t(milliseconds_u milliseconds);

/**
 * Convert milliseconds_u to seconds_u.
 */
seconds_u ms_u_to_s_u(milliseconds_u milliseconds);

/**
 * Convert milliseconds_u to uint16_t.
 */
uint16_t ms_u_to_u16(milliseconds_u milliseconds);

/**
 * Convert milliseconds_u to uint32_t.
 */
uint32_t ms_u_to_u32(milliseconds_u milliseconds);

/**
 * Convert milliseconds_u to uint64_t.
 */
uint64_t ms_u_to_u64(milliseconds_u milliseconds);

/**
 * Convert milliseconds_u to uint8_t.
 */
uint8_t ms_u_to_u8(milliseconds_u milliseconds);

/**
 * Convert milliseconds_u to unsigned int.
 */
unsigned int ms_u_to_u(milliseconds_u milliseconds);

/**
 * Convert seconds_d to double.
 */
double s_d_to_d(seconds_d seconds);

/**
 * Convert seconds_d to float.
 */
float s_d_to_f(seconds_d seconds);

/**
 * Convert seconds_d to int.
 */
int s_d_to_i(seconds_d seconds);

/**
 * Convert seconds_d to int16_t.
 */
int16_t s_d_to_i16(seconds_d seconds);

/**
 * Convert seconds_d to int32_t.
 */
int32_t s_d_to_i32(seconds_d seconds);

/**
 * Convert seconds_d to int64_t.
 */
int64_t s_d_to_i64(seconds_d seconds);

/**
 * Convert seconds_d to int8_t.
 */
int8_t s_d_to_i8(seconds_d seconds);

/**
 * Convert seconds_d to microseconds_d.
 */
microseconds_d s_d_to_us_d(seconds_d seconds);

/**
 * Convert seconds_d to microseconds_f.
 */
microseconds_f s_d_to_us_f(seconds_d seconds);

/**
 * Convert seconds_d to microseconds_t.
 */
microseconds_t s_d_to_us_t(seconds_d seconds);

/**
 * Convert seconds_d to microseconds_u.
 */
microseconds_u s_d_to_us_u(seconds_d seconds);

/**
 * Convert seconds_d to milliseconds_d.
 */
milliseconds_d s_d_to_ms_d(seconds_d seconds);

/**
 * Convert seconds_d to milliseconds_f.
 */
milliseconds_f s_d_to_ms_f(seconds_d seconds);

/**
 * Convert seconds_d to milliseconds_t.
 */
milliseconds_t s_d_to_ms_t(seconds_d seconds);

/**
 * Convert seconds_d to milliseconds_u.
 */
milliseconds_u s_d_to_ms_u(seconds_d seconds);

/**
 * Convert seconds_d to seconds_f.
 */
seconds_f s_d_to_s_f(seconds_d seconds);

/**
 * Convert seconds_d to seconds_t.
 */
seconds_t s_d_to_s_t(seconds_d seconds);

/**
 * Convert seconds_d to seconds_u.
 */
seconds_u s_d_to_s_u(seconds_d seconds);

/**
 * Convert seconds_d to uint16_t.
 */
uint16_t s_d_to_u16(seconds_d seconds);

/**
 * Convert seconds_d to uint32_t.
 */
uint32_t s_d_to_u32(seconds_d seconds);

/**
 * Convert seconds_d to uint64_t.
 */
uint64_t s_d_to_u64(seconds_d seconds);

/**
 * Convert seconds_d to uint8_t.
 */
uint8_t s_d_to_u8(seconds_d seconds);

/**
 * Convert seconds_d to unsigned int.
 */
unsigned int s_d_to_u(seconds_d seconds);

/**
 * Convert seconds_f to double.
 */
double s_f_to_d(seconds_f seconds);

/**
 * Convert seconds_f to float.
 */
float s_f_to_f(seconds_f seconds);

/**
 * Convert seconds_f to int.
 */
int s_f_to_i(seconds_f seconds);

/**
 * Convert seconds_f to int16_t.
 */
int16_t s_f_to_i16(seconds_f seconds);

/**
 * Convert seconds_f to int32_t.
 */
int32_t s_f_to_i32(seconds_f seconds);

/**
 * Convert seconds_f to int64_t.
 */
int64_t s_f_to_i64(seconds_f seconds);

/**
 * Convert seconds_f to int8_t.
 */
int8_t s_f_to_i8(seconds_f seconds);

/**
 * Convert seconds_f to microseconds_d.
 */
microseconds_d s_f_to_us_d(seconds_f seconds);

/**
 * Convert seconds_f to microseconds_f.
 */
microseconds_f s_f_to_us_f(seconds_f seconds);

/**
 * Convert seconds_f to microseconds_t.
 */
microseconds_t s_f_to_us_t(seconds_f seconds);

/**
 * Convert seconds_f to microseconds_u.
 */
microseconds_u s_f_to_us_u(seconds_f seconds);

/**
 * Convert seconds_f to milliseconds_d.
 */
milliseconds_d s_f_to_ms_d(seconds_f seconds);

/**
 * Convert seconds_f to milliseconds_f.
 */
milliseconds_f s_f_to_ms_f(seconds_f seconds);

/**
 * Convert seconds_f to milliseconds_t.
 */
milliseconds_t s_f_to_ms_t(seconds_f seconds);

/**
 * Convert seconds_f to milliseconds_u.
 */
milliseconds_u s_f_to_ms_u(seconds_f seconds);

/**
 * Convert seconds_f to seconds_d.
 */
seconds_d s_f_to_s_d(seconds_f seconds);

/**
 * Convert seconds_f to seconds_t.
 */
seconds_t s_f_to_s_t(seconds_f seconds);

/**
 * Convert seconds_f to seconds_u.
 */
seconds_u s_f_to_s_u(seconds_f seconds);

/**
 * Convert seconds_f to uint16_t.
 */
uint16_t s_f_to_u16(seconds_f seconds);

/**
 * Convert seconds_f to uint32_t.
 */
uint32_t s_f_to_u32(seconds_f seconds);

/**
 * Convert seconds_f to uint64_t.
 */
uint64_t s_f_to_u64(seconds_f seconds);

/**
 * Convert seconds_f to uint8_t.
 */
uint8_t s_f_to_u8(seconds_f seconds);

/**
 * Convert seconds_f to unsigned int.
 */
unsigned int s_f_to_u(seconds_f seconds);

/**
 * Convert seconds_t to double.
 */
double s_t_to_d(seconds_t seconds);

/**
 * Convert seconds_t to float.
 */
float s_t_to_f(seconds_t seconds);

/**
 * Convert seconds_t to int.
 */
int s_t_to_i(seconds_t seconds);

/**
 * Convert seconds_t to int16_t.
 */
int16_t s_t_to_i16(seconds_t seconds);

/**
 * Convert seconds_t to int32_t.
 */
int32_t s_t_to_i32(seconds_t seconds);

/**
 * Convert seconds_t to int64_t.
 */
int64_t s_t_to_i64(seconds_t seconds);

/**
 * Convert seconds_t to int8_t.
 */
int8_t s_t_to_i8(seconds_t seconds);

/**
 * Convert seconds_t to microseconds_d.
 */
microseconds_d s_t_to_us_d(seconds_t seconds);

/**
 * Convert seconds_t to microseconds_f.
 */
microseconds_f s_t_to_us_f(seconds_t seconds);

/**
 * Convert seconds_t to microseconds_t.
 */
microseconds_t s_t_to_us_t(seconds_t seconds);

/**
 * Convert seconds_t to microseconds_u.
 */
microseconds_u s_t_to_us_u(seconds_t seconds);

/**
 * Convert seconds_t to milliseconds_d.
 */
milliseconds_d s_t_to_ms_d(seconds_t seconds);

/**
 * Convert seconds_t to milliseconds_f.
 */
milliseconds_f s_t_to_ms_f(seconds_t seconds);

/**
 * Convert seconds_t to milliseconds_t.
 */
milliseconds_t s_t_to_ms_t(seconds_t seconds);

/**
 * Convert seconds_t to milliseconds_u.
 */
milliseconds_u s_t_to_ms_u(seconds_t seconds);

/**
 * Convert seconds_t to seconds_d.
 */
seconds_d s_t_to_s_d(seconds_t seconds);

/**
 * Convert seconds_t to seconds_f.
 */
seconds_f s_t_to_s_f(seconds_t seconds);

/**
 * Convert seconds_t to seconds_u.
 */
seconds_u s_t_to_s_u(seconds_t seconds);

/**
 * Convert seconds_t to uint16_t.
 */
uint16_t s_t_to_u16(seconds_t seconds);

/**
 * Convert seconds_t to uint32_t.
 */
uint32_t s_t_to_u32(seconds_t seconds);

/**
 * Convert seconds_t to uint64_t.
 */
uint64_t s_t_to_u64(seconds_t seconds);

/**
 * Convert seconds_t to uint8_t.
 */
uint8_t s_t_to_u8(seconds_t seconds);

/**
 * Convert seconds_t to unsigned int.
 */
unsigned int s_t_to_u(seconds_t seconds);

/**
 * Convert seconds_u to double.
 */
double s_u_to_d(seconds_u seconds);

/**
 * Convert seconds_u to float.
 */
float s_u_to_f(seconds_u seconds);

/**
 * Convert seconds_u to int.
 */
int s_u_to_i(seconds_u seconds);

/**
 * Convert seconds_u to int16_t.
 */
int16_t s_u_to_i16(seconds_u seconds);

/**
 * Convert seconds_u to int32_t.
 */
int32_t s_u_to_i32(seconds_u seconds);

/**
 * Convert seconds_u to int64_t.
 */
int64_t s_u_to_i64(seconds_u seconds);

/**
 * Convert seconds_u to int8_t.
 */
int8_t s_u_to_i8(seconds_u seconds);

/**
 * Convert seconds_u to microseconds_d.
 */
microseconds_d s_u_to_us_d(seconds_u seconds);

/**
 * Convert seconds_u to microseconds_f.
 */
microseconds_f s_u_to_us_f(seconds_u seconds);

/**
 * Convert seconds_u to microseconds_t.
 */
microseconds_t s_u_to_us_t(seconds_u seconds);

/**
 * Convert seconds_u to microseconds_u.
 */
microseconds_u s_u_to_us_u(seconds_u seconds);

/**
 * Convert seconds_u to milliseconds_d.
 */
milliseconds_d s_u_to_ms_d(seconds_u seconds);

/**
 * Convert seconds_u to milliseconds_f.
 */
milliseconds_f s_u_to_ms_f(seconds_u seconds);

/**
 * Convert seconds_u to milliseconds_t.
 */
milliseconds_t s_u_to_ms_t(seconds_u seconds);

/**
 * Convert seconds_u to milliseconds_u.
 */
milliseconds_u s_u_to_ms_u(seconds_u seconds);

/**
 * Convert seconds_u to seconds_d.
 */
seconds_d s_u_to_s_d(seconds_u seconds);

/**
 * Convert seconds_u to seconds_f.
 */
seconds_f s_u_to_s_f(seconds_u seconds);

/**
 * Convert seconds_u to seconds_t.
 */
seconds_t s_u_to_s_t(seconds_u seconds);

/**
 * Convert seconds_u to uint16_t.
 */
uint16_t s_u_to_u16(seconds_u seconds);

/**
 * Convert seconds_u to uint32_t.
 */
uint32_t s_u_to_u32(seconds_u seconds);

/**
 * Convert seconds_u to uint64_t.
 */
uint64_t s_u_to_u64(seconds_u seconds);

/**
 * Convert seconds_u to uint8_t.
 */
uint8_t s_u_to_u8(seconds_u seconds);

/**
 * Convert seconds_u to unsigned int.
 */
unsigned int s_u_to_u(seconds_u seconds);

/**
 * Convert uint16_t to microseconds_d.
 */
microseconds_d u16_to_us_d(uint16_t microseconds);

/**
 * Convert uint16_t to microseconds_f.
 */
microseconds_f u16_to_us_f(uint16_t microseconds);

/**
 * Convert uint16_t to microseconds_t.
 */
microseconds_t u16_to_us_t(uint16_t microseconds);

/**
 * Convert uint16_t to microseconds_u.
 */
microseconds_u u16_to_us_u(uint16_t microseconds);

/**
 * Convert uint16_t to milliseconds_d.
 */
milliseconds_d u16_to_ms_d(uint16_t milliseconds);

/**
 * Convert uint16_t to milliseconds_f.
 */
milliseconds_f u16_to_ms_f(uint16_t milliseconds);

/**
 * Convert uint16_t to milliseconds_t.
 */
milliseconds_t u16_to_ms_t(uint16_t milliseconds);

/**
 * Convert uint16_t to milliseconds_u.
 */
milliseconds_u u16_to_ms_u(uint16_t milliseconds);

/**
 * Convert uint16_t to seconds_d.
 */
seconds_d u16_to_s_d(uint16_t seconds);

/**
 * Convert uint16_t to seconds_f.
 */
seconds_f u16_to_s_f(uint16_t seconds);

/**
 * Convert uint16_t to seconds_t.
 */
seconds_t u16_to_s_t(uint16_t seconds);

/**
 * Convert uint16_t to seconds_u.
 */
seconds_u u16_to_s_u(uint16_t seconds);

/**
 * Convert uint32_t to microseconds_d.
 */
microseconds_d u32_to_us_d(uint32_t microseconds);

/**
 * Convert uint32_t to microseconds_f.
 */
microseconds_f u32_to_us_f(uint32_t microseconds);

/**
 * Convert uint32_t to microseconds_t.
 */
microseconds_t u32_to_us_t(uint32_t microseconds);

/**
 * Convert uint32_t to microseconds_u.
 */
microseconds_u u32_to_us_u(uint32_t microseconds);

/**
 * Convert uint32_t to milliseconds_d.
 */
milliseconds_d u32_to_ms_d(uint32_t milliseconds);

/**
 * Convert uint32_t to milliseconds_f.
 */
milliseconds_f u32_to_ms_f(uint32_t milliseconds);

/**
 * Convert uint32_t to milliseconds_t.
 */
milliseconds_t u32_to_ms_t(uint32_t milliseconds);

/**
 * Convert uint32_t to milliseconds_u.
 */
milliseconds_u u32_to_ms_u(uint32_t milliseconds);

/**
 * Convert uint32_t to seconds_d.
 */
seconds_d u32_to_s_d(uint32_t seconds);

/**
 * Convert uint32_t to seconds_f.
 */
seconds_f u32_to_s_f(uint32_t seconds);

/**
 * Convert uint32_t to seconds_t.
 */
seconds_t u32_to_s_t(uint32_t seconds);

/**
 * Convert uint32_t to seconds_u.
 */
seconds_u u32_to_s_u(uint32_t seconds);

/**
 * Convert uint64_t to microseconds_d.
 */
microseconds_d u64_to_us_d(uint64_t microseconds);

/**
 * Convert uint64_t to microseconds_f.
 */
microseconds_f u64_to_us_f(uint64_t microseconds);

/**
 * Convert uint64_t to microseconds_t.
 */
microseconds_t u64_to_us_t(uint64_t microseconds);

/**
 * Convert uint64_t to microseconds_u.
 */
microseconds_u u64_to_us_u(uint64_t microseconds);

/**
 * Convert uint64_t to milliseconds_d.
 */
milliseconds_d u64_to_ms_d(uint64_t milliseconds);

/**
 * Convert uint64_t to milliseconds_f.
 */
milliseconds_f u64_to_ms_f(uint64_t milliseconds);

/**
 * Convert uint64_t to milliseconds_t.
 */
milliseconds_t u64_to_ms_t(uint64_t milliseconds);

/**
 * Convert uint64_t to milliseconds_u.
 */
milliseconds_u u64_to_ms_u(uint64_t milliseconds);

/**
 * Convert uint64_t to seconds_d.
 */
seconds_d u64_to_s_d(uint64_t seconds);

/**
 * Convert uint64_t to seconds_f.
 */
seconds_f u64_to_s_f(uint64_t seconds);

/**
 * Convert uint64_t to seconds_t.
 */
seconds_t u64_to_s_t(uint64_t seconds);

/**
 * Convert uint64_t to seconds_u.
 */
seconds_u u64_to_s_u(uint64_t seconds);

/**
 * Convert uint8_t to microseconds_d.
 */
microseconds_d u8_to_us_d(uint8_t microseconds);

/**
 * Convert uint8_t to microseconds_f.
 */
microseconds_f u8_to_us_f(uint8_t microseconds);

/**
 * Convert uint8_t to microseconds_t.
 */
microseconds_t u8_to_us_t(uint8_t microseconds);

/**
 * Convert uint8_t to microseconds_u.
 */
microseconds_u u8_to_us_u(uint8_t microseconds);

/**
 * Convert uint8_t to milliseconds_d.
 */
milliseconds_d u8_to_ms_d(uint8_t milliseconds);

/**
 * Convert uint8_t to milliseconds_f.
 */
milliseconds_f u8_to_ms_f(uint8_t milliseconds);

/**
 * Convert uint8_t to milliseconds_t.
 */
milliseconds_t u8_to_ms_t(uint8_t milliseconds);

/**
 * Convert uint8_t to milliseconds_u.
 */
milliseconds_u u8_to_ms_u(uint8_t milliseconds);

/**
 * Convert uint8_t to seconds_d.
 */
seconds_d u8_to_s_d(uint8_t seconds);

/**
 * Convert uint8_t to seconds_f.
 */
seconds_f u8_to_s_f(uint8_t seconds);

/**
 * Convert uint8_t to seconds_t.
 */
seconds_t u8_to_s_t(uint8_t seconds);

/**
 * Convert uint8_t to seconds_u.
 */
seconds_u u8_to_s_u(uint8_t seconds);

/**
 * Convert unsigned int to microseconds_d.
 */
microseconds_d u_to_us_d(unsigned int microseconds);

/**
 * Convert unsigned int to microseconds_f.
 */
microseconds_f u_to_us_f(unsigned int microseconds);

/**
 * Convert unsigned int to microseconds_t.
 */
microseconds_t u_to_us_t(unsigned int microseconds);

/**
 * Convert unsigned int to microseconds_u.
 */
microseconds_u u_to_us_u(unsigned int microseconds);

/**
 * Convert unsigned int to milliseconds_d.
 */
milliseconds_d u_to_ms_d(unsigned int milliseconds);

/**
 * Convert unsigned int to milliseconds_f.
 */
milliseconds_f u_to_ms_f(unsigned int milliseconds);

/**
 * Convert unsigned int to milliseconds_t.
 */
milliseconds_t u_to_ms_t(unsigned int milliseconds);

/**
 * Convert unsigned int to milliseconds_u.
 */
milliseconds_u u_to_ms_u(unsigned int milliseconds);

/**
 * Convert unsigned int to seconds_d.
 */
seconds_d u_to_s_d(unsigned int seconds);

/**
 * Convert unsigned int to seconds_f.
 */
seconds_f u_to_s_f(unsigned int seconds);

/**
 * Convert unsigned int to seconds_t.
 */
seconds_t u_to_s_t(unsigned int seconds);

/**
 * Convert unsigned int to seconds_u.
 */
seconds_u u_to_s_u(unsigned int seconds);

// Angle Conversion Functions

/**
 * Convert degrees_d to degrees_f.
 */
degrees_f deg_d_to_deg_f(degrees_d degrees);

/**
 * Convert degrees_d to degrees_t.
 */
degrees_t deg_d_to_deg_t(degrees_d degrees);

/**
 * Convert degrees_d to degrees_u.
 */
degrees_u deg_d_to_deg_u(degrees_d degrees);

/**
 * Convert degrees_d to double.
 */
double deg_d_to_d(degrees_d degrees);

/**
 * Convert degrees_d to float.
 */
float deg_d_to_f(degrees_d degrees);

/**
 * Convert degrees_d to int.
 */
int deg_d_to_i(degrees_d degrees);

/**
 * Convert degrees_d to int16_t.
 */
int16_t deg_d_to_i16(degrees_d degrees);

/**
 * Convert degrees_d to int32_t.
 */
int32_t deg_d_to_i32(degrees_d degrees);

/**
 * Convert degrees_d to int64_t.
 */
int64_t deg_d_to_i64(degrees_d degrees);

/**
 * Convert degrees_d to int8_t.
 */
int8_t deg_d_to_i8(degrees_d degrees);

/**
 * Convert degrees_d to radians_d.
 */
radians_d deg_d_to_rad_d(degrees_d degrees);

/**
 * Convert degrees_d to radians_f.
 */
radians_f deg_d_to_rad_f(degrees_d degrees);

/**
 * Convert degrees_d to radians_t.
 */
radians_t deg_d_to_rad_t(degrees_d degrees);

/**
 * Convert degrees_d to radians_u.
 */
radians_u deg_d_to_rad_u(degrees_d degrees);

/**
 * Convert degrees_d to uint16_t.
 */
uint16_t deg_d_to_u16(degrees_d degrees);

/**
 * Convert degrees_d to uint32_t.
 */
uint32_t deg_d_to_u32(degrees_d degrees);

/**
 * Convert degrees_d to uint64_t.
 */
uint64_t deg_d_to_u64(degrees_d degrees);

/**
 * Convert degrees_d to uint8_t.
 */
uint8_t deg_d_to_u8(degrees_d degrees);

/**
 * Convert degrees_d to unsigned int.
 */
unsigned int deg_d_to_u(degrees_d degrees);

/**
 * Convert degrees_f to degrees_d.
 */
degrees_d deg_f_to_deg_d(degrees_f degrees);

/**
 * Convert degrees_f to degrees_t.
 */
degrees_t deg_f_to_deg_t(degrees_f degrees);

/**
 * Convert degrees_f to degrees_u.
 */
degrees_u deg_f_to_deg_u(degrees_f degrees);

/**
 * Convert degrees_f to double.
 */
double deg_f_to_d(degrees_f degrees);

/**
 * Convert degrees_f to float.
 */
float deg_f_to_f(degrees_f degrees);

/**
 * Convert degrees_f to int.
 */
int deg_f_to_i(degrees_f degrees);

/**
 * Convert degrees_f to int16_t.
 */
int16_t deg_f_to_i16(degrees_f degrees);

/**
 * Convert degrees_f to int32_t.
 */
int32_t deg_f_to_i32(degrees_f degrees);

/**
 * Convert degrees_f to int64_t.
 */
int64_t deg_f_to_i64(degrees_f degrees);

/**
 * Convert degrees_f to int8_t.
 */
int8_t deg_f_to_i8(degrees_f degrees);

/**
 * Convert degrees_f to radians_d.
 */
radians_d deg_f_to_rad_d(degrees_f degrees);

/**
 * Convert degrees_f to radians_f.
 */
radians_f deg_f_to_rad_f(degrees_f degrees);

/**
 * Convert degrees_f to radians_t.
 */
radians_t deg_f_to_rad_t(degrees_f degrees);

/**
 * Convert degrees_f to radians_u.
 */
radians_u deg_f_to_rad_u(degrees_f degrees);

/**
 * Convert degrees_f to uint16_t.
 */
uint16_t deg_f_to_u16(degrees_f degrees);

/**
 * Convert degrees_f to uint32_t.
 */
uint32_t deg_f_to_u32(degrees_f degrees);

/**
 * Convert degrees_f to uint64_t.
 */
uint64_t deg_f_to_u64(degrees_f degrees);

/**
 * Convert degrees_f to uint8_t.
 */
uint8_t deg_f_to_u8(degrees_f degrees);

/**
 * Convert degrees_f to unsigned int.
 */
unsigned int deg_f_to_u(degrees_f degrees);

/**
 * Convert degrees_t to degrees_d.
 */
degrees_d deg_t_to_deg_d(degrees_t degrees);

/**
 * Convert degrees_t to degrees_f.
 */
degrees_f deg_t_to_deg_f(degrees_t degrees);

/**
 * Convert degrees_t to degrees_u.
 */
degrees_u deg_t_to_deg_u(degrees_t degrees);

/**
 * Convert degrees_t to double.
 */
double deg_t_to_d(degrees_t degrees);

/**
 * Convert degrees_t to float.
 */
float deg_t_to_f(degrees_t degrees);

/**
 * Convert degrees_t to int.
 */
int deg_t_to_i(degrees_t degrees);

/**
 * Convert degrees_t to int16_t.
 */
int16_t deg_t_to_i16(degrees_t degrees);

/**
 * Convert degrees_t to int32_t.
 */
int32_t deg_t_to_i32(degrees_t degrees);

/**
 * Convert degrees_t to int64_t.
 */
int64_t deg_t_to_i64(degrees_t degrees);

/**
 * Convert degrees_t to int8_t.
 */
int8_t deg_t_to_i8(degrees_t degrees);

/**
 * Convert degrees_t to radians_d.
 */
radians_d deg_t_to_rad_d(degrees_t degrees);

/**
 * Convert degrees_t to radians_f.
 */
radians_f deg_t_to_rad_f(degrees_t degrees);

/**
 * Convert degrees_t to radians_t.
 */
radians_t deg_t_to_rad_t(degrees_t degrees);

/**
 * Convert degrees_t to radians_u.
 */
radians_u deg_t_to_rad_u(degrees_t degrees);

/**
 * Convert degrees_t to uint16_t.
 */
uint16_t deg_t_to_u16(degrees_t degrees);

/**
 * Convert degrees_t to uint32_t.
 */
uint32_t deg_t_to_u32(degrees_t degrees);

/**
 * Convert degrees_t to uint64_t.
 */
uint64_t deg_t_to_u64(degrees_t degrees);

/**
 * Convert degrees_t to uint8_t.
 */
uint8_t deg_t_to_u8(degrees_t degrees);

/**
 * Convert degrees_t to unsigned int.
 */
unsigned int deg_t_to_u(degrees_t degrees);

/**
 * Convert degrees_u to degrees_d.
 */
degrees_d deg_u_to_deg_d(degrees_u degrees);

/**
 * Convert degrees_u to degrees_f.
 */
degrees_f deg_u_to_deg_f(degrees_u degrees);

/**
 * Convert degrees_u to degrees_t.
 */
degrees_t deg_u_to_deg_t(degrees_u degrees);

/**
 * Convert degrees_u to double.
 */
double deg_u_to_d(degrees_u degrees);

/**
 * Convert degrees_u to float.
 */
float deg_u_to_f(degrees_u degrees);

/**
 * Convert degrees_u to int.
 */
int deg_u_to_i(degrees_u degrees);

/**
 * Convert degrees_u to int16_t.
 */
int16_t deg_u_to_i16(degrees_u degrees);

/**
 * Convert degrees_u to int32_t.
 */
int32_t deg_u_to_i32(degrees_u degrees);

/**
 * Convert degrees_u to int64_t.
 */
int64_t deg_u_to_i64(degrees_u degrees);

/**
 * Convert degrees_u to int8_t.
 */
int8_t deg_u_to_i8(degrees_u degrees);

/**
 * Convert degrees_u to radians_d.
 */
radians_d deg_u_to_rad_d(degrees_u degrees);

/**
 * Convert degrees_u to radians_f.
 */
radians_f deg_u_to_rad_f(degrees_u degrees);

/**
 * Convert degrees_u to radians_t.
 */
radians_t deg_u_to_rad_t(degrees_u degrees);

/**
 * Convert degrees_u to radians_u.
 */
radians_u deg_u_to_rad_u(degrees_u degrees);

/**
 * Convert degrees_u to uint16_t.
 */
uint16_t deg_u_to_u16(degrees_u degrees);

/**
 * Convert degrees_u to uint32_t.
 */
uint32_t deg_u_to_u32(degrees_u degrees);

/**
 * Convert degrees_u to uint64_t.
 */
uint64_t deg_u_to_u64(degrees_u degrees);

/**
 * Convert degrees_u to uint8_t.
 */
uint8_t deg_u_to_u8(degrees_u degrees);

/**
 * Convert degrees_u to unsigned int.
 */
unsigned int deg_u_to_u(degrees_u degrees);

/**
 * Convert double to degrees_d.
 */
degrees_d d_to_deg_d(double degrees);

/**
 * Convert double to degrees_f.
 */
degrees_f d_to_deg_f(double degrees);

/**
 * Convert double to degrees_t.
 */
degrees_t d_to_deg_t(double degrees);

/**
 * Convert double to degrees_u.
 */
degrees_u d_to_deg_u(double degrees);

/**
 * Convert double to radians_d.
 */
radians_d d_to_rad_d(double radians);

/**
 * Convert double to radians_f.
 */
radians_f d_to_rad_f(double radians);

/**
 * Convert double to radians_t.
 */
radians_t d_to_rad_t(double radians);

/**
 * Convert double to radians_u.
 */
radians_u d_to_rad_u(double radians);

/**
 * Convert float to degrees_d.
 */
degrees_d f_to_deg_d(float degrees);

/**
 * Convert float to degrees_f.
 */
degrees_f f_to_deg_f(float degrees);

/**
 * Convert float to degrees_t.
 */
degrees_t f_to_deg_t(float degrees);

/**
 * Convert float to degrees_u.
 */
degrees_u f_to_deg_u(float degrees);

/**
 * Convert float to radians_d.
 */
radians_d f_to_rad_d(float radians);

/**
 * Convert float to radians_f.
 */
radians_f f_to_rad_f(float radians);

/**
 * Convert float to radians_t.
 */
radians_t f_to_rad_t(float radians);

/**
 * Convert float to radians_u.
 */
radians_u f_to_rad_u(float radians);

/**
 * Convert int16_t to degrees_d.
 */
degrees_d i16_to_deg_d(int16_t degrees);

/**
 * Convert int16_t to degrees_f.
 */
degrees_f i16_to_deg_f(int16_t degrees);

/**
 * Convert int16_t to degrees_t.
 */
degrees_t i16_to_deg_t(int16_t degrees);

/**
 * Convert int16_t to degrees_u.
 */
degrees_u i16_to_deg_u(int16_t degrees);

/**
 * Convert int16_t to radians_d.
 */
radians_d i16_to_rad_d(int16_t radians);

/**
 * Convert int16_t to radians_f.
 */
radians_f i16_to_rad_f(int16_t radians);

/**
 * Convert int16_t to radians_t.
 */
radians_t i16_to_rad_t(int16_t radians);

/**
 * Convert int16_t to radians_u.
 */
radians_u i16_to_rad_u(int16_t radians);

/**
 * Convert int32_t to degrees_d.
 */
degrees_d i32_to_deg_d(int32_t degrees);

/**
 * Convert int32_t to degrees_f.
 */
degrees_f i32_to_deg_f(int32_t degrees);

/**
 * Convert int32_t to degrees_t.
 */
degrees_t i32_to_deg_t(int32_t degrees);

/**
 * Convert int32_t to degrees_u.
 */
degrees_u i32_to_deg_u(int32_t degrees);

/**
 * Convert int32_t to radians_d.
 */
radians_d i32_to_rad_d(int32_t radians);

/**
 * Convert int32_t to radians_f.
 */
radians_f i32_to_rad_f(int32_t radians);

/**
 * Convert int32_t to radians_t.
 */
radians_t i32_to_rad_t(int32_t radians);

/**
 * Convert int32_t to radians_u.
 */
radians_u i32_to_rad_u(int32_t radians);

/**
 * Convert int64_t to degrees_d.
 */
degrees_d i64_to_deg_d(int64_t degrees);

/**
 * Convert int64_t to degrees_f.
 */
degrees_f i64_to_deg_f(int64_t degrees);

/**
 * Convert int64_t to degrees_t.
 */
degrees_t i64_to_deg_t(int64_t degrees);

/**
 * Convert int64_t to degrees_u.
 */
degrees_u i64_to_deg_u(int64_t degrees);

/**
 * Convert int64_t to radians_d.
 */
radians_d i64_to_rad_d(int64_t radians);

/**
 * Convert int64_t to radians_f.
 */
radians_f i64_to_rad_f(int64_t radians);

/**
 * Convert int64_t to radians_t.
 */
radians_t i64_to_rad_t(int64_t radians);

/**
 * Convert int64_t to radians_u.
 */
radians_u i64_to_rad_u(int64_t radians);

/**
 * Convert int8_t to degrees_d.
 */
degrees_d i8_to_deg_d(int8_t degrees);

/**
 * Convert int8_t to degrees_f.
 */
degrees_f i8_to_deg_f(int8_t degrees);

/**
 * Convert int8_t to degrees_t.
 */
degrees_t i8_to_deg_t(int8_t degrees);

/**
 * Convert int8_t to degrees_u.
 */
degrees_u i8_to_deg_u(int8_t degrees);

/**
 * Convert int8_t to radians_d.
 */
radians_d i8_to_rad_d(int8_t radians);

/**
 * Convert int8_t to radians_f.
 */
radians_f i8_to_rad_f(int8_t radians);

/**
 * Convert int8_t to radians_t.
 */
radians_t i8_to_rad_t(int8_t radians);

/**
 * Convert int8_t to radians_u.
 */
radians_u i8_to_rad_u(int8_t radians);

/**
 * Convert int to degrees_d.
 */
degrees_d i_to_deg_d(int degrees);

/**
 * Convert int to degrees_f.
 */
degrees_f i_to_deg_f(int degrees);

/**
 * Convert int to degrees_t.
 */
degrees_t i_to_deg_t(int degrees);

/**
 * Convert int to degrees_u.
 */
degrees_u i_to_deg_u(int degrees);

/**
 * Convert int to radians_d.
 */
radians_d i_to_rad_d(int radians);

/**
 * Convert int to radians_f.
 */
radians_f i_to_rad_f(int radians);

/**
 * Convert int to radians_t.
 */
radians_t i_to_rad_t(int radians);

/**
 * Convert int to radians_u.
 */
radians_u i_to_rad_u(int radians);

/**
 * Convert radians_d to degrees_d.
 */
degrees_d rad_d_to_deg_d(radians_d radians);

/**
 * Convert radians_d to degrees_f.
 */
degrees_f rad_d_to_deg_f(radians_d radians);

/**
 * Convert radians_d to degrees_t.
 */
degrees_t rad_d_to_deg_t(radians_d radians);

/**
 * Convert radians_d to degrees_u.
 */
degrees_u rad_d_to_deg_u(radians_d radians);

/**
 * Convert radians_d to double.
 */
double rad_d_to_d(radians_d radians);

/**
 * Convert radians_d to float.
 */
float rad_d_to_f(radians_d radians);

/**
 * Convert radians_d to int.
 */
int rad_d_to_i(radians_d radians);

/**
 * Convert radians_d to int16_t.
 */
int16_t rad_d_to_i16(radians_d radians);

/**
 * Convert radians_d to int32_t.
 */
int32_t rad_d_to_i32(radians_d radians);

/**
 * Convert radians_d to int64_t.
 */
int64_t rad_d_to_i64(radians_d radians);

/**
 * Convert radians_d to int8_t.
 */
int8_t rad_d_to_i8(radians_d radians);

/**
 * Convert radians_d to radians_f.
 */
radians_f rad_d_to_rad_f(radians_d radians);

/**
 * Convert radians_d to radians_t.
 */
radians_t rad_d_to_rad_t(radians_d radians);

/**
 * Convert radians_d to radians_u.
 */
radians_u rad_d_to_rad_u(radians_d radians);

/**
 * Convert radians_d to uint16_t.
 */
uint16_t rad_d_to_u16(radians_d radians);

/**
 * Convert radians_d to uint32_t.
 */
uint32_t rad_d_to_u32(radians_d radians);

/**
 * Convert radians_d to uint64_t.
 */
uint64_t rad_d_to_u64(radians_d radians);

/**
 * Convert radians_d to uint8_t.
 */
uint8_t rad_d_to_u8(radians_d radians);

/**
 * Convert radians_d to unsigned int.
 */
unsigned int rad_d_to_u(radians_d radians);

/**
 * Convert radians_f to degrees_d.
 */
degrees_d rad_f_to_deg_d(radians_f radians);

/**
 * Convert radians_f to degrees_f.
 */
degrees_f rad_f_to_deg_f(radians_f radians);

/**
 * Convert radians_f to degrees_t.
 */
degrees_t rad_f_to_deg_t(radians_f radians);

/**
 * Convert radians_f to degrees_u.
 */
degrees_u rad_f_to_deg_u(radians_f radians);

/**
 * Convert radians_f to double.
 */
double rad_f_to_d(radians_f radians);

/**
 * Convert radians_f to float.
 */
float rad_f_to_f(radians_f radians);

/**
 * Convert radians_f to int.
 */
int rad_f_to_i(radians_f radians);

/**
 * Convert radians_f to int16_t.
 */
int16_t rad_f_to_i16(radians_f radians);

/**
 * Convert radians_f to int32_t.
 */
int32_t rad_f_to_i32(radians_f radians);

/**
 * Convert radians_f to int64_t.
 */
int64_t rad_f_to_i64(radians_f radians);

/**
 * Convert radians_f to int8_t.
 */
int8_t rad_f_to_i8(radians_f radians);

/**
 * Convert radians_f to radians_d.
 */
radians_d rad_f_to_rad_d(radians_f radians);

/**
 * Convert radians_f to radians_t.
 */
radians_t rad_f_to_rad_t(radians_f radians);

/**
 * Convert radians_f to radians_u.
 */
radians_u rad_f_to_rad_u(radians_f radians);

/**
 * Convert radians_f to uint16_t.
 */
uint16_t rad_f_to_u16(radians_f radians);

/**
 * Convert radians_f to uint32_t.
 */
uint32_t rad_f_to_u32(radians_f radians);

/**
 * Convert radians_f to uint64_t.
 */
uint64_t rad_f_to_u64(radians_f radians);

/**
 * Convert radians_f to uint8_t.
 */
uint8_t rad_f_to_u8(radians_f radians);

/**
 * Convert radians_f to unsigned int.
 */
unsigned int rad_f_to_u(radians_f radians);

/**
 * Convert radians_t to degrees_d.
 */
degrees_d rad_t_to_deg_d(radians_t radians);

/**
 * Convert radians_t to degrees_f.
 */
degrees_f rad_t_to_deg_f(radians_t radians);

/**
 * Convert radians_t to degrees_t.
 */
degrees_t rad_t_to_deg_t(radians_t radians);

/**
 * Convert radians_t to degrees_u.
 */
degrees_u rad_t_to_deg_u(radians_t radians);

/**
 * Convert radians_t to double.
 */
double rad_t_to_d(radians_t radians);

/**
 * Convert radians_t to float.
 */
float rad_t_to_f(radians_t radians);

/**
 * Convert radians_t to int.
 */
int rad_t_to_i(radians_t radians);

/**
 * Convert radians_t to int16_t.
 */
int16_t rad_t_to_i16(radians_t radians);

/**
 * Convert radians_t to int32_t.
 */
int32_t rad_t_to_i32(radians_t radians);

/**
 * Convert radians_t to int64_t.
 */
int64_t rad_t_to_i64(radians_t radians);

/**
 * Convert radians_t to int8_t.
 */
int8_t rad_t_to_i8(radians_t radians);

/**
 * Convert radians_t to radians_d.
 */
radians_d rad_t_to_rad_d(radians_t radians);

/**
 * Convert radians_t to radians_f.
 */
radians_f rad_t_to_rad_f(radians_t radians);

/**
 * Convert radians_t to radians_u.
 */
radians_u rad_t_to_rad_u(radians_t radians);

/**
 * Convert radians_t to uint16_t.
 */
uint16_t rad_t_to_u16(radians_t radians);

/**
 * Convert radians_t to uint32_t.
 */
uint32_t rad_t_to_u32(radians_t radians);

/**
 * Convert radians_t to uint64_t.
 */
uint64_t rad_t_to_u64(radians_t radians);

/**
 * Convert radians_t to uint8_t.
 */
uint8_t rad_t_to_u8(radians_t radians);

/**
 * Convert radians_t to unsigned int.
 */
unsigned int rad_t_to_u(radians_t radians);

/**
 * Convert radians_u to degrees_d.
 */
degrees_d rad_u_to_deg_d(radians_u radians);

/**
 * Convert radians_u to degrees_f.
 */
degrees_f rad_u_to_deg_f(radians_u radians);

/**
 * Convert radians_u to degrees_t.
 */
degrees_t rad_u_to_deg_t(radians_u radians);

/**
 * Convert radians_u to degrees_u.
 */
degrees_u rad_u_to_deg_u(radians_u radians);

/**
 * Convert radians_u to double.
 */
double rad_u_to_d(radians_u radians);

/**
 * Convert radians_u to float.
 */
float rad_u_to_f(radians_u radians);

/**
 * Convert radians_u to int.
 */
int rad_u_to_i(radians_u radians);

/**
 * Convert radians_u to int16_t.
 */
int16_t rad_u_to_i16(radians_u radians);

/**
 * Convert radians_u to int32_t.
 */
int32_t rad_u_to_i32(radians_u radians);

/**
 * Convert radians_u to int64_t.
 */
int64_t rad_u_to_i64(radians_u radians);

/**
 * Convert radians_u to int8_t.
 */
int8_t rad_u_to_i8(radians_u radians);

/**
 * Convert radians_u to radians_d.
 */
radians_d rad_u_to_rad_d(radians_u radians);

/**
 * Convert radians_u to radians_f.
 */
radians_f rad_u_to_rad_f(radians_u radians);

/**
 * Convert radians_u to radians_t.
 */
radians_t rad_u_to_rad_t(radians_u radians);

/**
 * Convert radians_u to uint16_t.
 */
uint16_t rad_u_to_u16(radians_u radians);

/**
 * Convert radians_u to uint32_t.
 */
uint32_t rad_u_to_u32(radians_u radians);

/**
 * Convert radians_u to uint64_t.
 */
uint64_t rad_u_to_u64(radians_u radians);

/**
 * Convert radians_u to uint8_t.
 */
uint8_t rad_u_to_u8(radians_u radians);

/**
 * Convert radians_u to unsigned int.
 */
unsigned int rad_u_to_u(radians_u radians);

/**
 * Convert uint16_t to degrees_d.
 */
degrees_d u16_to_deg_d(uint16_t degrees);

/**
 * Convert uint16_t to degrees_f.
 */
degrees_f u16_to_deg_f(uint16_t degrees);

/**
 * Convert uint16_t to degrees_t.
 */
degrees_t u16_to_deg_t(uint16_t degrees);

/**
 * Convert uint16_t to degrees_u.
 */
degrees_u u16_to_deg_u(uint16_t degrees);

/**
 * Convert uint16_t to radians_d.
 */
radians_d u16_to_rad_d(uint16_t radians);

/**
 * Convert uint16_t to radians_f.
 */
radians_f u16_to_rad_f(uint16_t radians);

/**
 * Convert uint16_t to radians_t.
 */
radians_t u16_to_rad_t(uint16_t radians);

/**
 * Convert uint16_t to radians_u.
 */
radians_u u16_to_rad_u(uint16_t radians);

/**
 * Convert uint32_t to degrees_d.
 */
degrees_d u32_to_deg_d(uint32_t degrees);

/**
 * Convert uint32_t to degrees_f.
 */
degrees_f u32_to_deg_f(uint32_t degrees);

/**
 * Convert uint32_t to degrees_t.
 */
degrees_t u32_to_deg_t(uint32_t degrees);

/**
 * Convert uint32_t to degrees_u.
 */
degrees_u u32_to_deg_u(uint32_t degrees);

/**
 * Convert uint32_t to radians_d.
 */
radians_d u32_to_rad_d(uint32_t radians);

/**
 * Convert uint32_t to radians_f.
 */
radians_f u32_to_rad_f(uint32_t radians);

/**
 * Convert uint32_t to radians_t.
 */
radians_t u32_to_rad_t(uint32_t radians);

/**
 * Convert uint32_t to radians_u.
 */
radians_u u32_to_rad_u(uint32_t radians);

/**
 * Convert uint64_t to degrees_d.
 */
degrees_d u64_to_deg_d(uint64_t degrees);

/**
 * Convert uint64_t to degrees_f.
 */
degrees_f u64_to_deg_f(uint64_t degrees);

/**
 * Convert uint64_t to degrees_t.
 */
degrees_t u64_to_deg_t(uint64_t degrees);

/**
 * Convert uint64_t to degrees_u.
 */
degrees_u u64_to_deg_u(uint64_t degrees);

/**
 * Convert uint64_t to radians_d.
 */
radians_d u64_to_rad_d(uint64_t radians);

/**
 * Convert uint64_t to radians_f.
 */
radians_f u64_to_rad_f(uint64_t radians);

/**
 * Convert uint64_t to radians_t.
 */
radians_t u64_to_rad_t(uint64_t radians);

/**
 * Convert uint64_t to radians_u.
 */
radians_u u64_to_rad_u(uint64_t radians);

/**
 * Convert uint8_t to degrees_d.
 */
degrees_d u8_to_deg_d(uint8_t degrees);

/**
 * Convert uint8_t to degrees_f.
 */
degrees_f u8_to_deg_f(uint8_t degrees);

/**
 * Convert uint8_t to degrees_t.
 */
degrees_t u8_to_deg_t(uint8_t degrees);

/**
 * Convert uint8_t to degrees_u.
 */
degrees_u u8_to_deg_u(uint8_t degrees);

/**
 * Convert uint8_t to radians_d.
 */
radians_d u8_to_rad_d(uint8_t radians);

/**
 * Convert uint8_t to radians_f.
 */
radians_f u8_to_rad_f(uint8_t radians);

/**
 * Convert uint8_t to radians_t.
 */
radians_t u8_to_rad_t(uint8_t radians);

/**
 * Convert uint8_t to radians_u.
 */
radians_u u8_to_rad_u(uint8_t radians);

/**
 * Convert unsigned int to degrees_d.
 */
degrees_d u_to_deg_d(unsigned int degrees);

/**
 * Convert unsigned int to degrees_f.
 */
degrees_f u_to_deg_f(unsigned int degrees);

/**
 * Convert unsigned int to degrees_t.
 */
degrees_t u_to_deg_t(unsigned int degrees);

/**
 * Convert unsigned int to degrees_u.
 */
degrees_u u_to_deg_u(unsigned int degrees);

/**
 * Convert unsigned int to radians_d.
 */
radians_d u_to_rad_d(unsigned int radians);

/**
 * Convert unsigned int to radians_f.
 */
radians_f u_to_rad_f(unsigned int radians);

/**
 * Convert unsigned int to radians_t.
 */
radians_t u_to_rad_t(unsigned int radians);

/**
 * Convert unsigned int to radians_u.
 */
radians_u u_to_rad_u(unsigned int radians);

// Image Conversion Functions

/**
 * Convert double to pixels_d.
 */
pixels_d d_to_px_d(double pixels);

/**
 * Convert double to pixels_f.
 */
pixels_f d_to_px_f(double pixels);

/**
 * Convert double to pixels_t.
 */
pixels_t d_to_px_t(double pixels);

/**
 * Convert double to pixels_u.
 */
pixels_u d_to_px_u(double pixels);

/**
 * Convert float to pixels_d.
 */
pixels_d f_to_px_d(float pixels);

/**
 * Convert float to pixels_f.
 */
pixels_f f_to_px_f(float pixels);

/**
 * Convert float to pixels_t.
 */
pixels_t f_to_px_t(float pixels);

/**
 * Convert float to pixels_u.
 */
pixels_u f_to_px_u(float pixels);

/**
 * Convert int16_t to pixels_d.
 */
pixels_d i16_to_px_d(int16_t pixels);

/**
 * Convert int16_t to pixels_f.
 */
pixels_f i16_to_px_f(int16_t pixels);

/**
 * Convert int16_t to pixels_t.
 */
pixels_t i16_to_px_t(int16_t pixels);

/**
 * Convert int16_t to pixels_u.
 */
pixels_u i16_to_px_u(int16_t pixels);

/**
 * Convert int32_t to pixels_d.
 */
pixels_d i32_to_px_d(int32_t pixels);

/**
 * Convert int32_t to pixels_f.
 */
pixels_f i32_to_px_f(int32_t pixels);

/**
 * Convert int32_t to pixels_t.
 */
pixels_t i32_to_px_t(int32_t pixels);

/**
 * Convert int32_t to pixels_u.
 */
pixels_u i32_to_px_u(int32_t pixels);

/**
 * Convert int64_t to pixels_d.
 */
pixels_d i64_to_px_d(int64_t pixels);

/**
 * Convert int64_t to pixels_f.
 */
pixels_f i64_to_px_f(int64_t pixels);

/**
 * Convert int64_t to pixels_t.
 */
pixels_t i64_to_px_t(int64_t pixels);

/**
 * Convert int64_t to pixels_u.
 */
pixels_u i64_to_px_u(int64_t pixels);

/**
 * Convert int8_t to pixels_d.
 */
pixels_d i8_to_px_d(int8_t pixels);

/**
 * Convert int8_t to pixels_f.
 */
pixels_f i8_to_px_f(int8_t pixels);

/**
 * Convert int8_t to pixels_t.
 */
pixels_t i8_to_px_t(int8_t pixels);

/**
 * Convert int8_t to pixels_u.
 */
pixels_u i8_to_px_u(int8_t pixels);

/**
 * Convert int to pixels_d.
 */
pixels_d i_to_px_d(int pixels);

/**
 * Convert int to pixels_f.
 */
pixels_f i_to_px_f(int pixels);

/**
 * Convert int to pixels_t.
 */
pixels_t i_to_px_t(int pixels);

/**
 * Convert int to pixels_u.
 */
pixels_u i_to_px_u(int pixels);

/**
 * Convert pixels_d to double.
 */
double px_d_to_d(pixels_d pixels);

/**
 * Convert pixels_d to float.
 */
float px_d_to_f(pixels_d pixels);

/**
 * Convert pixels_d to int.
 */
int px_d_to_i(pixels_d pixels);

/**
 * Convert pixels_d to int16_t.
 */
int16_t px_d_to_i16(pixels_d pixels);

/**
 * Convert pixels_d to int32_t.
 */
int32_t px_d_to_i32(pixels_d pixels);

/**
 * Convert pixels_d to int64_t.
 */
int64_t px_d_to_i64(pixels_d pixels);

/**
 * Convert pixels_d to int8_t.
 */
int8_t px_d_to_i8(pixels_d pixels);

/**
 * Convert pixels_d to pixels_f.
 */
pixels_f px_d_to_px_f(pixels_d pixels);

/**
 * Convert pixels_d to pixels_t.
 */
pixels_t px_d_to_px_t(pixels_d pixels);

/**
 * Convert pixels_d to pixels_u.
 */
pixels_u px_d_to_px_u(pixels_d pixels);

/**
 * Convert pixels_d to uint16_t.
 */
uint16_t px_d_to_u16(pixels_d pixels);

/**
 * Convert pixels_d to uint32_t.
 */
uint32_t px_d_to_u32(pixels_d pixels);

/**
 * Convert pixels_d to uint64_t.
 */
uint64_t px_d_to_u64(pixels_d pixels);

/**
 * Convert pixels_d to uint8_t.
 */
uint8_t px_d_to_u8(pixels_d pixels);

/**
 * Convert pixels_d to unsigned int.
 */
unsigned int px_d_to_u(pixels_d pixels);

/**
 * Convert pixels_f to double.
 */
double px_f_to_d(pixels_f pixels);

/**
 * Convert pixels_f to float.
 */
float px_f_to_f(pixels_f pixels);

/**
 * Convert pixels_f to int.
 */
int px_f_to_i(pixels_f pixels);

/**
 * Convert pixels_f to int16_t.
 */
int16_t px_f_to_i16(pixels_f pixels);

/**
 * Convert pixels_f to int32_t.
 */
int32_t px_f_to_i32(pixels_f pixels);

/**
 * Convert pixels_f to int64_t.
 */
int64_t px_f_to_i64(pixels_f pixels);

/**
 * Convert pixels_f to int8_t.
 */
int8_t px_f_to_i8(pixels_f pixels);

/**
 * Convert pixels_f to pixels_d.
 */
pixels_d px_f_to_px_d(pixels_f pixels);

/**
 * Convert pixels_f to pixels_t.
 */
pixels_t px_f_to_px_t(pixels_f pixels);

/**
 * Convert pixels_f to pixels_u.
 */
pixels_u px_f_to_px_u(pixels_f pixels);

/**
 * Convert pixels_f to uint16_t.
 */
uint16_t px_f_to_u16(pixels_f pixels);

/**
 * Convert pixels_f to uint32_t.
 */
uint32_t px_f_to_u32(pixels_f pixels);

/**
 * Convert pixels_f to uint64_t.
 */
uint64_t px_f_to_u64(pixels_f pixels);

/**
 * Convert pixels_f to uint8_t.
 */
uint8_t px_f_to_u8(pixels_f pixels);

/**
 * Convert pixels_f to unsigned int.
 */
unsigned int px_f_to_u(pixels_f pixels);

/**
 * Convert pixels_t to double.
 */
double px_t_to_d(pixels_t pixels);

/**
 * Convert pixels_t to float.
 */
float px_t_to_f(pixels_t pixels);

/**
 * Convert pixels_t to int.
 */
int px_t_to_i(pixels_t pixels);

/**
 * Convert pixels_t to int16_t.
 */
int16_t px_t_to_i16(pixels_t pixels);

/**
 * Convert pixels_t to int32_t.
 */
int32_t px_t_to_i32(pixels_t pixels);

/**
 * Convert pixels_t to int64_t.
 */
int64_t px_t_to_i64(pixels_t pixels);

/**
 * Convert pixels_t to int8_t.
 */
int8_t px_t_to_i8(pixels_t pixels);

/**
 * Convert pixels_t to pixels_d.
 */
pixels_d px_t_to_px_d(pixels_t pixels);

/**
 * Convert pixels_t to pixels_f.
 */
pixels_f px_t_to_px_f(pixels_t pixels);

/**
 * Convert pixels_t to pixels_u.
 */
pixels_u px_t_to_px_u(pixels_t pixels);

/**
 * Convert pixels_t to uint16_t.
 */
uint16_t px_t_to_u16(pixels_t pixels);

/**
 * Convert pixels_t to uint32_t.
 */
uint32_t px_t_to_u32(pixels_t pixels);

/**
 * Convert pixels_t to uint64_t.
 */
uint64_t px_t_to_u64(pixels_t pixels);

/**
 * Convert pixels_t to uint8_t.
 */
uint8_t px_t_to_u8(pixels_t pixels);

/**
 * Convert pixels_t to unsigned int.
 */
unsigned int px_t_to_u(pixels_t pixels);

/**
 * Convert pixels_u to double.
 */
double px_u_to_d(pixels_u pixels);

/**
 * Convert pixels_u to float.
 */
float px_u_to_f(pixels_u pixels);

/**
 * Convert pixels_u to int.
 */
int px_u_to_i(pixels_u pixels);

/**
 * Convert pixels_u to int16_t.
 */
int16_t px_u_to_i16(pixels_u pixels);

/**
 * Convert pixels_u to int32_t.
 */
int32_t px_u_to_i32(pixels_u pixels);

/**
 * Convert pixels_u to int64_t.
 */
int64_t px_u_to_i64(pixels_u pixels);

/**
 * Convert pixels_u to int8_t.
 */
int8_t px_u_to_i8(pixels_u pixels);

/**
 * Convert pixels_u to pixels_d.
 */
pixels_d px_u_to_px_d(pixels_u pixels);

/**
 * Convert pixels_u to pixels_f.
 */
pixels_f px_u_to_px_f(pixels_u pixels);

/**
 * Convert pixels_u to pixels_t.
 */
pixels_t px_u_to_px_t(pixels_u pixels);

/**
 * Convert pixels_u to uint16_t.
 */
uint16_t px_u_to_u16(pixels_u pixels);

/**
 * Convert pixels_u to uint32_t.
 */
uint32_t px_u_to_u32(pixels_u pixels);

/**
 * Convert pixels_u to uint64_t.
 */
uint64_t px_u_to_u64(pixels_u pixels);

/**
 * Convert pixels_u to uint8_t.
 */
uint8_t px_u_to_u8(pixels_u pixels);

/**
 * Convert pixels_u to unsigned int.
 */
unsigned int px_u_to_u(pixels_u pixels);

/**
 * Convert uint16_t to pixels_d.
 */
pixels_d u16_to_px_d(uint16_t pixels);

/**
 * Convert uint16_t to pixels_f.
 */
pixels_f u16_to_px_f(uint16_t pixels);

/**
 * Convert uint16_t to pixels_t.
 */
pixels_t u16_to_px_t(uint16_t pixels);

/**
 * Convert uint16_t to pixels_u.
 */
pixels_u u16_to_px_u(uint16_t pixels);

/**
 * Convert uint32_t to pixels_d.
 */
pixels_d u32_to_px_d(uint32_t pixels);

/**
 * Convert uint32_t to pixels_f.
 */
pixels_f u32_to_px_f(uint32_t pixels);

/**
 * Convert uint32_t to pixels_t.
 */
pixels_t u32_to_px_t(uint32_t pixels);

/**
 * Convert uint32_t to pixels_u.
 */
pixels_u u32_to_px_u(uint32_t pixels);

/**
 * Convert uint64_t to pixels_d.
 */
pixels_d u64_to_px_d(uint64_t pixels);

/**
 * Convert uint64_t to pixels_f.
 */
pixels_f u64_to_px_f(uint64_t pixels);

/**
 * Convert uint64_t to pixels_t.
 */
pixels_t u64_to_px_t(uint64_t pixels);

/**
 * Convert uint64_t to pixels_u.
 */
pixels_u u64_to_px_u(uint64_t pixels);

/**
 * Convert uint8_t to pixels_d.
 */
pixels_d u8_to_px_d(uint8_t pixels);

/**
 * Convert uint8_t to pixels_f.
 */
pixels_f u8_to_px_f(uint8_t pixels);

/**
 * Convert uint8_t to pixels_t.
 */
pixels_t u8_to_px_t(uint8_t pixels);

/**
 * Convert uint8_t to pixels_u.
 */
pixels_u u8_to_px_u(uint8_t pixels);

/**
 * Convert unsigned int to pixels_d.
 */
pixels_d u_to_px_d(unsigned int pixels);

/**
 * Convert unsigned int to pixels_f.
 */
pixels_f u_to_px_f(unsigned int pixels);

/**
 * Convert unsigned int to pixels_t.
 */
pixels_t u_to_px_t(unsigned int pixels);

/**
 * Convert unsigned int to pixels_u.
 */
pixels_u u_to_px_u(unsigned int pixels);

// Percent Conversion Functions

/**
 * Convert double to percent_d.
 */
percent_d d_to_pct_d(double percent);

/**
 * Convert double to percent_f.
 */
percent_f d_to_pct_f(double percent);

/**
 * Convert double to percent_t.
 */
percent_t d_to_pct_t(double percent);

/**
 * Convert double to percent_u.
 */
percent_u d_to_pct_u(double percent);

/**
 * Convert float to percent_d.
 */
percent_d f_to_pct_d(float percent);

/**
 * Convert float to percent_f.
 */
percent_f f_to_pct_f(float percent);

/**
 * Convert float to percent_t.
 */
percent_t f_to_pct_t(float percent);

/**
 * Convert float to percent_u.
 */
percent_u f_to_pct_u(float percent);

/**
 * Convert int16_t to percent_d.
 */
percent_d i16_to_pct_d(int16_t percent);

/**
 * Convert int16_t to percent_f.
 */
percent_f i16_to_pct_f(int16_t percent);

/**
 * Convert int16_t to percent_t.
 */
percent_t i16_to_pct_t(int16_t percent);

/**
 * Convert int16_t to percent_u.
 */
percent_u i16_to_pct_u(int16_t percent);

/**
 * Convert int32_t to percent_d.
 */
percent_d i32_to_pct_d(int32_t percent);

/**
 * Convert int32_t to percent_f.
 */
percent_f i32_to_pct_f(int32_t percent);

/**
 * Convert int32_t to percent_t.
 */
percent_t i32_to_pct_t(int32_t percent);

/**
 * Convert int32_t to percent_u.
 */
percent_u i32_to_pct_u(int32_t percent);

/**
 * Convert int64_t to percent_d.
 */
percent_d i64_to_pct_d(int64_t percent);

/**
 * Convert int64_t to percent_f.
 */
percent_f i64_to_pct_f(int64_t percent);

/**
 * Convert int64_t to percent_t.
 */
percent_t i64_to_pct_t(int64_t percent);

/**
 * Convert int64_t to percent_u.
 */
percent_u i64_to_pct_u(int64_t percent);

/**
 * Convert int8_t to percent_d.
 */
percent_d i8_to_pct_d(int8_t percent);

/**
 * Convert int8_t to percent_f.
 */
percent_f i8_to_pct_f(int8_t percent);

/**
 * Convert int8_t to percent_t.
 */
percent_t i8_to_pct_t(int8_t percent);

/**
 * Convert int8_t to percent_u.
 */
percent_u i8_to_pct_u(int8_t percent);

/**
 * Convert int to percent_d.
 */
percent_d i_to_pct_d(int percent);

/**
 * Convert int to percent_f.
 */
percent_f i_to_pct_f(int percent);

/**
 * Convert int to percent_t.
 */
percent_t i_to_pct_t(int percent);

/**
 * Convert int to percent_u.
 */
percent_u i_to_pct_u(int percent);

/**
 * Convert percent_d to double.
 */
double pct_d_to_d(percent_d percent);

/**
 * Convert percent_d to float.
 */
float pct_d_to_f(percent_d percent);

/**
 * Convert percent_d to int.
 */
int pct_d_to_i(percent_d percent);

/**
 * Convert percent_d to int16_t.
 */
int16_t pct_d_to_i16(percent_d percent);

/**
 * Convert percent_d to int32_t.
 */
int32_t pct_d_to_i32(percent_d percent);

/**
 * Convert percent_d to int64_t.
 */
int64_t pct_d_to_i64(percent_d percent);

/**
 * Convert percent_d to int8_t.
 */
int8_t pct_d_to_i8(percent_d percent);

/**
 * Convert percent_d to percent_f.
 */
percent_f pct_d_to_pct_f(percent_d percent);

/**
 * Convert percent_d to percent_t.
 */
percent_t pct_d_to_pct_t(percent_d percent);

/**
 * Convert percent_d to percent_u.
 */
percent_u pct_d_to_pct_u(percent_d percent);

/**
 * Convert percent_d to uint16_t.
 */
uint16_t pct_d_to_u16(percent_d percent);

/**
 * Convert percent_d to uint32_t.
 */
uint32_t pct_d_to_u32(percent_d percent);

/**
 * Convert percent_d to uint64_t.
 */
uint64_t pct_d_to_u64(percent_d percent);

/**
 * Convert percent_d to uint8_t.
 */
uint8_t pct_d_to_u8(percent_d percent);

/**
 * Convert percent_d to unsigned int.
 */
unsigned int pct_d_to_u(percent_d percent);

/**
 * Convert percent_f to double.
 */
double pct_f_to_d(percent_f percent);

/**
 * Convert percent_f to float.
 */
float pct_f_to_f(percent_f percent);

/**
 * Convert percent_f to int.
 */
int pct_f_to_i(percent_f percent);

/**
 * Convert percent_f to int16_t.
 */
int16_t pct_f_to_i16(percent_f percent);

/**
 * Convert percent_f to int32_t.
 */
int32_t pct_f_to_i32(percent_f percent);

/**
 * Convert percent_f to int64_t.
 */
int64_t pct_f_to_i64(percent_f percent);

/**
 * Convert percent_f to int8_t.
 */
int8_t pct_f_to_i8(percent_f percent);

/**
 * Convert percent_f to percent_d.
 */
percent_d pct_f_to_pct_d(percent_f percent);

/**
 * Convert percent_f to percent_t.
 */
percent_t pct_f_to_pct_t(percent_f percent);

/**
 * Convert percent_f to percent_u.
 */
percent_u pct_f_to_pct_u(percent_f percent);

/**
 * Convert percent_f to uint16_t.
 */
uint16_t pct_f_to_u16(percent_f percent);

/**
 * Convert percent_f to uint32_t.
 */
uint32_t pct_f_to_u32(percent_f percent);

/**
 * Convert percent_f to uint64_t.
 */
uint64_t pct_f_to_u64(percent_f percent);

/**
 * Convert percent_f to uint8_t.
 */
uint8_t pct_f_to_u8(percent_f percent);

/**
 * Convert percent_f to unsigned int.
 */
unsigned int pct_f_to_u(percent_f percent);

/**
 * Convert percent_t to double.
 */
double pct_t_to_d(percent_t percent);

/**
 * Convert percent_t to float.
 */
float pct_t_to_f(percent_t percent);

/**
 * Convert percent_t to int.
 */
int pct_t_to_i(percent_t percent);

/**
 * Convert percent_t to int16_t.
 */
int16_t pct_t_to_i16(percent_t percent);

/**
 * Convert percent_t to int32_t.
 */
int32_t pct_t_to_i32(percent_t percent);

/**
 * Convert percent_t to int64_t.
 */
int64_t pct_t_to_i64(percent_t percent);

/**
 * Convert percent_t to int8_t.
 */
int8_t pct_t_to_i8(percent_t percent);

/**
 * Convert percent_t to percent_d.
 */
percent_d pct_t_to_pct_d(percent_t percent);

/**
 * Convert percent_t to percent_f.
 */
percent_f pct_t_to_pct_f(percent_t percent);

/**
 * Convert percent_t to percent_u.
 */
percent_u pct_t_to_pct_u(percent_t percent);

/**
 * Convert percent_t to uint16_t.
 */
uint16_t pct_t_to_u16(percent_t percent);

/**
 * Convert percent_t to uint32_t.
 */
uint32_t pct_t_to_u32(percent_t percent);

/**
 * Convert percent_t to uint64_t.
 */
uint64_t pct_t_to_u64(percent_t percent);

/**
 * Convert percent_t to uint8_t.
 */
uint8_t pct_t_to_u8(percent_t percent);

/**
 * Convert percent_t to unsigned int.
 */
unsigned int pct_t_to_u(percent_t percent);

/**
 * Convert percent_u to double.
 */
double pct_u_to_d(percent_u percent);

/**
 * Convert percent_u to float.
 */
float pct_u_to_f(percent_u percent);

/**
 * Convert percent_u to int.
 */
int pct_u_to_i(percent_u percent);

/**
 * Convert percent_u to int16_t.
 */
int16_t pct_u_to_i16(percent_u percent);

/**
 * Convert percent_u to int32_t.
 */
int32_t pct_u_to_i32(percent_u percent);

/**
 * Convert percent_u to int64_t.
 */
int64_t pct_u_to_i64(percent_u percent);

/**
 * Convert percent_u to int8_t.
 */
int8_t pct_u_to_i8(percent_u percent);

/**
 * Convert percent_u to percent_d.
 */
percent_d pct_u_to_pct_d(percent_u percent);

/**
 * Convert percent_u to percent_f.
 */
percent_f pct_u_to_pct_f(percent_u percent);

/**
 * Convert percent_u to percent_t.
 */
percent_t pct_u_to_pct_t(percent_u percent);

/**
 * Convert percent_u to uint16_t.
 */
uint16_t pct_u_to_u16(percent_u percent);

/**
 * Convert percent_u to uint32_t.
 */
uint32_t pct_u_to_u32(percent_u percent);

/**
 * Convert percent_u to uint64_t.
 */
uint64_t pct_u_to_u64(percent_u percent);

/**
 * Convert percent_u to uint8_t.
 */
uint8_t pct_u_to_u8(percent_u percent);

/**
 * Convert percent_u to unsigned int.
 */
unsigned int pct_u_to_u(percent_u percent);

/**
 * Convert uint16_t to percent_d.
 */
percent_d u16_to_pct_d(uint16_t percent);

/**
 * Convert uint16_t to percent_f.
 */
percent_f u16_to_pct_f(uint16_t percent);

/**
 * Convert uint16_t to percent_t.
 */
percent_t u16_to_pct_t(uint16_t percent);

/**
 * Convert uint16_t to percent_u.
 */
percent_u u16_to_pct_u(uint16_t percent);

/**
 * Convert uint32_t to percent_d.
 */
percent_d u32_to_pct_d(uint32_t percent);

/**
 * Convert uint32_t to percent_f.
 */
percent_f u32_to_pct_f(uint32_t percent);

/**
 * Convert uint32_t to percent_t.
 */
percent_t u32_to_pct_t(uint32_t percent);

/**
 * Convert uint32_t to percent_u.
 */
percent_u u32_to_pct_u(uint32_t percent);

/**
 * Convert uint64_t to percent_d.
 */
percent_d u64_to_pct_d(uint64_t percent);

/**
 * Convert uint64_t to percent_f.
 */
percent_f u64_to_pct_f(uint64_t percent);

/**
 * Convert uint64_t to percent_t.
 */
percent_t u64_to_pct_t(uint64_t percent);

/**
 * Convert uint64_t to percent_u.
 */
percent_u u64_to_pct_u(uint64_t percent);

/**
 * Convert uint8_t to percent_d.
 */
percent_d u8_to_pct_d(uint8_t percent);

/**
 * Convert uint8_t to percent_f.
 */
percent_f u8_to_pct_f(uint8_t percent);

/**
 * Convert uint8_t to percent_t.
 */
percent_t u8_to_pct_t(uint8_t percent);

/**
 * Convert uint8_t to percent_u.
 */
percent_u u8_to_pct_u(uint8_t percent);

/**
 * Convert unsigned int to percent_d.
 */
percent_d u_to_pct_d(unsigned int percent);

/**
 * Convert unsigned int to percent_f.
 */
percent_f u_to_pct_f(unsigned int percent);

/**
 * Convert unsigned int to percent_t.
 */
percent_t u_to_pct_t(unsigned int percent);

/**
 * Convert unsigned int to percent_u.
 */
percent_u u_to_pct_u(unsigned int percent);

#ifdef __cplusplus
}
#endif

#endif  /* GUUNITS_H */
