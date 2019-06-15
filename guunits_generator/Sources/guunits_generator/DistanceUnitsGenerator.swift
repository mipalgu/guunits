/*
 * DistanceUnitsGenerator.swift 
 * guunits_generator 
 *
 * Created by Callum McColl on 15/06/2019.
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

struct DistanceUnitsGenerator {

    fileprivate let unitDifference: [DistanceUnits: Int] = [
        .millimetres: 10,
        .centimetres: 100
    ]

    func generate(forUnits units: [DistanceUnits]) -> String? {
        var hashSet = Set<DistanceUnits>()
        var unique: [DistanceUnits] = []
        unique.reserveCapacity(units.count)
        units.forEach {
            if hashSet.contains($0) {
                return
            }
            hashSet.insert($0)
            unique.append($0)
        }
        let functions = unique.flatMap { self.generate(unit: $0, against: unique) }
        guard let firstFunction = functions.first else {
            return nil
        }
        return functions.dropFirst().reduce(firstFunction) { $0 + "\n\n" + $1 }
    }

    func generate(unit: DistanceUnits, against allUnits: [DistanceUnits]) -> [String] {
        return Signs.allCases.flatMap { sign in
            allUnits.flatMap { (unit) -> [String] in
                let differentUnits = allUnits.lazy.filter { $0 != unit }
                let increasing = differentUnits.map { self.generate(unit: unit, to: $0, sign: sign.rawValue) }
                let decreasing = differentUnits.map { self.generate(unit: $0, to: unit, sign: sign.rawValue) }
                return Array(increasing) + Array(decreasing)
            }
        }
    }

    func generate(unit: DistanceUnits, to otherUnit: DistanceUnits, sign: String) -> String {
        let allCases = DistanceUnits.allCases
        if unit == otherUnit {
            fatalError("Unable to generate functions from \(unit) to \(otherUnit)")
        }
        guard
            let unitIndex = allCases.firstIndex(where: { $0 == unit }),
            let otherUnitIndex = allCases.firstIndex(where: { $0 == otherUnit })
        else {
            fatalError("Unable to fetch index of \(unit) or \(otherUnit)")
        }
        let increasing = unitIndex < otherUnitIndex
        let smallest = increasing ? unitIndex : otherUnitIndex
        let biggest = increasing ? otherUnitIndex : unitIndex
        let cases = allCases.dropFirst(smallest).dropLast(allCases.count - biggest - 1)
        let difference = cases.reduce(1) { $0 * (self.unitDifference[$1] ?? 1) }
        return """
            \(otherUnit.rawValue) \(unit.rawValue)_to_\(otherUnit.rawValue)(\(unit.rawValue)_\(sign) \(unit.rawValue), \(otherUnit.rawValue)_\(sign) \(otherUnit.rawValue))
            {
                return \(unit.rawValue) \(increasing ? "*" : "/") \(difference);
            }
            """
    }

}
