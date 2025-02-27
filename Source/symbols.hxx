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

#pragma once

#include <cstdint>
#include <span>
#include <string_view>

namespace Interject::Symbols {

struct Descriptor {
  std::uintptr_t addr;
  std::size_t size;
  void *module_handle;
  Descriptor() : addr(0), size(0), module_handle(nullptr) {}
  ~Descriptor();
};

void lookup(std::span<const std::string_view> names,
            std::span<Descriptor> descriptors);

}; // namespace Interject::Symbols
