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


#ifdef __cplusplus
extern "C" {
#endif

// Time units.
typedef int seconds_t;
typedef int milliseconds_t;
typedef int microseconds_t;

// Angle units.
typedef int16_t degrees_t;
typedef float radians_t;

// Distance units.
typedef int16_t metres_t;
typedef int16_t centimetres_t;
typedef int32_t millimetres_t;

// Time conversion functions.
seconds_t milliseconds_to_seconds(milliseconds_t milliseconds);
milliseconds_t microseconds_to_milliseconds(microseconds_t microseconds);
seconds_t microseconds_to_seconds(microseconds_t microseconds);
milliseconds_t seconds_to_milliseconds(seconds_t seconds);
microseconds_t milliseconds_to_microseconds(milliseconds_t milliseconds);
microseconds_t seconds_to_microseconds(seconds_t seconds);

// Angle conversion functions.
radians_t degrees_to_radians(degrees_t degrees);
degrees_t radians_to_degrees(radians_t radians);

// Distance conversion functions.
centimetres_t millimetres_to_centimetres(millimetres_t millimetres);
metres_t centimetres_to_metres(centimetres_t centimetres);
metres_t millimetres_to_metres(millimetres_t millimetres);
centimetres_t metres_to_centimetres(metres_t metres);
millimetres_t centimetres_to_millimetres(centimetres_t centimetres);
millimetres_t metres_to_millimetres(metres_t metres);

#ifdef __cplusplus
};
#endif

#endif  /* UNITS_H */
