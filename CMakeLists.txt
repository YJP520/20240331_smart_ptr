cmake_minimum_required(VERSION 3.25)
project(20240331_smart_ptr)

set(CMAKE_CXX_STANDARD 17)

include_directories(./)

file(GLOB_RECURSE SOURCES "utility/*.cpp")

add_executable(20240331_smart_ptr main.cpp)
