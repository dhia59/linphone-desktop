# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "D:/work/VoipProjects/Linphone/Saylo/linphone-desktop/linphone-app"
  "D:/work/VoipProjects/Linphone/Saylo/linphone-desktop/linphone-app/linphone-app"
  "D:/work/VoipProjects/Linphone/Saylo/linphone-desktop/linphone-app/OUTPUT"
  "D:/work/VoipProjects/Linphone/Saylo/linphone-desktop/linphone-app/linphone-app/tmp"
  "D:/work/VoipProjects/Linphone/Saylo/linphone-desktop/linphone-app/linphone-app/src/linphone-qt-only-stamp"
  "D:/work/VoipProjects/Linphone/Saylo/linphone-desktop/linphone-app/linphone-app/src"
  "D:/work/VoipProjects/Linphone/Saylo/linphone-desktop/linphone-app/linphone-app/src/linphone-qt-only-stamp"
)

set(configSubDirs Debug;Release;MinSizeRel;RelWithDebInfo)
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "D:/work/VoipProjects/Linphone/Saylo/linphone-desktop/linphone-app/linphone-app/src/linphone-qt-only-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "D:/work/VoipProjects/Linphone/Saylo/linphone-desktop/linphone-app/linphone-app/src/linphone-qt-only-stamp${cfgdir}") # cfgdir has leading slash
endif()
