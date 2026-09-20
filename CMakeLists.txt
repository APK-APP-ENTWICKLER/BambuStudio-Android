cmake_minimum_required(VERSION 3.10.2)
project("bambustudiomobile")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(bambustudio_core SHARED native-lib.cpp)

# Hier sagen wir CMake exakt, wo die Android-Bibliotheken im System liegen
find_library(log-lib log PATHS /system/lib64 /system/lib)
find_library(android-lib android PATHS /system/lib64 /system/lib)
find_library(egl-lib EGL PATHS /system/lib64 /system/lib)
find_library(gles-lib GLESv3 PATHS /system/lib64 /system/lib)

target_link_libraries(bambustudio_core
                      ${log-lib}
                      ${android-lib}
                      ${egl-lib}
                      ${gles-lib})
