cmake_minimum_required(VERSION 3.18.0)
project(Scripting VERSION 0.1.0)
set(CMAKE_CXX_STANDARD 17)

file(GLOB SRC *.cpp *.hpp)
add_library(Scripting SHARED Scripting.cpp)