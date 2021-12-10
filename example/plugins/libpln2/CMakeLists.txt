project(libpln2)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

add_library(${PROJECT_NAME} STATIC libpln2.cpp module.cpp)
target_compile_definitions(${PROJECT_NAME} PRIVATE _LIB)