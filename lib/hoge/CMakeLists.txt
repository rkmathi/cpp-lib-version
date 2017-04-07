cmake_minimum_required(VERSION 3.0)
#set(CMAKE_VERBOSE_MAKEFILE 1)

project(hoge CXX)
add_library(hoge STATIC
    src/hoge.cpp
)
set_property(TARGET hoge PROPERTY CXX_STANDARD 98)
