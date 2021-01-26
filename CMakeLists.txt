cmake_minimum_required (VERSION 3.13)

if(NOT DEFINED PROJECT_NAME)
  set(AMALTHEA_IS_NOT_SUBPROJECT ON)
endif()

project ("am4cpp" VERSION "1.0.0" LANGUAGES CXX)

include(GNUInstallDirs)

set (CMAKE_CXX_STANDARD 17 CACHE STRING
     "C++ standard to build all targets.")
set (CMAKE_CXX_STANDARD_REQUIRED ON CACHE BOOL
     "The with CMAKE_CXX_STANDARD selected C++ standard is a requirement.")
mark_as_advanced (CMAKE_CXX_STANDARD_REQUIRED)

#set(EMF4CPP_RESOURCE_API ON CACHE BOOL "Enable resource API")
#set(EMF4CPP_USE_QT_5 ON CACHE BOOL "Use QT 5 as a dependency")
#set(EMF4CPP_USE_CPPREST ON CACHE BOOL "Use CPPREST SDK as a dependency")

add_subdirectory ("libs/emf4cpp")
#set (EMF4CPP_DIR "${CMAKE_CURRENT_BINARY_DIR}/libs/emf4cpp/emf4cpp/cmake")

add_subdirectory ("src-gen")
