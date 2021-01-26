#
# CMakeLists.txt
# This file was created by EMF4CPP 2.0.0 and is copyrighted by the
# respective user and/or provider of the processed ECORE model.
#
# EMF4CPP is free software. You can obtain it from
# https://github.com/catedrasaes-umu/emf4cpp
#
#

cmake_minimum_required(VERSION 3.5)

if(NOT DEFINED CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE "Release")
endif(NOT DEFINED CMAKE_BUILD_TYPE)

FILE(GLOB CMAKES "${CMAKE_CURRENT_SOURCE_DIR}/*.cmake")

foreach(cmake ${CMAKES})
  include(${cmake})
endforeach(cmake)


