#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "mbedtls" for configuration "Debug"
set_property(TARGET mbedtls APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(mbedtls PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "C"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/mbedtls.lib"
  )

list(APPEND _cmake_import_check_targets mbedtls )
list(APPEND _cmake_import_check_files_for_mbedtls "${_IMPORT_PREFIX}/lib/mbedtls.lib" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
