project(observerex)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

add_library(${PROJECT_NAME} SHARED observerex.cpp module.cpp)
set_target_properties(${PROJECT_NAME} PROPERTIES SUFFIX ".pln")