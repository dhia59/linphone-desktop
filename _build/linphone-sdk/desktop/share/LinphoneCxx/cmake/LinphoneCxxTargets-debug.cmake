#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "linphone++" for configuration "Debug"
set_property(TARGET linphone++ APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(linphone++ PROPERTIES
  IMPORTED_IMPLIB_DEBUG "${_IMPORT_PREFIX}/lib/liblinphone++.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_DEBUG "bctoolbox;bellesip;linphone"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/bin/liblinphone++.dll"
  )

list(APPEND _cmake_import_check_targets linphone++ )
list(APPEND _cmake_import_check_files_for_linphone++ "${_IMPORT_PREFIX}/lib/liblinphone++.lib" "${_IMPORT_PREFIX}/bin/liblinphone++.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
