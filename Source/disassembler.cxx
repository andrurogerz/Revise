/*
 * Copyright 2025 Andrew Rogers
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "disassembler.hxx"

#include <iostream>
#include <format>

namespace Interject::Disassembler {

std::optional<std::span<const uint8_t>> copyInstrs(std::uintptr_t startAddr,
                                                   std::size_t codeSize,
                                                   std::size_t minCopySize) {
  const uint8_t *codeStart = reinterpret_cast<const uint8_t*>(startAddr);
  return std::span<const uint8_t>(codeStart, minCopySize);
}

}; // namespace Interject::Disassembler
