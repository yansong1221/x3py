
option(BUILD_EXAMPLE "BUILD EXAMPLE" ON)
add_subdirectory(core)

IF(BUILD_EXAMPLE)
    add_subdirectory(example)
ENDIF()