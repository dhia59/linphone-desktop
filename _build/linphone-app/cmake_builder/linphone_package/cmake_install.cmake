# Install script for directory: C:/Work/VoIP/N_projects/Saylo/linphone-desktop/linphone-app/cmake_builder/linphone_package

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/OUTPUT")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE FILE FILES "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/qtkeychain/bin/EQt5Keychaind.dll")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE FILE FILES
    "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/linphone-sdk/desktop/bin/bctoolbox.dll"
    "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/linphone-sdk/desktop/bin/belcard.dll"
    "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/linphone-sdk/desktop/bin/bellesip.dll"
    "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/linphone-sdk/desktop/bin/belr.dll"
    "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/linphone-sdk/desktop/bin/bv16.dll"
    "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/linphone-sdk/desktop/bin/bzrtp.dll"
    "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/linphone-sdk/desktop/bin/decaf.dll"
    "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/linphone-sdk/desktop/bin/gsm.dll"
    "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/linphone-sdk/desktop/bin/jsoncpp.dll"
    "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/linphone-sdk/desktop/bin/lber.dll"
    "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/linphone-sdk/desktop/bin/ldap.dll"
    "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/linphone-sdk/desktop/bin/liblinphone++.dll"
    "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/linphone-sdk/desktop/bin/liblinphone.dll"
    "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/linphone-sdk/desktop/bin/lime.dll"
    "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/linphone-sdk/desktop/bin/mediastreamer.dll"
    "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/linphone-sdk/desktop/bin/opus.dll"
    "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/linphone-sdk/desktop/bin/ortp.dll"
    "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/linphone-sdk/desktop/bin/soci_core_4_0.dll"
    "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/linphone-sdk/desktop/bin/soci_sqlite3_4_0.dll"
    "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/linphone-sdk/desktop/bin/speex.dll"
    "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/linphone-sdk/desktop/bin/speexdsp.dll"
    "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/linphone-sdk/desktop/bin/sqlite3.dll"
    "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/linphone-sdk/desktop/bin/srtp2.dll"
    "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/linphone-sdk/desktop/bin/xerces-c.dll"
    "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/linphone-sdk/desktop/bin/xml2.dll"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE FILE FILES
    "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/linphone-sdk/desktop/bin/belcard-folder.exe"
    "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/linphone-sdk/desktop/bin/belcard-parser.exe"
    "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/linphone-sdk/desktop/bin/belcard-unfolder.exe"
    "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/linphone-sdk/desktop/bin/belr-compiler.exe"
    "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/linphone-sdk/desktop/bin/belr-parse.exe"
    "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/linphone-sdk/desktop/bin/lp-auto-answer.exe"
    "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/linphone-sdk/desktop/bin/lp-sendmsg.exe"
    "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/linphone-sdk/desktop/bin/lp-test-ecc.exe"
    "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/linphone-sdk/desktop/bin/lpc2xml_test.exe"
    "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/linphone-sdk/desktop/bin/xml2lpc_test.exe"
    "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/linphone-sdk/desktop/bin/yuvconvert.exe"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/plugins/mediastreamer" TYPE FILE FILES
    "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/linphone-sdk/desktop/lib/mediastreamer/plugins/libmsopenh264.dll"
    "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/linphone-sdk/desktop/lib/mediastreamer/plugins/libmsqogl.dll"
    "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/linphone-sdk/desktop/lib/mediastreamer/plugins/libmswasapi.dll"
    "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/linphone-sdk/desktop/lib/mediastreamer/plugins/libmswebrtc.dll"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/belr/grammars" TYPE FILE FILES
    "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/linphone-sdk/desktop/share/Belr/grammars/cpim_grammar"
    "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/linphone-sdk/desktop/share/Belr/grammars/ics_grammar"
    "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/linphone-sdk/desktop/share/Belr/grammars/identity_grammar"
    "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/linphone-sdk/desktop/share/Belr/grammars/sdp_grammar"
    "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/linphone-sdk/desktop/share/Belr/grammars/vcard_grammar"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share" TYPE DIRECTORY OPTIONAL FILES "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/linphone-sdk/desktop/share/images" USE_SOURCE_PERMISSIONS)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sounds/Saylo" TYPE DIRECTORY FILES "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/linphone-sdk/desktop/share/sounds/linphone/" USE_SOURCE_PERMISSIONS)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/Saylo" TYPE FILE FILES "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/linphone-sdk/desktop/share/Linphone/rootca.pem")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/Saylo" TYPE FILE FILES "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/linphone-app/cmake_builder/linphone_package/../../assets/linphonerc-factory")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE FILE FILES "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/linphone-app/cmake_builder/linphone_package/../../qt.conf")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/Saylo" TYPE DIRECTORY FILES "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/linphone-app/cmake_builder/linphone_package/../../assets/assistant" USE_SOURCE_PERMISSIONS)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE STATIC_LIBRARY OPTIONAL FILES "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/linphone-app/app-plugin.lib")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE STATIC_LIBRARY OPTIONAL FILES "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/linphone-app/app-plugin.lib")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE STATIC_LIBRARY OPTIONAL FILES "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/linphone-app/app-plugin.lib")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE STATIC_LIBRARY OPTIONAL FILES "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/linphone-app/app-plugin.lib")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/linphone-app/app-plugin.dll")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/linphone-app/app-plugin.dll")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/linphone-app/app-plugin.dll")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/linphone-app/app-plugin.dll")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE PROGRAM FILES
    "C:/Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Redist/MSVC/14.16.27012/x86/Microsoft.VC141.CRT/msvcp140.dll"
    "C:/Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Redist/MSVC/14.16.27012/x86/Microsoft.VC141.CRT/msvcp140_1.dll"
    "C:/Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Redist/MSVC/14.16.27012/x86/Microsoft.VC141.CRT/msvcp140_2.dll"
    "C:/Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Redist/MSVC/14.16.27012/x86/Microsoft.VC141.CRT/vcruntime140.dll"
    "C:/Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Redist/MSVC/14.16.27012/x86/Microsoft.VC141.CRT/concrt140.dll"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE DIRECTORY FILES "")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE FILE FILES "C:/Program Files (x86)/Microsoft Visual Studio/2017/Community/Common7/Tools/ucrtbase.dll")
endif()

