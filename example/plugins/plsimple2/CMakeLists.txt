project(plsimple2)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

add_library(${PROJECT_NAME} SHARED plsimple.cpp module.cpp)
set_target_properties(${PROJECT_NAME} PROPERTIES SUFFIX ".pln")

target_compile_definitions(${PROJECT_NAME} PRIVATE _USRDLL)
