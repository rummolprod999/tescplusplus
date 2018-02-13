cmake_minimum_required(VERSION 3.8)
project(tescplusplus)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${SOURCE_FILES})
add_executable(tescplusplus ${SOURCE_FILES})