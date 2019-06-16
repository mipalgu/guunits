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
 * Convert centimetres_f to metres_d.
 */
metres_d cm_f_to_m_d(centimetres_f centimetres)
{
    return ((metres_d) (round(((double) (((centimetres_d) (centimetres)) / 100.0)))));
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
 * Convert centimetres_t to millimetres_u.
 */
millimetres_u cm_t_to_mm_u(centimetres_t centimetres)
{
    return ((millimetres_u) ((centimetres * 10) < 0 ? 0 : centimetres * 10));
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
 * Convert metres_f to centimetres_d.
 */
centimetres_d m_f_to_cm_d(metres_f metres)
{
    return ((centimetres_d) (metres * 100.0f));
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
 * Convert metres_t to centimetres_u.
 */
centimetres_u m_t_to_cm_u(metres_t metres)
{
    return ((centimetres_u) ((metres * 100) < 0 ? 0 : metres * 100));
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
 * Convert metres_t to millimetres_u.
 */
millimetres_u m_t_to_mm_u(metres_t metres)
{
    return ((millimetres_u) ((metres * 1000) < 0 ? 0 : metres * 1000));
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
 * Convert millimetres_f to centimetres_d.
 */
centimetres_d mm_f_to_cm_d(millimetres_f millimetres)
{
    return ((centimetres_d) (round(((double) (((millimetres_d) (millimetres)) / 10.0)))));
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
 * Convert millimetres_f to metres_d.
 */
metres_d mm_f_to_m_d(millimetres_f millimetres)
{
    return ((metres_d) (round(((double) (((millimetres_d) (millimetres)) / 1000.0)))));
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
 * Convert millimetres_t to centimetres_u.
 */
centimetres_u mm_t_to_cm_u(millimetres_t millimetres)
{
    return ((centimetres_u) (round(((double) (((millimetres_d) (millimetres)) / 10.0)))));
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

// Time Conversion Functions

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
 * Convert microseconds_t to seconds_u.
 */
seconds_u us_t_to_s_u(microseconds_t microseconds)
{
    return ((seconds_u) (round(((double) (((microseconds_d) (microseconds)) / 1000000.0)))));
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
 * Convert milliseconds_f to microseconds_d.
 */
microseconds_d ms_f_to_us_d(milliseconds_f milliseconds)
{
    return ((microseconds_d) (milliseconds * 1000.0f));
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
 * Convert milliseconds_t to seconds_u.
 */
seconds_u ms_t_to_s_u(milliseconds_t milliseconds)
{
    return ((seconds_u) (round(((double) (((milliseconds_d) (milliseconds)) / 1000.0)))));
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
 * Convert seconds_f to microseconds_d.
 */
microseconds_d s_f_to_us_d(seconds_f seconds)
{
    return ((microseconds_d) (seconds * 1000000.0f));
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
    return ((radians_t) (((double) degrees) * M_PI / 180.0));
}

/**
 * Convert degrees_d to radians_u.
 */
radians_u deg_d_to_rad_u(degrees_d degrees)
{
    return ((radians_u) (((double) degrees) * M_PI / 180.0));
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
 * Convert degrees_f to radians_d.
 */
radians_d deg_f_to_rad_d(degrees_f degrees)
{
    return ((radians_d) (((double) degrees) * M_PI / 180.0));
}

/**
 * Convert degrees_f to radians_t.
 */
radians_t deg_f_to_rad_t(degrees_f degrees)
{
    return ((radians_t) (((double) degrees) * M_PI / 180.0));
}

/**
 * Convert degrees_f to radians_u.
 */
radians_u deg_f_to_rad_u(degrees_f degrees)
{
    return ((radians_u) (((double) degrees) * M_PI / 180.0));
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
 * Convert degrees_t to radians_u.
 */
radians_u deg_t_to_rad_u(degrees_t degrees)
{
    return ((radians_u) (((double) degrees) * M_PI / 180.0));
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
    return ((degrees_t) (180.0 / M_PI * ((double) radians)));
}

/**
 * Convert radians_d to degrees_u.
 */
degrees_u rad_d_to_deg_u(radians_d radians)
{
    return ((degrees_u) (180.0 / M_PI * ((double) radians)));
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
 * Convert radians_f to degrees_d.
 */
degrees_d rad_f_to_deg_d(radians_f radians)
{
    return ((degrees_d) (180.0 / M_PI * ((double) radians)));
}

/**
 * Convert radians_f to degrees_t.
 */
degrees_t rad_f_to_deg_t(radians_f radians)
{
    return ((degrees_t) (180.0 / M_PI * ((double) radians)));
}

/**
 * Convert radians_f to degrees_u.
 */
degrees_u rad_f_to_deg_u(radians_f radians)
{
    return ((degrees_u) (180.0 / M_PI * ((double) radians)));
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
 * Convert radians_t to degrees_u.
 */
degrees_u rad_t_to_deg_u(radians_t radians)
{
    return ((degrees_u) (180.0 / M_PI * ((double) radians)));
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

