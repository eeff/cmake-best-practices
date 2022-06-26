cmake_minimum_required(VERSION 3.1)

project(
  hello_lib
  VERSION 1.0
  DESCRIPTION "A simple C++ project to demonstrate creating executables and libraries in CMake"
  LANGUAGES CXX
)

add_library(hello)

target_sources(
  hello
  PRIVATE src/hello.cc src/internal.cc
)

target_include_directories(
  hello
  PUBLIC include
  PRIVATE src/hello
)

target_compile_features(
  hello
  PUBLIC cxx_std_17
)

set_target_properties(
  hello
  PROPERTIES VERSION ${PROJECT_VERSION}
  SOVERSION ${PROJECT_VERSION_MAJOR}
)
