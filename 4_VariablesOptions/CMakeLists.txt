cmake_minimum_required(VERSION 3.22)

project(
    CProjectTemplate
    VERSION 1.0.0
    LANGUAGES C CXX)

set(CMAKE_C_STANDARD            11)
set(CMAKE_C_STANDARD_REQUIRED   ON)
set(CMAKE_C_EXTENSIONS          OFF) 

set(CMAKE_CXX_STANDARD            17)
set(CMAKE_CXX_STANDARD_REQUIRED   ON)
set(CMAKE_CXX_EXTENSIONS          OFF)

option(COMPILE_EXECUTABLE "Whether to compile the executable" OFF)

set(LIBRARY_NAME "Library")
set(EXECUTABLE_NAME "Executable")

add_subdirectory(src)

if (COMPILE_EXECUTABLE)
    add_subdirectory(app)
else()
    message("W/o executable compiling")
endif()
