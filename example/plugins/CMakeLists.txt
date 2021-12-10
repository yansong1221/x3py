

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY_DEBUG ${OUTPUT_DIR_DEBUG}/plugins)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY_DEBUG ${OUTPUT_DIR_DEBUG}/plugins)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG ${OUTPUT_DIR_DEBUG}/plugins)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY_RELEASE ${OUTPUT_DIR_DEBUG}/plugins)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY_RELEASE ${OUTPUT_DIR_DEBUG}/plugins)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE ${OUTPUT_DIR_DEBUG}/plugins)

add_subdirectory(libpln1)
add_subdirectory(libpln2)
add_subdirectory(libspln)
add_subdirectory(plsimple)
add_subdirectory(plsimple2)
add_subdirectory(observerex)
add_subdirectory(pltempl)