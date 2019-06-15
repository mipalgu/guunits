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
centimetres_f centimetres_d_to_centimetres_f(centimetres_d centimetres)
{
    return ((centimetres_f) (centimetres));
}

centimetres_t centimetres_d_to_centimetres_t(centimetres_d centimetres)
{
    return ((centimetres_t) (round(((double) (centimetres)))));
}

centimetres_u centimetres_d_to_centimetres_u(centimetres_d centimetres)
{
    return ((centimetres_u) (round(((double) (centimetres)))));
}

metres_f centimetres_d_to_metres_f(centimetres_d centimetres)
{
    return ((metres_f) (((centimetres_d) (round(((double) (centimetres))))) / 100.0));
}

metres_t centimetres_d_to_metres_t(centimetres_d centimetres)
{
    return ((metres_t) (round(((double) (((centimetres_d) (round(((double) (centimetres))))) / 100.0)))));
}

metres_u centimetres_d_to_metres_u(centimetres_d centimetres)
{
    return ((metres_u) (round(((double) (((centimetres_d) (round(((double) (centimetres))))) / 100.0)))));
}

millimetres_f centimetres_d_to_millimetres_f(centimetres_d centimetres)
{
    return ((millimetres_f) (centimetres * 10.0));
}

millimetres_t centimetres_d_to_millimetres_t(centimetres_d centimetres)
{
    return ((millimetres_t) (round(((double) (centimetres * 10.0)))));
}

millimetres_u centimetres_d_to_millimetres_u(centimetres_d centimetres)
{
    return ((millimetres_u) (round(((double) (centimetres * 10.0)))));
}

centimetres_d centimetres_f_to_centimetres_d(centimetres_f centimetres)
{
    return ((centimetres_d) (centimetres));
}

centimetres_t centimetres_f_to_centimetres_t(centimetres_f centimetres)
{
    return ((centimetres_t) (round(((double) (centimetres)))));
}

centimetres_u centimetres_f_to_centimetres_u(centimetres_f centimetres)
{
    return ((centimetres_u) (round(((double) (centimetres)))));
}

metres_d centimetres_f_to_metres_d(centimetres_f centimetres)
{
    return ((metres_d) (round(((double) (((centimetres_d) (centimetres)) / 100.0)))));
}

metres_t centimetres_f_to_metres_t(centimetres_f centimetres)
{
    return ((metres_t) (round(((double) (((centimetres_d) (centimetres)) / 100.0)))));
}

metres_u centimetres_f_to_metres_u(centimetres_f centimetres)
{
    return ((metres_u) (round(((double) (((centimetres_d) (centimetres)) / 100.0)))));
}

millimetres_d centimetres_f_to_millimetres_d(centimetres_f centimetres)
{
    return ((millimetres_d) (centimetres * 10.0f));
}

millimetres_t centimetres_f_to_millimetres_t(centimetres_f centimetres)
{
    return ((millimetres_t) (round(((double) (centimetres * 10.0f)))));
}

millimetres_u centimetres_f_to_millimetres_u(centimetres_f centimetres)
{
    return ((millimetres_u) (round(((double) (centimetres * 10.0f)))));
}

centimetres_d centimetres_t_to_centimetres_d(centimetres_t centimetres)
{
    return ((centimetres_d) (centimetres));
}

centimetres_f centimetres_t_to_centimetres_f(centimetres_t centimetres)
{
    return ((centimetres_f) (centimetres));
}

centimetres_u centimetres_t_to_centimetres_u(centimetres_t centimetres)
{
    return ((centimetres_u) ((centimetres) < 0 ? 0 : centimetres));
}

metres_d centimetres_t_to_metres_d(centimetres_t centimetres)
{
    return ((metres_d) (round(((double) (((centimetres_d) (centimetres)) / 100.0)))));
}

metres_f centimetres_t_to_metres_f(centimetres_t centimetres)
{
    return ((metres_f) (((centimetres_d) (centimetres)) / 100.0));
}

metres_u centimetres_t_to_metres_u(centimetres_t centimetres)
{
    return ((metres_u) (round(((double) (((centimetres_d) (centimetres)) / 100.0)))));
}

millimetres_d centimetres_t_to_millimetres_d(centimetres_t centimetres)
{
    return ((millimetres_d) (centimetres * 10));
}

millimetres_f centimetres_t_to_millimetres_f(centimetres_t centimetres)
{
    return ((millimetres_f) (centimetres * 10));
}

millimetres_u centimetres_t_to_millimetres_u(centimetres_t centimetres)
{
    return ((millimetres_u) ((centimetres * 10) < 0 ? 0 : centimetres * 10));
}

centimetres_d centimetres_u_to_centimetres_d(centimetres_u centimetres)
{
    return ((centimetres_d) (centimetres));
}

centimetres_f centimetres_u_to_centimetres_f(centimetres_u centimetres)
{
    return ((centimetres_f) (centimetres));
}

centimetres_t centimetres_u_to_centimetres_t(centimetres_u centimetres)
{
    return ((centimetres_t) ((centimetres) > ((unsigned int) (INT_MAX)) ? ((unsigned int) (INT_MAX)) : centimetres));
}

metres_d centimetres_u_to_metres_d(centimetres_u centimetres)
{
    return ((metres_d) (round(((double) (((centimetres_d) (centimetres)) / 100.0)))));
}

metres_f centimetres_u_to_metres_f(centimetres_u centimetres)
{
    return ((metres_f) (((centimetres_d) (centimetres)) / 100.0));
}

metres_t centimetres_u_to_metres_t(centimetres_u centimetres)
{
    return ((metres_t) (round(((double) (((centimetres_d) (centimetres)) / 100.0)))));
}

millimetres_d centimetres_u_to_millimetres_d(centimetres_u centimetres)
{
    return ((millimetres_d) (centimetres * 10));
}

millimetres_f centimetres_u_to_millimetres_f(centimetres_u centimetres)
{
    return ((millimetres_f) (centimetres * 10));
}

millimetres_t centimetres_u_to_millimetres_t(centimetres_u centimetres)
{
    return ((millimetres_t) ((centimetres * 10) > ((unsigned int) (INT_MAX)) ? ((unsigned int) (INT_MAX)) : centimetres * 10));
}

centimetres_f metres_d_to_centimetres_f(metres_d metres)
{
    return ((centimetres_f) (metres * 100.0));
}

centimetres_t metres_d_to_centimetres_t(metres_d metres)
{
    return ((centimetres_t) (round(((double) (metres * 100.0)))));
}

centimetres_u metres_d_to_centimetres_u(metres_d metres)
{
    return ((centimetres_u) (round(((double) (metres * 100.0)))));
}

metres_f metres_d_to_metres_f(metres_d metres)
{
    return ((metres_f) (metres));
}

metres_t metres_d_to_metres_t(metres_d metres)
{
    return ((metres_t) (round(((double) (metres)))));
}

metres_u metres_d_to_metres_u(metres_d metres)
{
    return ((metres_u) (round(((double) (metres)))));
}

millimetres_f metres_d_to_millimetres_f(metres_d metres)
{
    return ((millimetres_f) (metres * 1000.0));
}

millimetres_t metres_d_to_millimetres_t(metres_d metres)
{
    return ((millimetres_t) (round(((double) (metres * 1000.0)))));
}

millimetres_u metres_d_to_millimetres_u(metres_d metres)
{
    return ((millimetres_u) (round(((double) (metres * 1000.0)))));
}

centimetres_d metres_f_to_centimetres_d(metres_f metres)
{
    return ((centimetres_d) (metres * 100.0f));
}

centimetres_t metres_f_to_centimetres_t(metres_f metres)
{
    return ((centimetres_t) (round(((double) (metres * 100.0f)))));
}

centimetres_u metres_f_to_centimetres_u(metres_f metres)
{
    return ((centimetres_u) (round(((double) (metres * 100.0f)))));
}

metres_d metres_f_to_metres_d(metres_f metres)
{
    return ((metres_d) (metres));
}

metres_t metres_f_to_metres_t(metres_f metres)
{
    return ((metres_t) (round(((double) (metres)))));
}

metres_u metres_f_to_metres_u(metres_f metres)
{
    return ((metres_u) (round(((double) (metres)))));
}

millimetres_d metres_f_to_millimetres_d(metres_f metres)
{
    return ((millimetres_d) (metres * 1000.0f));
}

millimetres_t metres_f_to_millimetres_t(metres_f metres)
{
    return ((millimetres_t) (round(((double) (metres * 1000.0f)))));
}

millimetres_u metres_f_to_millimetres_u(metres_f metres)
{
    return ((millimetres_u) (round(((double) (metres * 1000.0f)))));
}

centimetres_d metres_t_to_centimetres_d(metres_t metres)
{
    return ((centimetres_d) (metres * 100));
}

centimetres_f metres_t_to_centimetres_f(metres_t metres)
{
    return ((centimetres_f) (metres * 100));
}

centimetres_u metres_t_to_centimetres_u(metres_t metres)
{
    return ((centimetres_u) ((metres * 100) < 0 ? 0 : metres * 100));
}

metres_d metres_t_to_metres_d(metres_t metres)
{
    return ((metres_d) (metres));
}

metres_f metres_t_to_metres_f(metres_t metres)
{
    return ((metres_f) (metres));
}

metres_u metres_t_to_metres_u(metres_t metres)
{
    return ((metres_u) ((metres) < 0 ? 0 : metres));
}

millimetres_d metres_t_to_millimetres_d(metres_t metres)
{
    return ((millimetres_d) (metres * 1000));
}

millimetres_f metres_t_to_millimetres_f(metres_t metres)
{
    return ((millimetres_f) (metres * 1000));
}

millimetres_u metres_t_to_millimetres_u(metres_t metres)
{
    return ((millimetres_u) ((metres * 1000) < 0 ? 0 : metres * 1000));
}

centimetres_d metres_u_to_centimetres_d(metres_u metres)
{
    return ((centimetres_d) (metres * 100));
}

centimetres_f metres_u_to_centimetres_f(metres_u metres)
{
    return ((centimetres_f) (metres * 100));
}

centimetres_t metres_u_to_centimetres_t(metres_u metres)
{
    return ((centimetres_t) ((metres * 100) > ((unsigned int) (INT_MAX)) ? ((unsigned int) (INT_MAX)) : metres * 100));
}

metres_d metres_u_to_metres_d(metres_u metres)
{
    return ((metres_d) (metres));
}

metres_f metres_u_to_metres_f(metres_u metres)
{
    return ((metres_f) (metres));
}

metres_t metres_u_to_metres_t(metres_u metres)
{
    return ((metres_t) ((metres) > ((unsigned int) (INT_MAX)) ? ((unsigned int) (INT_MAX)) : metres));
}

millimetres_d metres_u_to_millimetres_d(metres_u metres)
{
    return ((millimetres_d) (metres * 1000));
}

millimetres_f metres_u_to_millimetres_f(metres_u metres)
{
    return ((millimetres_f) (metres * 1000));
}

millimetres_t metres_u_to_millimetres_t(metres_u metres)
{
    return ((millimetres_t) ((metres * 1000) > ((unsigned int) (INT_MAX)) ? ((unsigned int) (INT_MAX)) : metres * 1000));
}

centimetres_f millimetres_d_to_centimetres_f(millimetres_d millimetres)
{
    return ((centimetres_f) (((millimetres_d) (round(((double) (millimetres))))) / 10.0));
}

centimetres_t millimetres_d_to_centimetres_t(millimetres_d millimetres)
{
    return ((centimetres_t) (round(((double) (((millimetres_d) (round(((double) (millimetres))))) / 10.0)))));
}

centimetres_u millimetres_d_to_centimetres_u(millimetres_d millimetres)
{
    return ((centimetres_u) (round(((double) (((millimetres_d) (round(((double) (millimetres))))) / 10.0)))));
}

metres_f millimetres_d_to_metres_f(millimetres_d millimetres)
{
    return ((metres_f) (((millimetres_d) (round(((double) (millimetres))))) / 1000.0));
}

metres_t millimetres_d_to_metres_t(millimetres_d millimetres)
{
    return ((metres_t) (round(((double) (((millimetres_d) (round(((double) (millimetres))))) / 1000.0)))));
}

metres_u millimetres_d_to_metres_u(millimetres_d millimetres)
{
    return ((metres_u) (round(((double) (((millimetres_d) (round(((double) (millimetres))))) / 1000.0)))));
}

millimetres_f millimetres_d_to_millimetres_f(millimetres_d millimetres)
{
    return ((millimetres_f) (millimetres));
}

millimetres_t millimetres_d_to_millimetres_t(millimetres_d millimetres)
{
    return ((millimetres_t) (round(((double) (millimetres)))));
}

millimetres_u millimetres_d_to_millimetres_u(millimetres_d millimetres)
{
    return ((millimetres_u) (round(((double) (millimetres)))));
}

centimetres_d millimetres_f_to_centimetres_d(millimetres_f millimetres)
{
    return ((centimetres_d) (round(((double) (((millimetres_d) (millimetres)) / 10.0)))));
}

centimetres_t millimetres_f_to_centimetres_t(millimetres_f millimetres)
{
    return ((centimetres_t) (round(((double) (((millimetres_d) (millimetres)) / 10.0)))));
}

centimetres_u millimetres_f_to_centimetres_u(millimetres_f millimetres)
{
    return ((centimetres_u) (round(((double) (((millimetres_d) (millimetres)) / 10.0)))));
}

metres_d millimetres_f_to_metres_d(millimetres_f millimetres)
{
    return ((metres_d) (round(((double) (((millimetres_d) (millimetres)) / 1000.0)))));
}

metres_t millimetres_f_to_metres_t(millimetres_f millimetres)
{
    return ((metres_t) (round(((double) (((millimetres_d) (millimetres)) / 1000.0)))));
}

metres_u millimetres_f_to_metres_u(millimetres_f millimetres)
{
    return ((metres_u) (round(((double) (((millimetres_d) (millimetres)) / 1000.0)))));
}

millimetres_d millimetres_f_to_millimetres_d(millimetres_f millimetres)
{
    return ((millimetres_d) (millimetres));
}

millimetres_t millimetres_f_to_millimetres_t(millimetres_f millimetres)
{
    return ((millimetres_t) (round(((double) (millimetres)))));
}

millimetres_u millimetres_f_to_millimetres_u(millimetres_f millimetres)
{
    return ((millimetres_u) (round(((double) (millimetres)))));
}

centimetres_d millimetres_t_to_centimetres_d(millimetres_t millimetres)
{
    return ((centimetres_d) (round(((double) (((millimetres_d) (millimetres)) / 10.0)))));
}

centimetres_f millimetres_t_to_centimetres_f(millimetres_t millimetres)
{
    return ((centimetres_f) (((millimetres_d) (millimetres)) / 10.0));
}

centimetres_u millimetres_t_to_centimetres_u(millimetres_t millimetres)
{
    return ((centimetres_u) (round(((double) (((millimetres_d) (millimetres)) / 10.0)))));
}

metres_d millimetres_t_to_metres_d(millimetres_t millimetres)
{
    return ((metres_d) (round(((double) (((millimetres_d) (millimetres)) / 1000.0)))));
}

metres_f millimetres_t_to_metres_f(millimetres_t millimetres)
{
    return ((metres_f) (((millimetres_d) (millimetres)) / 1000.0));
}

metres_u millimetres_t_to_metres_u(millimetres_t millimetres)
{
    return ((metres_u) (round(((double) (((millimetres_d) (millimetres)) / 1000.0)))));
}

millimetres_d millimetres_t_to_millimetres_d(millimetres_t millimetres)
{
    return ((millimetres_d) (millimetres));
}

millimetres_f millimetres_t_to_millimetres_f(millimetres_t millimetres)
{
    return ((millimetres_f) (millimetres));
}

millimetres_u millimetres_t_to_millimetres_u(millimetres_t millimetres)
{
    return ((millimetres_u) ((millimetres) < 0 ? 0 : millimetres));
}

centimetres_d millimetres_u_to_centimetres_d(millimetres_u millimetres)
{
    return ((centimetres_d) (round(((double) (((millimetres_d) (millimetres)) / 10.0)))));
}

centimetres_f millimetres_u_to_centimetres_f(millimetres_u millimetres)
{
    return ((centimetres_f) (((millimetres_d) (millimetres)) / 10.0));
}

centimetres_t millimetres_u_to_centimetres_t(millimetres_u millimetres)
{
    return ((centimetres_t) (round(((double) (((millimetres_d) (millimetres)) / 10.0)))));
}

metres_d millimetres_u_to_metres_d(millimetres_u millimetres)
{
    return ((metres_d) (round(((double) (((millimetres_d) (millimetres)) / 1000.0)))));
}

metres_f millimetres_u_to_metres_f(millimetres_u millimetres)
{
    return ((metres_f) (((millimetres_d) (millimetres)) / 1000.0));
}

metres_t millimetres_u_to_metres_t(millimetres_u millimetres)
{
    return ((metres_t) (round(((double) (((millimetres_d) (millimetres)) / 1000.0)))));
}

millimetres_d millimetres_u_to_millimetres_d(millimetres_u millimetres)
{
    return ((millimetres_d) (millimetres));
}

millimetres_f millimetres_u_to_millimetres_f(millimetres_u millimetres)
{
    return ((millimetres_f) (millimetres));
}

millimetres_t millimetres_u_to_millimetres_t(millimetres_u millimetres)
{
    return ((millimetres_t) ((millimetres) > ((unsigned int) (INT_MAX)) ? ((unsigned int) (INT_MAX)) : millimetres));
}

// Time Conversion Functions
microseconds_f microseconds_d_to_microseconds_f(microseconds_d microseconds)
{
    return ((microseconds_f) (microseconds));
}

microseconds_t microseconds_d_to_microseconds_t(microseconds_d microseconds)
{
    return ((microseconds_t) (round(((double) (microseconds)))));
}

microseconds_u microseconds_d_to_microseconds_u(microseconds_d microseconds)
{
    return ((microseconds_u) (round(((double) (microseconds)))));
}

milliseconds_f microseconds_d_to_milliseconds_f(microseconds_d microseconds)
{
    return ((milliseconds_f) (((microseconds_d) (round(((double) (microseconds))))) / 1000.0));
}

milliseconds_t microseconds_d_to_milliseconds_t(microseconds_d microseconds)
{
    return ((milliseconds_t) (round(((double) (((microseconds_d) (round(((double) (microseconds))))) / 1000.0)))));
}

milliseconds_u microseconds_d_to_milliseconds_u(microseconds_d microseconds)
{
    return ((milliseconds_u) (round(((double) (((microseconds_d) (round(((double) (microseconds))))) / 1000.0)))));
}

seconds_f microseconds_d_to_seconds_f(microseconds_d microseconds)
{
    return ((seconds_f) (((microseconds_d) (round(((double) (microseconds))))) / 1000000.0));
}

seconds_t microseconds_d_to_seconds_t(microseconds_d microseconds)
{
    return ((seconds_t) (round(((double) (((microseconds_d) (round(((double) (microseconds))))) / 1000000.0)))));
}

seconds_u microseconds_d_to_seconds_u(microseconds_d microseconds)
{
    return ((seconds_u) (round(((double) (((microseconds_d) (round(((double) (microseconds))))) / 1000000.0)))));
}

microseconds_d microseconds_f_to_microseconds_d(microseconds_f microseconds)
{
    return ((microseconds_d) (microseconds));
}

microseconds_t microseconds_f_to_microseconds_t(microseconds_f microseconds)
{
    return ((microseconds_t) (round(((double) (microseconds)))));
}

microseconds_u microseconds_f_to_microseconds_u(microseconds_f microseconds)
{
    return ((microseconds_u) (round(((double) (microseconds)))));
}

milliseconds_d microseconds_f_to_milliseconds_d(microseconds_f microseconds)
{
    return ((milliseconds_d) (round(((double) (((microseconds_d) (microseconds)) / 1000.0)))));
}

milliseconds_t microseconds_f_to_milliseconds_t(microseconds_f microseconds)
{
    return ((milliseconds_t) (round(((double) (((microseconds_d) (microseconds)) / 1000.0)))));
}

milliseconds_u microseconds_f_to_milliseconds_u(microseconds_f microseconds)
{
    return ((milliseconds_u) (round(((double) (((microseconds_d) (microseconds)) / 1000.0)))));
}

seconds_d microseconds_f_to_seconds_d(microseconds_f microseconds)
{
    return ((seconds_d) (round(((double) (((microseconds_d) (microseconds)) / 1000000.0)))));
}

seconds_t microseconds_f_to_seconds_t(microseconds_f microseconds)
{
    return ((seconds_t) (round(((double) (((microseconds_d) (microseconds)) / 1000000.0)))));
}

seconds_u microseconds_f_to_seconds_u(microseconds_f microseconds)
{
    return ((seconds_u) (round(((double) (((microseconds_d) (microseconds)) / 1000000.0)))));
}

microseconds_d microseconds_t_to_microseconds_d(microseconds_t microseconds)
{
    return ((microseconds_d) (microseconds));
}

microseconds_f microseconds_t_to_microseconds_f(microseconds_t microseconds)
{
    return ((microseconds_f) (microseconds));
}

microseconds_u microseconds_t_to_microseconds_u(microseconds_t microseconds)
{
    return ((microseconds_u) ((microseconds) < 0 ? 0 : microseconds));
}

milliseconds_d microseconds_t_to_milliseconds_d(microseconds_t microseconds)
{
    return ((milliseconds_d) (round(((double) (((microseconds_d) (microseconds)) / 1000.0)))));
}

milliseconds_f microseconds_t_to_milliseconds_f(microseconds_t microseconds)
{
    return ((milliseconds_f) (((microseconds_d) (microseconds)) / 1000.0));
}

milliseconds_u microseconds_t_to_milliseconds_u(microseconds_t microseconds)
{
    return ((milliseconds_u) (round(((double) (((microseconds_d) (microseconds)) / 1000.0)))));
}

seconds_d microseconds_t_to_seconds_d(microseconds_t microseconds)
{
    return ((seconds_d) (round(((double) (((microseconds_d) (microseconds)) / 1000000.0)))));
}

seconds_f microseconds_t_to_seconds_f(microseconds_t microseconds)
{
    return ((seconds_f) (((microseconds_d) (microseconds)) / 1000000.0));
}

seconds_u microseconds_t_to_seconds_u(microseconds_t microseconds)
{
    return ((seconds_u) (round(((double) (((microseconds_d) (microseconds)) / 1000000.0)))));
}

microseconds_d microseconds_u_to_microseconds_d(microseconds_u microseconds)
{
    return ((microseconds_d) (microseconds));
}

microseconds_f microseconds_u_to_microseconds_f(microseconds_u microseconds)
{
    return ((microseconds_f) (microseconds));
}

microseconds_t microseconds_u_to_microseconds_t(microseconds_u microseconds)
{
    return ((microseconds_t) ((microseconds) > ((unsigned int) (INT_MAX)) ? ((unsigned int) (INT_MAX)) : microseconds));
}

milliseconds_d microseconds_u_to_milliseconds_d(microseconds_u microseconds)
{
    return ((milliseconds_d) (round(((double) (((microseconds_d) (microseconds)) / 1000.0)))));
}

milliseconds_f microseconds_u_to_milliseconds_f(microseconds_u microseconds)
{
    return ((milliseconds_f) (((microseconds_d) (microseconds)) / 1000.0));
}

milliseconds_t microseconds_u_to_milliseconds_t(microseconds_u microseconds)
{
    return ((milliseconds_t) (round(((double) (((microseconds_d) (microseconds)) / 1000.0)))));
}

seconds_d microseconds_u_to_seconds_d(microseconds_u microseconds)
{
    return ((seconds_d) (round(((double) (((microseconds_d) (microseconds)) / 1000000.0)))));
}

seconds_f microseconds_u_to_seconds_f(microseconds_u microseconds)
{
    return ((seconds_f) (((microseconds_d) (microseconds)) / 1000000.0));
}

seconds_t microseconds_u_to_seconds_t(microseconds_u microseconds)
{
    return ((seconds_t) (round(((double) (((microseconds_d) (microseconds)) / 1000000.0)))));
}

microseconds_f milliseconds_d_to_microseconds_f(milliseconds_d milliseconds)
{
    return ((microseconds_f) (milliseconds * 1000.0));
}

microseconds_t milliseconds_d_to_microseconds_t(milliseconds_d milliseconds)
{
    return ((microseconds_t) (round(((double) (milliseconds * 1000.0)))));
}

microseconds_u milliseconds_d_to_microseconds_u(milliseconds_d milliseconds)
{
    return ((microseconds_u) (round(((double) (milliseconds * 1000.0)))));
}

milliseconds_f milliseconds_d_to_milliseconds_f(milliseconds_d milliseconds)
{
    return ((milliseconds_f) (milliseconds));
}

milliseconds_t milliseconds_d_to_milliseconds_t(milliseconds_d milliseconds)
{
    return ((milliseconds_t) (round(((double) (milliseconds)))));
}

milliseconds_u milliseconds_d_to_milliseconds_u(milliseconds_d milliseconds)
{
    return ((milliseconds_u) (round(((double) (milliseconds)))));
}

seconds_f milliseconds_d_to_seconds_f(milliseconds_d milliseconds)
{
    return ((seconds_f) (((milliseconds_d) (round(((double) (milliseconds))))) / 1000.0));
}

seconds_t milliseconds_d_to_seconds_t(milliseconds_d milliseconds)
{
    return ((seconds_t) (round(((double) (((milliseconds_d) (round(((double) (milliseconds))))) / 1000.0)))));
}

seconds_u milliseconds_d_to_seconds_u(milliseconds_d milliseconds)
{
    return ((seconds_u) (round(((double) (((milliseconds_d) (round(((double) (milliseconds))))) / 1000.0)))));
}

microseconds_d milliseconds_f_to_microseconds_d(milliseconds_f milliseconds)
{
    return ((microseconds_d) (milliseconds * 1000.0f));
}

microseconds_t milliseconds_f_to_microseconds_t(milliseconds_f milliseconds)
{
    return ((microseconds_t) (round(((double) (milliseconds * 1000.0f)))));
}

microseconds_u milliseconds_f_to_microseconds_u(milliseconds_f milliseconds)
{
    return ((microseconds_u) (round(((double) (milliseconds * 1000.0f)))));
}

milliseconds_d milliseconds_f_to_milliseconds_d(milliseconds_f milliseconds)
{
    return ((milliseconds_d) (milliseconds));
}

milliseconds_t milliseconds_f_to_milliseconds_t(milliseconds_f milliseconds)
{
    return ((milliseconds_t) (round(((double) (milliseconds)))));
}

milliseconds_u milliseconds_f_to_milliseconds_u(milliseconds_f milliseconds)
{
    return ((milliseconds_u) (round(((double) (milliseconds)))));
}

seconds_d milliseconds_f_to_seconds_d(milliseconds_f milliseconds)
{
    return ((seconds_d) (round(((double) (((milliseconds_d) (milliseconds)) / 1000.0)))));
}

seconds_t milliseconds_f_to_seconds_t(milliseconds_f milliseconds)
{
    return ((seconds_t) (round(((double) (((milliseconds_d) (milliseconds)) / 1000.0)))));
}

seconds_u milliseconds_f_to_seconds_u(milliseconds_f milliseconds)
{
    return ((seconds_u) (round(((double) (((milliseconds_d) (milliseconds)) / 1000.0)))));
}

microseconds_d milliseconds_t_to_microseconds_d(milliseconds_t milliseconds)
{
    return ((microseconds_d) (milliseconds * 1000));
}

microseconds_f milliseconds_t_to_microseconds_f(milliseconds_t milliseconds)
{
    return ((microseconds_f) (milliseconds * 1000));
}

microseconds_u milliseconds_t_to_microseconds_u(milliseconds_t milliseconds)
{
    return ((microseconds_u) ((milliseconds * 1000) < 0 ? 0 : milliseconds * 1000));
}

milliseconds_d milliseconds_t_to_milliseconds_d(milliseconds_t milliseconds)
{
    return ((milliseconds_d) (milliseconds));
}

milliseconds_f milliseconds_t_to_milliseconds_f(milliseconds_t milliseconds)
{
    return ((milliseconds_f) (milliseconds));
}

milliseconds_u milliseconds_t_to_milliseconds_u(milliseconds_t milliseconds)
{
    return ((milliseconds_u) ((milliseconds) < 0 ? 0 : milliseconds));
}

seconds_d milliseconds_t_to_seconds_d(milliseconds_t milliseconds)
{
    return ((seconds_d) (round(((double) (((milliseconds_d) (milliseconds)) / 1000.0)))));
}

seconds_f milliseconds_t_to_seconds_f(milliseconds_t milliseconds)
{
    return ((seconds_f) (((milliseconds_d) (milliseconds)) / 1000.0));
}

seconds_u milliseconds_t_to_seconds_u(milliseconds_t milliseconds)
{
    return ((seconds_u) (round(((double) (((milliseconds_d) (milliseconds)) / 1000.0)))));
}

microseconds_d milliseconds_u_to_microseconds_d(milliseconds_u milliseconds)
{
    return ((microseconds_d) (milliseconds * 1000));
}

microseconds_f milliseconds_u_to_microseconds_f(milliseconds_u milliseconds)
{
    return ((microseconds_f) (milliseconds * 1000));
}

microseconds_t milliseconds_u_to_microseconds_t(milliseconds_u milliseconds)
{
    return ((microseconds_t) ((milliseconds * 1000) > ((unsigned int) (INT_MAX)) ? ((unsigned int) (INT_MAX)) : milliseconds * 1000));
}

milliseconds_d milliseconds_u_to_milliseconds_d(milliseconds_u milliseconds)
{
    return ((milliseconds_d) (milliseconds));
}

milliseconds_f milliseconds_u_to_milliseconds_f(milliseconds_u milliseconds)
{
    return ((milliseconds_f) (milliseconds));
}

milliseconds_t milliseconds_u_to_milliseconds_t(milliseconds_u milliseconds)
{
    return ((milliseconds_t) ((milliseconds) > ((unsigned int) (INT_MAX)) ? ((unsigned int) (INT_MAX)) : milliseconds));
}

seconds_d milliseconds_u_to_seconds_d(milliseconds_u milliseconds)
{
    return ((seconds_d) (round(((double) (((milliseconds_d) (milliseconds)) / 1000.0)))));
}

seconds_f milliseconds_u_to_seconds_f(milliseconds_u milliseconds)
{
    return ((seconds_f) (((milliseconds_d) (milliseconds)) / 1000.0));
}

seconds_t milliseconds_u_to_seconds_t(milliseconds_u milliseconds)
{
    return ((seconds_t) (round(((double) (((milliseconds_d) (milliseconds)) / 1000.0)))));
}

microseconds_f seconds_d_to_microseconds_f(seconds_d seconds)
{
    return ((microseconds_f) (seconds * 1000000.0));
}

microseconds_t seconds_d_to_microseconds_t(seconds_d seconds)
{
    return ((microseconds_t) (round(((double) (seconds * 1000000.0)))));
}

microseconds_u seconds_d_to_microseconds_u(seconds_d seconds)
{
    return ((microseconds_u) (round(((double) (seconds * 1000000.0)))));
}

milliseconds_f seconds_d_to_milliseconds_f(seconds_d seconds)
{
    return ((milliseconds_f) (seconds * 1000.0));
}

milliseconds_t seconds_d_to_milliseconds_t(seconds_d seconds)
{
    return ((milliseconds_t) (round(((double) (seconds * 1000.0)))));
}

milliseconds_u seconds_d_to_milliseconds_u(seconds_d seconds)
{
    return ((milliseconds_u) (round(((double) (seconds * 1000.0)))));
}

seconds_f seconds_d_to_seconds_f(seconds_d seconds)
{
    return ((seconds_f) (seconds));
}

seconds_t seconds_d_to_seconds_t(seconds_d seconds)
{
    return ((seconds_t) (round(((double) (seconds)))));
}

seconds_u seconds_d_to_seconds_u(seconds_d seconds)
{
    return ((seconds_u) (round(((double) (seconds)))));
}

microseconds_d seconds_f_to_microseconds_d(seconds_f seconds)
{
    return ((microseconds_d) (seconds * 1000000.0f));
}

microseconds_t seconds_f_to_microseconds_t(seconds_f seconds)
{
    return ((microseconds_t) (round(((double) (seconds * 1000000.0f)))));
}

microseconds_u seconds_f_to_microseconds_u(seconds_f seconds)
{
    return ((microseconds_u) (round(((double) (seconds * 1000000.0f)))));
}

milliseconds_d seconds_f_to_milliseconds_d(seconds_f seconds)
{
    return ((milliseconds_d) (seconds * 1000.0f));
}

milliseconds_t seconds_f_to_milliseconds_t(seconds_f seconds)
{
    return ((milliseconds_t) (round(((double) (seconds * 1000.0f)))));
}

milliseconds_u seconds_f_to_milliseconds_u(seconds_f seconds)
{
    return ((milliseconds_u) (round(((double) (seconds * 1000.0f)))));
}

seconds_d seconds_f_to_seconds_d(seconds_f seconds)
{
    return ((seconds_d) (seconds));
}

seconds_t seconds_f_to_seconds_t(seconds_f seconds)
{
    return ((seconds_t) (round(((double) (seconds)))));
}

seconds_u seconds_f_to_seconds_u(seconds_f seconds)
{
    return ((seconds_u) (round(((double) (seconds)))));
}

microseconds_d seconds_t_to_microseconds_d(seconds_t seconds)
{
    return ((microseconds_d) (seconds * 1000000));
}

microseconds_f seconds_t_to_microseconds_f(seconds_t seconds)
{
    return ((microseconds_f) (seconds * 1000000));
}

microseconds_u seconds_t_to_microseconds_u(seconds_t seconds)
{
    return ((microseconds_u) ((seconds * 1000000) < 0 ? 0 : seconds * 1000000));
}

milliseconds_d seconds_t_to_milliseconds_d(seconds_t seconds)
{
    return ((milliseconds_d) (seconds * 1000));
}

milliseconds_f seconds_t_to_milliseconds_f(seconds_t seconds)
{
    return ((milliseconds_f) (seconds * 1000));
}

milliseconds_u seconds_t_to_milliseconds_u(seconds_t seconds)
{
    return ((milliseconds_u) ((seconds * 1000) < 0 ? 0 : seconds * 1000));
}

seconds_d seconds_t_to_seconds_d(seconds_t seconds)
{
    return ((seconds_d) (seconds));
}

seconds_f seconds_t_to_seconds_f(seconds_t seconds)
{
    return ((seconds_f) (seconds));
}

seconds_u seconds_t_to_seconds_u(seconds_t seconds)
{
    return ((seconds_u) ((seconds) < 0 ? 0 : seconds));
}

microseconds_d seconds_u_to_microseconds_d(seconds_u seconds)
{
    return ((microseconds_d) (seconds * 1000000));
}

microseconds_f seconds_u_to_microseconds_f(seconds_u seconds)
{
    return ((microseconds_f) (seconds * 1000000));
}

microseconds_t seconds_u_to_microseconds_t(seconds_u seconds)
{
    return ((microseconds_t) ((seconds * 1000000) > ((unsigned int) (INT_MAX)) ? ((unsigned int) (INT_MAX)) : seconds * 1000000));
}

milliseconds_d seconds_u_to_milliseconds_d(seconds_u seconds)
{
    return ((milliseconds_d) (seconds * 1000));
}

milliseconds_f seconds_u_to_milliseconds_f(seconds_u seconds)
{
    return ((milliseconds_f) (seconds * 1000));
}

milliseconds_t seconds_u_to_milliseconds_t(seconds_u seconds)
{
    return ((milliseconds_t) ((seconds * 1000) > ((unsigned int) (INT_MAX)) ? ((unsigned int) (INT_MAX)) : seconds * 1000));
}

seconds_d seconds_u_to_seconds_d(seconds_u seconds)
{
    return ((seconds_d) (seconds));
}

seconds_f seconds_u_to_seconds_f(seconds_u seconds)
{
    return ((seconds_f) (seconds));
}

seconds_t seconds_u_to_seconds_t(seconds_u seconds)
{
    return ((seconds_t) ((seconds) > ((unsigned int) (INT_MAX)) ? ((unsigned int) (INT_MAX)) : seconds));
}

//Angle Conversion Functions
degrees_f degrees_d_to_degrees_f(degrees_d degrees)
{
    return ((degrees_f) (degrees));
}

degrees_t degrees_d_to_degrees_t(degrees_d degrees)
{
    return ((degrees_t) (round(((double) (degrees)))));
}

degrees_u degrees_d_to_degrees_u(degrees_d degrees)
{
    return ((degrees_u) (round(((double) (degrees)))));
}

radians_f degrees_d_to_radians_f(degrees_d degrees)
{
    return ((radians_f) (((double) degrees) * M_PI / 180.0));
}

radians_t degrees_d_to_radians_t(degrees_d degrees)
{
    return ((radians_t) (((double) degrees) * M_PI / 180.0));
}

radians_u degrees_d_to_radians_u(degrees_d degrees)
{
    return ((radians_u) (((double) degrees) * M_PI / 180.0));
}

degrees_d degrees_f_to_degrees_d(degrees_f degrees)
{
    return ((degrees_d) (degrees));
}

degrees_t degrees_f_to_degrees_t(degrees_f degrees)
{
    return ((degrees_t) (round(((double) (degrees)))));
}

degrees_u degrees_f_to_degrees_u(degrees_f degrees)
{
    return ((degrees_u) (round(((double) (degrees)))));
}

radians_d degrees_f_to_radians_d(degrees_f degrees)
{
    return ((radians_d) (((double) degrees) * M_PI / 180.0));
}

radians_t degrees_f_to_radians_t(degrees_f degrees)
{
    return ((radians_t) (((double) degrees) * M_PI / 180.0));
}

radians_u degrees_f_to_radians_u(degrees_f degrees)
{
    return ((radians_u) (((double) degrees) * M_PI / 180.0));
}

degrees_d degrees_t_to_degrees_d(degrees_t degrees)
{
    return ((degrees_d) (degrees));
}

degrees_f degrees_t_to_degrees_f(degrees_t degrees)
{
    return ((degrees_f) (degrees));
}

degrees_u degrees_t_to_degrees_u(degrees_t degrees)
{
    return ((degrees_u) ((degrees) < 0 ? 0 : degrees));
}

radians_d degrees_t_to_radians_d(degrees_t degrees)
{
    return ((radians_d) (((double) degrees) * M_PI / 180.0));
}

radians_f degrees_t_to_radians_f(degrees_t degrees)
{
    return ((radians_f) (((double) degrees) * M_PI / 180.0));
}

radians_u degrees_t_to_radians_u(degrees_t degrees)
{
    return ((radians_u) (((double) degrees) * M_PI / 180.0));
}

degrees_d degrees_u_to_degrees_d(degrees_u degrees)
{
    return ((degrees_d) (degrees));
}

degrees_f degrees_u_to_degrees_f(degrees_u degrees)
{
    return ((degrees_f) (degrees));
}

degrees_t degrees_u_to_degrees_t(degrees_u degrees)
{
    return ((degrees_t) ((degrees) > ((unsigned int) (INT_MAX)) ? ((unsigned int) (INT_MAX)) : degrees));
}

radians_d degrees_u_to_radians_d(degrees_u degrees)
{
    return ((radians_d) (((double) degrees) * M_PI / 180.0));
}

radians_f degrees_u_to_radians_f(degrees_u degrees)
{
    return ((radians_f) (((double) degrees) * M_PI / 180.0));
}

radians_t degrees_u_to_radians_t(degrees_u degrees)
{
    return ((radians_t) (((double) degrees) * M_PI / 180.0));
}

degrees_f radians_d_to_degrees_f(radians_d radians)
{
    return ((degrees_f) (180.0 / M_PI * ((double) radians)));
}

degrees_t radians_d_to_degrees_t(radians_d radians)
{
    return ((degrees_t) (180.0 / M_PI * ((double) radians)));
}

degrees_u radians_d_to_degrees_u(radians_d radians)
{
    return ((degrees_u) (180.0 / M_PI * ((double) radians)));
}

radians_f radians_d_to_radians_f(radians_d radians)
{
    return ((radians_f) (radians));
}

radians_t radians_d_to_radians_t(radians_d radians)
{
    return ((radians_t) (round(((double) (radians)))));
}

radians_u radians_d_to_radians_u(radians_d radians)
{
    return ((radians_u) (round(((double) (radians)))));
}

degrees_d radians_f_to_degrees_d(radians_f radians)
{
    return ((degrees_d) (180.0 / M_PI * ((double) radians)));
}

degrees_t radians_f_to_degrees_t(radians_f radians)
{
    return ((degrees_t) (180.0 / M_PI * ((double) radians)));
}

degrees_u radians_f_to_degrees_u(radians_f radians)
{
    return ((degrees_u) (180.0 / M_PI * ((double) radians)));
}

radians_d radians_f_to_radians_d(radians_f radians)
{
    return ((radians_d) (radians));
}

radians_t radians_f_to_radians_t(radians_f radians)
{
    return ((radians_t) (round(((double) (radians)))));
}

radians_u radians_f_to_radians_u(radians_f radians)
{
    return ((radians_u) (round(((double) (radians)))));
}

degrees_d radians_t_to_degrees_d(radians_t radians)
{
    return ((degrees_d) (180.0 / M_PI * ((double) radians)));
}

degrees_f radians_t_to_degrees_f(radians_t radians)
{
    return ((degrees_f) (180.0 / M_PI * ((double) radians)));
}

degrees_u radians_t_to_degrees_u(radians_t radians)
{
    return ((degrees_u) (180.0 / M_PI * ((double) radians)));
}

radians_d radians_t_to_radians_d(radians_t radians)
{
    return ((radians_d) (radians));
}

radians_f radians_t_to_radians_f(radians_t radians)
{
    return ((radians_f) (radians));
}

radians_u radians_t_to_radians_u(radians_t radians)
{
    return ((radians_u) ((radians) < 0 ? 0 : radians));
}

degrees_d radians_u_to_degrees_d(radians_u radians)
{
    return ((degrees_d) (180.0 / M_PI * ((double) radians)));
}

degrees_f radians_u_to_degrees_f(radians_u radians)
{
    return ((degrees_f) (180.0 / M_PI * ((double) radians)));
}

degrees_t radians_u_to_degrees_t(radians_u radians)
{
    return ((degrees_t) (180.0 / M_PI * ((double) radians)));
}

radians_d radians_u_to_radians_d(radians_u radians)
{
    return ((radians_d) (radians));
}

radians_f radians_u_to_radians_f(radians_u radians)
{
    return ((radians_f) (radians));
}

radians_t radians_u_to_radians_t(radians_u radians)
{
    return ((radians_t) ((radians) > ((unsigned int) (INT_MAX)) ? ((unsigned int) (INT_MAX)) : radians));
}

