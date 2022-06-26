cmake_minimum_required(VERSION 3.1)

project(
  ex03_file
  VERSION 1.0
  DESCRIPTION "Chapter 4 Example 3, install files/programs"
  LANGUAGES CXX
)

include(GNUInstallDirs)

install(
  FILES       "${CMAKE_CURRENT_LIST_DIR}/ch04_greeter_content"
  DESTINATION "${CMAKE_INSTALL_BINDIR}"
)

install(
  PROGRAMS    "${CMAKE_CURRENT_LIST_DIR}/ch04_greeter.py"
  DESTINATION "${CMAKE_INSTALL_BINDIR}" RENAME ch04_greeter
)
