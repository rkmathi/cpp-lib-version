cmake_minimum_required(VERSION 3.0)
#set(CMAKE_VERBOSE_MAKEFILE 1)

project(cpp-lib-version CXX)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

include_directories(
    include
)

add_executable(cpp-lib-version
    src/main.cpp
    src/hoge.cpp
)

target_compile_options(cpp-lib-version PRIVATE
    -std=c++14
    -Wall
    -Wextra
)
