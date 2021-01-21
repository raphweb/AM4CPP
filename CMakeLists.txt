cmake_minimum_required (VERSION 3.13)

project ("amalthea" VERSION "1.0.0" LANGUAGES CXX)

include(GNUInstallDirs)

set (CMAKE_CXX_STANDARD 17 CACHE STRING
     "C++ standard to build all targets.")
set (CMAKE_CXX_STANDARD_REQUIRED ON CACHE BOOL
     "The with CMAKE_CXX_STANDARD selected C++ standard is a requirement.")
mark_as_advanced (CMAKE_CXX_STANDARD_REQUIRED)

#add_subdirectory ("libs/emf4cpp/emf4cpp")
set (EMF4CPP_DIR "${CMAKE_CURRENT_SOURCE_DIR}/libs/emf4cpp/emf4cpp/cmake")


add_subdirectory ("src-gen")
