/*
 * units.c 
 * units 
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

seconds_t milliseconds_to_seconds(milliseconds_t milliseconds)
{
    return milliseconds * 1000;
}

milliseconds_t microseconds_to_milliseconds(microseconds_t microseconds)
{
    return microseconds * 1000;
}

seconds_t microseconds_to_seconds(microseconds_t microseconds)
{
    return milliseconds_to_seconds(
        microseconds_to_milliseconds(microseconds)
    );
}

milliseconds_t seconds_to_milliseconds(seconds_t seconds)
{
    return seconds / 1000;
}

microseconds_t milliseconds_to_microseconds(milliseconds_t milliseconds)
{
    return milliseconds / 1000;
}

microseconds_t seconds_to_microseconds(seconds_t seconds)
{
    return milliseconds_to_microseconds(
        seconds_to_milliseconds(seconds)
    );
}

radians_t degrees_to_radians(degrees_t degrees)
{
    return ((radians_t) (((double) degrees) * M_PI / 180.0));
}

degrees_t radians_to_degrees(radians_t radians)
{
    return ((degrees_t) (180.0 / M_PI * ((double) radians)));
}

centimetres_t millimetres_to_centimetres(millimetres_t millimetres)
{
    return (centimetres_t) (millimetres * 10);
}

metres_t centimetres_to_metres(centimetres_t centimetres)
{
    return centimetres * 100;
}

metres_t millimetres_to_metres(millimetres_t millimetres)
{
    return centimetres_to_metres(
        millimetres_to_centimetres(millimetres)
    );
}

centimetres_t metres_to_centimetres(metres_t metres)
{
    return metres / 100;
}

millimetres_t centimetres_to_millimetres(centimetres_t centimetres)
{
    return ((millimetres_t) centimetres) / 10;
}

millimetres_t metres_to_millimetres(metres_t metres)
{
    return centimetres_to_millimetres(
        metres_to_centimetres(metres)
    );
}
