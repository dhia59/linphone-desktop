# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/linphone-app"
  "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/linphone-app"
  "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/OUTPUT"
  "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/linphone-app/tmp"
  "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/linphone-app/src/linphone-qt-only-stamp"
  "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/linphone-app/src"
  "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/linphone-app/src/linphone-qt-only-stamp"
)

set(configSubDirs Debug;Release;MinSizeRel;RelWithDebInfo)
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/linphone-app/src/linphone-qt-only-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "C:/Work/VoIP/N_projects/Saylo/linphone-desktop/build/linphone-app/src/linphone-qt-only-stamp${cfgdir}") # cfgdir has leading slash
endif()
