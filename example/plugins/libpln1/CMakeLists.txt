project(libpln1)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

add_library(${PROJECT_NAME} STATIC libpln1.cpp module.cpp)
target_compile_definitions(${PROJECT_NAME} PRIVATE _LIB)