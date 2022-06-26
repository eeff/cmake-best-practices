cmake_minimum_required(VERSION 3.1)

project(
  ex01_executable
  VERSION 1.0
  DESCRIPTION "Chapter 4 Example 01, installable executable project"
  LANGUAGES CXX
)

add_executable(ex01_executable)

target_sources(ex01_executable PRIVATE src/main.cc)

target_compile_features(ex01_executable PRIVATE cxx_std_11)

install(TARGETS ex01_executable)
