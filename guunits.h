/*
* units.h
* Movement
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


#ifndef UNITS_H
#define UNITS_H

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

// Distance Conversion Functions
centimetres_f centimetres_d_to_centimetres_f(centimetres_d centimetres);
centimetres_t centimetres_d_to_centimetres_t(centimetres_d centimetres);
centimetres_u centimetres_d_to_centimetres_u(centimetres_d centimetres);
metres_f centimetres_d_to_metres_f(centimetres_d centimetres);
metres_t centimetres_d_to_metres_t(centimetres_d centimetres);
metres_u centimetres_d_to_metres_u(centimetres_d centimetres);
millimetres_f centimetres_d_to_millimetres_f(centimetres_d centimetres);
millimetres_t centimetres_d_to_millimetres_t(centimetres_d centimetres);
millimetres_u centimetres_d_to_millimetres_u(centimetres_d centimetres);
centimetres_d centimetres_f_to_centimetres_d(centimetres_f centimetres);
centimetres_t centimetres_f_to_centimetres_t(centimetres_f centimetres);
centimetres_u centimetres_f_to_centimetres_u(centimetres_f centimetres);
metres_d centimetres_f_to_metres_d(centimetres_f centimetres);
metres_t centimetres_f_to_metres_t(centimetres_f centimetres);
metres_u centimetres_f_to_metres_u(centimetres_f centimetres);
millimetres_d centimetres_f_to_millimetres_d(centimetres_f centimetres);
millimetres_t centimetres_f_to_millimetres_t(centimetres_f centimetres);
millimetres_u centimetres_f_to_millimetres_u(centimetres_f centimetres);
centimetres_d centimetres_t_to_centimetres_d(centimetres_t centimetres);
centimetres_f centimetres_t_to_centimetres_f(centimetres_t centimetres);
centimetres_u centimetres_t_to_centimetres_u(centimetres_t centimetres);
metres_d centimetres_t_to_metres_d(centimetres_t centimetres);
metres_f centimetres_t_to_metres_f(centimetres_t centimetres);
metres_u centimetres_t_to_metres_u(centimetres_t centimetres);
millimetres_d centimetres_t_to_millimetres_d(centimetres_t centimetres);
millimetres_f centimetres_t_to_millimetres_f(centimetres_t centimetres);
millimetres_u centimetres_t_to_millimetres_u(centimetres_t centimetres);
centimetres_d centimetres_u_to_centimetres_d(centimetres_u centimetres);
centimetres_f centimetres_u_to_centimetres_f(centimetres_u centimetres);
centimetres_t centimetres_u_to_centimetres_t(centimetres_u centimetres);
metres_d centimetres_u_to_metres_d(centimetres_u centimetres);
metres_f centimetres_u_to_metres_f(centimetres_u centimetres);
metres_t centimetres_u_to_metres_t(centimetres_u centimetres);
millimetres_d centimetres_u_to_millimetres_d(centimetres_u centimetres);
millimetres_f centimetres_u_to_millimetres_f(centimetres_u centimetres);
millimetres_t centimetres_u_to_millimetres_t(centimetres_u centimetres);
centimetres_f metres_d_to_centimetres_f(metres_d metres);
centimetres_t metres_d_to_centimetres_t(metres_d metres);
centimetres_u metres_d_to_centimetres_u(metres_d metres);
metres_f metres_d_to_metres_f(metres_d metres);
metres_t metres_d_to_metres_t(metres_d metres);
metres_u metres_d_to_metres_u(metres_d metres);
millimetres_f metres_d_to_millimetres_f(metres_d metres);
millimetres_t metres_d_to_millimetres_t(metres_d metres);
millimetres_u metres_d_to_millimetres_u(metres_d metres);
centimetres_d metres_f_to_centimetres_d(metres_f metres);
centimetres_t metres_f_to_centimetres_t(metres_f metres);
centimetres_u metres_f_to_centimetres_u(metres_f metres);
metres_d metres_f_to_metres_d(metres_f metres);
metres_t metres_f_to_metres_t(metres_f metres);
metres_u metres_f_to_metres_u(metres_f metres);
millimetres_d metres_f_to_millimetres_d(metres_f metres);
millimetres_t metres_f_to_millimetres_t(metres_f metres);
millimetres_u metres_f_to_millimetres_u(metres_f metres);
centimetres_d metres_t_to_centimetres_d(metres_t metres);
centimetres_f metres_t_to_centimetres_f(metres_t metres);
centimetres_u metres_t_to_centimetres_u(metres_t metres);
metres_d metres_t_to_metres_d(metres_t metres);
metres_f metres_t_to_metres_f(metres_t metres);
metres_u metres_t_to_metres_u(metres_t metres);
millimetres_d metres_t_to_millimetres_d(metres_t metres);
millimetres_f metres_t_to_millimetres_f(metres_t metres);
millimetres_u metres_t_to_millimetres_u(metres_t metres);
centimetres_d metres_u_to_centimetres_d(metres_u metres);
centimetres_f metres_u_to_centimetres_f(metres_u metres);
centimetres_t metres_u_to_centimetres_t(metres_u metres);
metres_d metres_u_to_metres_d(metres_u metres);
metres_f metres_u_to_metres_f(metres_u metres);
metres_t metres_u_to_metres_t(metres_u metres);
millimetres_d metres_u_to_millimetres_d(metres_u metres);
millimetres_f metres_u_to_millimetres_f(metres_u metres);
millimetres_t metres_u_to_millimetres_t(metres_u metres);
centimetres_f millimetres_d_to_centimetres_f(millimetres_d millimetres);
centimetres_t millimetres_d_to_centimetres_t(millimetres_d millimetres);
centimetres_u millimetres_d_to_centimetres_u(millimetres_d millimetres);
metres_f millimetres_d_to_metres_f(millimetres_d millimetres);
metres_t millimetres_d_to_metres_t(millimetres_d millimetres);
metres_u millimetres_d_to_metres_u(millimetres_d millimetres);
millimetres_f millimetres_d_to_millimetres_f(millimetres_d millimetres);
millimetres_t millimetres_d_to_millimetres_t(millimetres_d millimetres);
millimetres_u millimetres_d_to_millimetres_u(millimetres_d millimetres);
centimetres_d millimetres_f_to_centimetres_d(millimetres_f millimetres);
centimetres_t millimetres_f_to_centimetres_t(millimetres_f millimetres);
centimetres_u millimetres_f_to_centimetres_u(millimetres_f millimetres);
metres_d millimetres_f_to_metres_d(millimetres_f millimetres);
metres_t millimetres_f_to_metres_t(millimetres_f millimetres);
metres_u millimetres_f_to_metres_u(millimetres_f millimetres);
millimetres_d millimetres_f_to_millimetres_d(millimetres_f millimetres);
millimetres_t millimetres_f_to_millimetres_t(millimetres_f millimetres);
millimetres_u millimetres_f_to_millimetres_u(millimetres_f millimetres);
centimetres_d millimetres_t_to_centimetres_d(millimetres_t millimetres);
centimetres_f millimetres_t_to_centimetres_f(millimetres_t millimetres);
centimetres_u millimetres_t_to_centimetres_u(millimetres_t millimetres);
metres_d millimetres_t_to_metres_d(millimetres_t millimetres);
metres_f millimetres_t_to_metres_f(millimetres_t millimetres);
metres_u millimetres_t_to_metres_u(millimetres_t millimetres);
millimetres_d millimetres_t_to_millimetres_d(millimetres_t millimetres);
millimetres_f millimetres_t_to_millimetres_f(millimetres_t millimetres);
millimetres_u millimetres_t_to_millimetres_u(millimetres_t millimetres);
centimetres_d millimetres_u_to_centimetres_d(millimetres_u millimetres);
centimetres_f millimetres_u_to_centimetres_f(millimetres_u millimetres);
centimetres_t millimetres_u_to_centimetres_t(millimetres_u millimetres);
metres_d millimetres_u_to_metres_d(millimetres_u millimetres);
metres_f millimetres_u_to_metres_f(millimetres_u millimetres);
metres_t millimetres_u_to_metres_t(millimetres_u millimetres);
millimetres_d millimetres_u_to_millimetres_d(millimetres_u millimetres);
millimetres_f millimetres_u_to_millimetres_f(millimetres_u millimetres);
millimetres_t millimetres_u_to_millimetres_t(millimetres_u millimetres);

// Time Conversion Functions
microseconds_f microseconds_d_to_microseconds_f(microseconds_d microseconds);
microseconds_t microseconds_d_to_microseconds_t(microseconds_d microseconds);
microseconds_u microseconds_d_to_microseconds_u(microseconds_d microseconds);
milliseconds_f microseconds_d_to_milliseconds_f(microseconds_d microseconds);
milliseconds_t microseconds_d_to_milliseconds_t(microseconds_d microseconds);
milliseconds_u microseconds_d_to_milliseconds_u(microseconds_d microseconds);
seconds_f microseconds_d_to_seconds_f(microseconds_d microseconds);
seconds_t microseconds_d_to_seconds_t(microseconds_d microseconds);
seconds_u microseconds_d_to_seconds_u(microseconds_d microseconds);
microseconds_d microseconds_f_to_microseconds_d(microseconds_f microseconds);
microseconds_t microseconds_f_to_microseconds_t(microseconds_f microseconds);
microseconds_u microseconds_f_to_microseconds_u(microseconds_f microseconds);
milliseconds_d microseconds_f_to_milliseconds_d(microseconds_f microseconds);
milliseconds_t microseconds_f_to_milliseconds_t(microseconds_f microseconds);
milliseconds_u microseconds_f_to_milliseconds_u(microseconds_f microseconds);
seconds_d microseconds_f_to_seconds_d(microseconds_f microseconds);
seconds_t microseconds_f_to_seconds_t(microseconds_f microseconds);
seconds_u microseconds_f_to_seconds_u(microseconds_f microseconds);
microseconds_d microseconds_t_to_microseconds_d(microseconds_t microseconds);
microseconds_f microseconds_t_to_microseconds_f(microseconds_t microseconds);
microseconds_u microseconds_t_to_microseconds_u(microseconds_t microseconds);
milliseconds_d microseconds_t_to_milliseconds_d(microseconds_t microseconds);
milliseconds_f microseconds_t_to_milliseconds_f(microseconds_t microseconds);
milliseconds_u microseconds_t_to_milliseconds_u(microseconds_t microseconds);
seconds_d microseconds_t_to_seconds_d(microseconds_t microseconds);
seconds_f microseconds_t_to_seconds_f(microseconds_t microseconds);
seconds_u microseconds_t_to_seconds_u(microseconds_t microseconds);
microseconds_d microseconds_u_to_microseconds_d(microseconds_u microseconds);
microseconds_f microseconds_u_to_microseconds_f(microseconds_u microseconds);
microseconds_t microseconds_u_to_microseconds_t(microseconds_u microseconds);
milliseconds_d microseconds_u_to_milliseconds_d(microseconds_u microseconds);
milliseconds_f microseconds_u_to_milliseconds_f(microseconds_u microseconds);
milliseconds_t microseconds_u_to_milliseconds_t(microseconds_u microseconds);
seconds_d microseconds_u_to_seconds_d(microseconds_u microseconds);
seconds_f microseconds_u_to_seconds_f(microseconds_u microseconds);
seconds_t microseconds_u_to_seconds_t(microseconds_u microseconds);
microseconds_f milliseconds_d_to_microseconds_f(milliseconds_d milliseconds);
microseconds_t milliseconds_d_to_microseconds_t(milliseconds_d milliseconds);
microseconds_u milliseconds_d_to_microseconds_u(milliseconds_d milliseconds);
milliseconds_f milliseconds_d_to_milliseconds_f(milliseconds_d milliseconds);
milliseconds_t milliseconds_d_to_milliseconds_t(milliseconds_d milliseconds);
milliseconds_u milliseconds_d_to_milliseconds_u(milliseconds_d milliseconds);
seconds_f milliseconds_d_to_seconds_f(milliseconds_d milliseconds);
seconds_t milliseconds_d_to_seconds_t(milliseconds_d milliseconds);
seconds_u milliseconds_d_to_seconds_u(milliseconds_d milliseconds);
microseconds_d milliseconds_f_to_microseconds_d(milliseconds_f milliseconds);
microseconds_t milliseconds_f_to_microseconds_t(milliseconds_f milliseconds);
microseconds_u milliseconds_f_to_microseconds_u(milliseconds_f milliseconds);
milliseconds_d milliseconds_f_to_milliseconds_d(milliseconds_f milliseconds);
milliseconds_t milliseconds_f_to_milliseconds_t(milliseconds_f milliseconds);
milliseconds_u milliseconds_f_to_milliseconds_u(milliseconds_f milliseconds);
seconds_d milliseconds_f_to_seconds_d(milliseconds_f milliseconds);
seconds_t milliseconds_f_to_seconds_t(milliseconds_f milliseconds);
seconds_u milliseconds_f_to_seconds_u(milliseconds_f milliseconds);
microseconds_d milliseconds_t_to_microseconds_d(milliseconds_t milliseconds);
microseconds_f milliseconds_t_to_microseconds_f(milliseconds_t milliseconds);
microseconds_u milliseconds_t_to_microseconds_u(milliseconds_t milliseconds);
milliseconds_d milliseconds_t_to_milliseconds_d(milliseconds_t milliseconds);
milliseconds_f milliseconds_t_to_milliseconds_f(milliseconds_t milliseconds);
milliseconds_u milliseconds_t_to_milliseconds_u(milliseconds_t milliseconds);
seconds_d milliseconds_t_to_seconds_d(milliseconds_t milliseconds);
seconds_f milliseconds_t_to_seconds_f(milliseconds_t milliseconds);
seconds_u milliseconds_t_to_seconds_u(milliseconds_t milliseconds);
microseconds_d milliseconds_u_to_microseconds_d(milliseconds_u milliseconds);
microseconds_f milliseconds_u_to_microseconds_f(milliseconds_u milliseconds);
microseconds_t milliseconds_u_to_microseconds_t(milliseconds_u milliseconds);
milliseconds_d milliseconds_u_to_milliseconds_d(milliseconds_u milliseconds);
milliseconds_f milliseconds_u_to_milliseconds_f(milliseconds_u milliseconds);
milliseconds_t milliseconds_u_to_milliseconds_t(milliseconds_u milliseconds);
seconds_d milliseconds_u_to_seconds_d(milliseconds_u milliseconds);
seconds_f milliseconds_u_to_seconds_f(milliseconds_u milliseconds);
seconds_t milliseconds_u_to_seconds_t(milliseconds_u milliseconds);
microseconds_f seconds_d_to_microseconds_f(seconds_d seconds);
microseconds_t seconds_d_to_microseconds_t(seconds_d seconds);
microseconds_u seconds_d_to_microseconds_u(seconds_d seconds);
milliseconds_f seconds_d_to_milliseconds_f(seconds_d seconds);
milliseconds_t seconds_d_to_milliseconds_t(seconds_d seconds);
milliseconds_u seconds_d_to_milliseconds_u(seconds_d seconds);
seconds_f seconds_d_to_seconds_f(seconds_d seconds);
seconds_t seconds_d_to_seconds_t(seconds_d seconds);
seconds_u seconds_d_to_seconds_u(seconds_d seconds);
microseconds_d seconds_f_to_microseconds_d(seconds_f seconds);
microseconds_t seconds_f_to_microseconds_t(seconds_f seconds);
microseconds_u seconds_f_to_microseconds_u(seconds_f seconds);
milliseconds_d seconds_f_to_milliseconds_d(seconds_f seconds);
milliseconds_t seconds_f_to_milliseconds_t(seconds_f seconds);
milliseconds_u seconds_f_to_milliseconds_u(seconds_f seconds);
seconds_d seconds_f_to_seconds_d(seconds_f seconds);
seconds_t seconds_f_to_seconds_t(seconds_f seconds);
seconds_u seconds_f_to_seconds_u(seconds_f seconds);
microseconds_d seconds_t_to_microseconds_d(seconds_t seconds);
microseconds_f seconds_t_to_microseconds_f(seconds_t seconds);
microseconds_u seconds_t_to_microseconds_u(seconds_t seconds);
milliseconds_d seconds_t_to_milliseconds_d(seconds_t seconds);
milliseconds_f seconds_t_to_milliseconds_f(seconds_t seconds);
milliseconds_u seconds_t_to_milliseconds_u(seconds_t seconds);
seconds_d seconds_t_to_seconds_d(seconds_t seconds);
seconds_f seconds_t_to_seconds_f(seconds_t seconds);
seconds_u seconds_t_to_seconds_u(seconds_t seconds);
microseconds_d seconds_u_to_microseconds_d(seconds_u seconds);
microseconds_f seconds_u_to_microseconds_f(seconds_u seconds);
microseconds_t seconds_u_to_microseconds_t(seconds_u seconds);
milliseconds_d seconds_u_to_milliseconds_d(seconds_u seconds);
milliseconds_f seconds_u_to_milliseconds_f(seconds_u seconds);
milliseconds_t seconds_u_to_milliseconds_t(seconds_u seconds);
seconds_d seconds_u_to_seconds_d(seconds_u seconds);
seconds_f seconds_u_to_seconds_f(seconds_u seconds);
seconds_t seconds_u_to_seconds_t(seconds_u seconds);

//Angle Conversion Functions
degrees_f degrees_d_to_degrees_f(degrees_d degrees);
degrees_t degrees_d_to_degrees_t(degrees_d degrees);
degrees_u degrees_d_to_degrees_u(degrees_d degrees);
radians_f degrees_d_to_radians_f(degrees_d degrees);
radians_t degrees_d_to_radians_t(degrees_d degrees);
radians_u degrees_d_to_radians_u(degrees_d degrees);
degrees_d degrees_f_to_degrees_d(degrees_f degrees);
degrees_t degrees_f_to_degrees_t(degrees_f degrees);
degrees_u degrees_f_to_degrees_u(degrees_f degrees);
radians_d degrees_f_to_radians_d(degrees_f degrees);
radians_t degrees_f_to_radians_t(degrees_f degrees);
radians_u degrees_f_to_radians_u(degrees_f degrees);
degrees_d degrees_t_to_degrees_d(degrees_t degrees);
degrees_f degrees_t_to_degrees_f(degrees_t degrees);
degrees_u degrees_t_to_degrees_u(degrees_t degrees);
radians_d degrees_t_to_radians_d(degrees_t degrees);
radians_f degrees_t_to_radians_f(degrees_t degrees);
radians_u degrees_t_to_radians_u(degrees_t degrees);
degrees_d degrees_u_to_degrees_d(degrees_u degrees);
degrees_f degrees_u_to_degrees_f(degrees_u degrees);
degrees_t degrees_u_to_degrees_t(degrees_u degrees);
radians_d degrees_u_to_radians_d(degrees_u degrees);
radians_f degrees_u_to_radians_f(degrees_u degrees);
radians_t degrees_u_to_radians_t(degrees_u degrees);
degrees_f radians_d_to_degrees_f(radians_d radians);
degrees_t radians_d_to_degrees_t(radians_d radians);
degrees_u radians_d_to_degrees_u(radians_d radians);
radians_f radians_d_to_radians_f(radians_d radians);
radians_t radians_d_to_radians_t(radians_d radians);
radians_u radians_d_to_radians_u(radians_d radians);
degrees_d radians_f_to_degrees_d(radians_f radians);
degrees_t radians_f_to_degrees_t(radians_f radians);
degrees_u radians_f_to_degrees_u(radians_f radians);
radians_d radians_f_to_radians_d(radians_f radians);
radians_t radians_f_to_radians_t(radians_f radians);
radians_u radians_f_to_radians_u(radians_f radians);
degrees_d radians_t_to_degrees_d(radians_t radians);
degrees_f radians_t_to_degrees_f(radians_t radians);
degrees_u radians_t_to_degrees_u(radians_t radians);
radians_d radians_t_to_radians_d(radians_t radians);
radians_f radians_t_to_radians_f(radians_t radians);
radians_u radians_t_to_radians_u(radians_t radians);
degrees_d radians_u_to_degrees_d(radians_u radians);
degrees_f radians_u_to_degrees_f(radians_u radians);
degrees_t radians_u_to_degrees_t(radians_u radians);
radians_d radians_u_to_radians_d(radians_u radians);
radians_f radians_u_to_radians_f(radians_u radians);
radians_t radians_u_to_radians_t(radians_u radians);

#ifdef __cplusplus
};
#endif

#endif  /* UNITS_H */
