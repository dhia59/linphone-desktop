# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "D:/Work/V2_Netcom/linphone-desktop/linphone-app"
  "D:/Work/V2_Netcom/linphone-desktop/linphone-app"
  "D:/Work/V2_Netcom/linphone-desktop/OUTPUT"
  "D:/Work/V2_Netcom/linphone-desktop/linphone-app/tmp"
  "D:/Work/V2_Netcom/linphone-desktop/linphone-app/src/linphone-qt-stamp"
  "D:/Work/V2_Netcom/linphone-desktop/linphone-app/src"
  "D:/Work/V2_Netcom/linphone-desktop/linphone-app/src/linphone-qt-stamp"
)

set(configSubDirs Debug;Release;MinSizeRel;RelWithDebInfo)
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "D:/Work/V2_Netcom/linphone-desktop/linphone-app/src/linphone-qt-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "D:/Work/V2_Netcom/linphone-desktop/linphone-app/src/linphone-qt-stamp${cfgdir}") # cfgdir has leading slash
endif()
