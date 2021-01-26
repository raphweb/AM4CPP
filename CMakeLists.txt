cmake_minimum_required (VERSION 3.13)

project ("am4cpp" VERSION "1.0.0" LANGUAGES CXX)

include(GNUInstallDirs)


option(AM4CPP_TESTS "Build test programs" OFF)

#set(EMF4CPP_RESOURCE_API ON CACHE BOOL "Enable resource API")
#set(EMF4CPP_USE_QT_5 ON CACHE BOOL "Use QT 5 as a dependency")
#set(EMF4CPP_USE_CPPREST ON CACHE BOOL "Use CPPREST SDK as a dependency")

add_subdirectory(libs/emf4cpp)
#set (EMF4CPP_DIR "${CMAKE_CURRENT_BINARY_DIR}/libs/emf4cpp/emf4cpp/cmake")

add_subdirectory(src-gen)

if(AM4CPP_TESTS)
  add_subdirectory(tests)
endif(AM4CPP_TESTS)
