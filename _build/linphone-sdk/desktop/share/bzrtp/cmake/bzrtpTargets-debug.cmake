#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "bzrtp" for configuration "Debug"
set_property(TARGET bzrtp APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(bzrtp PROPERTIES
  IMPORTED_IMPLIB_DEBUG "${_IMPORT_PREFIX}/lib/bzrtp.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_DEBUG "bctoolbox"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/bin/bzrtp.dll"
  )

list(APPEND _cmake_import_check_targets bzrtp )
list(APPEND _cmake_import_check_files_for_bzrtp "${_IMPORT_PREFIX}/lib/bzrtp.lib" "${_IMPORT_PREFIX}/bin/bzrtp.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
