cmake_minimum_required(VERSION 3.0)
#set(CMAKE_VERBOSE_MAKEFILE 1)

project(cpp-lib-version CXX)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_executable(cpp-lib-version
    src/main.cpp
)

include_directories(
    lib/fuga/include
    lib/hoge/include
    lib/piyo/include
)

add_subdirectory(lib/fuga)
add_subdirectory(lib/hoge)
add_subdirectory(lib/piyo)

target_link_libraries(cpp-lib-version
    fuga
    hoge
    piyo
)

target_compile_options(cpp-lib-version PRIVATE
    -Wall
    -Werror
)

set_property(TARGET cpp-lib-version PROPERTY CXX_STANDARD 14)
