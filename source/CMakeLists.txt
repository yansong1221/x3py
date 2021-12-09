
option(BUILD_EXAMPLE "BUILD EXAMPLE" OFF)
add_subdirectory(core)

IF(BUILD_EXAMPLE)
    add_subdirectory(example)
ENDIF()