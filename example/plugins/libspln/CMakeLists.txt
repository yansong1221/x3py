project(libspln)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

add_library(${PROJECT_NAME} SHARED libspln.cpp module.cpp)
set_target_properties(${PROJECT_NAME} PROPERTIES SUFFIX ".pln")
target_link_libraries(${PROJECT_NAME} libpln2 libpln1)