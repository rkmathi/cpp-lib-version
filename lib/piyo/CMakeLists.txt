cmake_minimum_required(VERSION 3.0)
#set(CMAKE_VERBOSE_MAKEFILE 1)

project(piyo C)
add_library(piyo STATIC
    src/piyo.c
)
