cmake_minimum_required(VERSION 3.19)

project(
  ch03
  VERSION 1.0.0
  DESCRIPTION "A collection of sample C++ applications and libraries to demonstrate creating libraries and executables"
  LANGUAGES CXX
)

set(CMAKE_EXPORT_COMPILE_COMMANDS on)

add_subdirectory(hello_lib)
add_subdirectory(hello_header_only)
add_subdirectory(hello_object)

add_executable(ch03)
target_sources(ch03 PRIVATE src/main.cc)
target_link_libraries(ch03 PRIVATE hello hello_header_only hello_object)
