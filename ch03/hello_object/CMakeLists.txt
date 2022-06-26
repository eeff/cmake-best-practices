cmake_minimum_required(VERSION 3.12)

project(
  hello_object
  VERSION 1.0.0
  DESCRIPTION "Chapter 3 object library example"
  LANGUAGES CXX
)

add_library(hello_object OBJECT)

target_sources(
  hello_object
  PRIVATE src/hello.cc
)

target_include_directories(
  hello_object
  PUBLIC include
  PRIVATE src/
)

target_compile_features(
  hello_object
  PUBLIC cxx_std_17
)
