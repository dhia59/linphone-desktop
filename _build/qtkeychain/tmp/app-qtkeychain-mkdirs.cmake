# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/external/qtkeychain"
  "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/WORK/qtkeychain"
  "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/qtkeychain"
  "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/qtkeychain/tmp"
  "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/qtkeychain/src/app-qtkeychain-stamp"
  "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/qtkeychain/src"
  "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/qtkeychain/src/app-qtkeychain-stamp"
)

set(configSubDirs Debug;Release;MinSizeRel;RelWithDebInfo)
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/qtkeychain/src/app-qtkeychain-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/qtkeychain/src/app-qtkeychain-stamp${cfgdir}") # cfgdir has leading slash
endif()
