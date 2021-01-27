cmake_minimum_required (VERSION 3.13)

set(CMAKE_CXX_FLAGS "-Wall -std=c++11")
set(CMAKE_CXX_FLAGS_DEBUG "-g -DDEBUG")
set(CMAKE_CXX_FLAGS_RELEASE "-O3 -funroll-loops")

# test
add_executable(test test.cpp)
target_link_libraries(test EMF4CPP::emf4cpp-ecore EMF4CPP::emf4cpp-ecorecpp AM4CPP::am4cpp-amalthea)
target_include_directories(test PUBLIC EMF4CPP::emf4cpp-ecore EMF4CPP::emf4cpp-ecorecpp AM4CPP::am4cpp-amalthea)
