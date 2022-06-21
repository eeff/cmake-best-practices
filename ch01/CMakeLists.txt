cmake_minimum_required(VERSION 3.0)

project(
  "chapter 1"
  VERSION 1.0.0
  DESCRIPTION "A simple project to demonstrate basic CMake usage"
  LANGUAGES CXX)

add_executable(ch01)
target_sources(ch01 PRIVATE src/main.cc)
