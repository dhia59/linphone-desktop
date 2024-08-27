#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "bctoolbox" for configuration "Debug"
set_property(TARGET bctoolbox APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(bctoolbox PROPERTIES
  IMPORTED_IMPLIB_DEBUG "${_IMPORT_PREFIX}/lib/bctoolbox.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_DEBUG "mbedtls;mbedx509;mbedcrypto;decaf"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/bin/bctoolbox.dll"
  )

list(APPEND _cmake_import_check_targets bctoolbox )
list(APPEND _cmake_import_check_files_for_bctoolbox "${_IMPORT_PREFIX}/lib/bctoolbox.lib" "${_IMPORT_PREFIX}/bin/bctoolbox.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
