cmake_minimum_required(VERSION 3.6)

project(x3py)

set(OUTPUT_DIR_DEBUG ${CMAKE_CURRENT_BINARY_DIR}/out/Debug)
SET(OUTPUT_DIR_RELEASE ${CMAKE_CURRENT_BINARY_DIR}/out/Release)

include_directories(include)
add_subdirectory(x3manager)

option(BUILD_EXAMPLE "BUILD EXAMPLE" ON)
IF (BUILD_EXAMPLE)
    add_subdirectory(example)
ENDIF()