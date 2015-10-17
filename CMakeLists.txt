#
# Copyright 2015 Andrii Karazhov
# 
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
# 
#     http://www.apache.org/licenses/LICENSE-2.0
# 
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#
#
# @file   CMakeLists.txt
# @author Andrii Karazhov (karazhov.andrey@gmail.com)
# @date   Oct 11, 2015
# @brief  Cmake project of library
 
project(sinv)

cmake_minimum_required(VERSION 2.6)

set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake_scripts")

set(OUTPUT_BIN_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/bin)
set(OUTPUT_LIB_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/lib)
set(OUTPUT_INC_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/include)

include(export_headers)

include_directories(${PROJECT_SOURCE_DIR}/include)
include_directories(${PROJECT_SOURCE_DIR}/src)

list(APPEND INC_LIST "${PROJECT_SOURCE_DIR}/include/HuInvariants.h"
                     "${PROJECT_SOURCE_DIR}/include/CSI.h")

list(APPEND SRC_LIST "${PROJECT_SOURCE_DIR}/src/HuInvariants.cpp"
                     "${PROJECT_SOURCE_DIR}/src/CSI.cpp")

source_group("include" FILES ${INC_LIST})
source_group("src" FILES ${SRC_LIST})

add_library(${PROJECT_NAME} ${SRC_LIST})

export_headers("include/HuInvariants.h")