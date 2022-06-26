cmake_minimum_required(VERSION 3.1)

project(
  ex02_static
  VERSION 1.0
  DESCRIPTION "Chapter 4 Example 02, installable static library"
  LANGUAGES CXX
)

add_library(ex02_static STATIC)

target_sources(ex02_static PRIVATE src/lib.cc)

target_include_directories(ex02_static PUBLIC include)

target_compile_features(ex02_static PRIVATE cxx_std_11)

include(GNUInstallDirs)

install(TARGETS ex02_static)

# install the header files, since header files are not listed as output artifacts
# the trailing slash in the DIRECTORY argument causes CMake to copy the folder's content
install(
  DIRECTORY include/
  DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}"
)
