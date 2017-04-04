cmake_minimum_required(VERSION 3.0)
#set(CMAKE_VERBOSE_MAKEFILE 1)

project(cpp-lib-version CXX)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_executable(cpp-lib-version
    src/main.cpp
)

include_directories(
    lib/hoge/include
)

add_subdirectory(lib/hoge)

target_link_libraries(cpp-lib-version
    hoge
)

target_compile_options(cpp-lib-version PRIVATE
    -std=c++14
    -Wall
    -Wextra
)
