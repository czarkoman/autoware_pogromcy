// Copyright YEAR MAINTAINER_NAME
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef HELLO_WORLD__HELLO_WORLD_HPP_
#define HELLO_WORLD__HELLO_WORLD_HPP_

#include <cstdint>

#include "hello_world/visibility_control.hpp"


namespace hello_world
{

class HELLO_WORLD_PUBLIC HelloWorld
{
public:
  HelloWorld();
  void setParameters(int64_t param_name);
  int64_t printHello() const;

private:
  int64_t param_name_{123};
};

}  // namespace hello_world

#endif  // HELLO_WORLD__HELLO_WORLD_HPP_
