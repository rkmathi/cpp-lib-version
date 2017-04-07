cmake_minimum_required(VERSION 3.0)
#set(CMAKE_VERBOSE_MAKEFILE 1)

project(fuga CXX)
add_library(fuga STATIC
    src/fuga.cpp
)
set_property(TARGET fuga PROPERTY CXX_STANDARD 11)
