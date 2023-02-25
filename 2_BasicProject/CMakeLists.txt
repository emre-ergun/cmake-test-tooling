cmake_minimum_required(VERSION 3.22)

project(
    CProjectTemplate
    VERSION 1.0.0
    LANGUAGES C CXX)

add_library(Library STATIC my_lib.c)

add_executable(Executable main.c)

target_link_libraries(Executable PUBLIC Library)