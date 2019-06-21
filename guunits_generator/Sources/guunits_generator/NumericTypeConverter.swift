/*
 * NumericTypeConverter.swift
 * guunits_generator
 *
 * Created by Callum McColl on 21/6/19.
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

struct NumericTypeConverter {
    
    func convert<Unit: UnitProtocol>(_ str: String, from type: NumericTypes, to unit: Unit, sign: Signs) -> String {
        return self.convert(str, from: type, to: sign.numericType, resultType: "\(unit)_\(sign.rawValue)")
    }
    
    func convert<Unit: UnitProtocol>(_ str: String, from unit: Unit, sign: Signs, to type: NumericTypes) -> String {
        return self.convert(str, from: sign.numericType, to: type, resultType: type.rawValue)
    }
    
    fileprivate func convert(_ str: String, from type: NumericTypes, to otherType: NumericTypes, resultType: String) -> String {
        print("type: \(type), otherType: \(otherType)")
        if type == otherType {
            return self.cast(str, to: resultType)
        }
        if type.isFloat && otherType.isFloat {
            return self.cast(str, to: resultType)
        }
        if type.isFloat != otherType.isFloat {
            var converted = self.convertFloat(str, from: type, to: otherType)
            if type.isFloat {
                converted = otherType.isSigned
                    ? converted
                    : self.convertSign(converted, from: .int, to: otherType)
            } else {
                converted = type.isSigned
                    ? converted
                    : self.convertSign(converted, from: type, to: .int)
            }
            return self.cast(converted, to: resultType)
        }
        if type.isSigned == otherType.isSigned {
            return self.cast(self.convertSize(str, from: type, to: otherType), to: resultType)
        }
        let limitSign = self.convertSign(str, from: type, to: otherType)
        return self.cast(limitSign, to: resultType)
    }
    
    fileprivate func cast(_ str: String, to type: String) -> String {
        return "((\(type)) (\(str)))"
    }
    
    fileprivate func convertFloat(_ str: String, from type: NumericTypes, to otherType: NumericTypes) -> String {
        if type.isFloat {
            return "round(\(type != .double ? self.cast(str, to: "double") : str))"
        }
        return str
    }
    
    fileprivate func convertSign(_ str: String, from type: NumericTypes, to otherType: NumericTypes) -> String {
        let (_, max) = otherType.limits
        if type.isSigned {
            return "MAX(\(self.cast("0", to: type.rawValue)), \(str))"
        }
        return "MIN(\(self.cast(max, to: type.rawValue)), \(str)"
    }
    
    fileprivate func convertSize(_ str: String, from type: NumericTypes, to otherType: NumericTypes) -> String {
        if otherType.largerThan(type) {
            return str
        }
        let (min, max) = otherType.limits
        return "MIN(\(self.cast(max, to: type.rawValue)), MAX(\(self.cast(min, to: type.rawValue)), \(str)))"
    }
    
}