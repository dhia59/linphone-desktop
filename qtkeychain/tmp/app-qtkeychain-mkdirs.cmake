# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "D:/Work/V2_Netcom/linphone-desktop/external/qtkeychain"
  "D:/Work/V2_Netcom/linphone-desktop/WORK/qtkeychain"
  "D:/Work/V2_Netcom/linphone-desktop/qtkeychain"
  "D:/Work/V2_Netcom/linphone-desktop/qtkeychain/tmp"
  "D:/Work/V2_Netcom/linphone-desktop/qtkeychain/src/app-qtkeychain-stamp"
  "D:/Work/V2_Netcom/linphone-desktop/qtkeychain/src"
  "D:/Work/V2_Netcom/linphone-desktop/qtkeychain/src/app-qtkeychain-stamp"
)

set(configSubDirs Debug;Release;MinSizeRel;RelWithDebInfo)
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "D:/Work/V2_Netcom/linphone-desktop/qtkeychain/src/app-qtkeychain-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "D:/Work/V2_Netcom/linphone-desktop/qtkeychain/src/app-qtkeychain-stamp${cfgdir}") # cfgdir has leading slash
endif()
