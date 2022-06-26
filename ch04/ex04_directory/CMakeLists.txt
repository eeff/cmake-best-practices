cmake_minimum_required(VERSION 3.1)

project(
  ex04_directory
  VERSION 1.0
  DESCRIPTION "Chapter 4 Example 04, install directory"
  LANGUAGES CXX
)

include(GNUInstallDirs)

install(
  DIRECTORY               dir1
  DESTINATION             "${CMAKE_INSTALL_LOCALSTATEDIR}"
  FILES_MATCHING PATTERN  "*.x"
)

install(
  DIRECTORY               dir2
  DESTINATION             "${CMAKE_INSTALL_LOCALSTATEDIR}"
  FILES_MATCHING PATTERN  "*.hh" EXCLUDE
  PATTERN                 "*"
)

install(
  DIRECTORY               dir3
  DESTINATION             "${CMAKE_INSTALL_LOCALSTATEDIR}"
  PATTERN                 "bin" EXCLUDE
)
