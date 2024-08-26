# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "D:/Work/V2_Netcom/linphone-desktop/linphone-sdk"
  "D:/Work/V2_Netcom/linphone-desktop/WORK"
  "D:/Work/V2_Netcom/linphone-desktop/linphone-sdk/desktop"
  "D:/Work/V2_Netcom/linphone-desktop/sdk/tmp"
  "D:/Work/V2_Netcom/linphone-desktop/WORK/stamp"
  "D:/Work/V2_Netcom/linphone-desktop/sdk/src"
  "D:/Work/V2_Netcom/linphone-desktop/WORK/stamp"
)

set(configSubDirs Debug;Release;MinSizeRel;RelWithDebInfo)
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "D:/Work/V2_Netcom/linphone-desktop/WORK/stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "D:/Work/V2_Netcom/linphone-desktop/WORK/stamp${cfgdir}") # cfgdir has leading slash
endif()
