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

option(COMPILE_EXECUTABLE "Whether to compile the executable" ON)

set(LIBRARY_NAME "Library")
set(EXECUTABLE_NAME "Executable")

set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake/")
include(AddGitSubmodule)
include(FetchContent)

FetchContent_Declare(
    nlohmann_json
    GIT_REPOSITORY  https://github.com/nlohmann/json
    GIT_TAG v3.11.2
    GIT_SHALLOW TRUE)

FetchContent_MakeAvailable(nlohmann_json)

FetchContent_Declare(
    fmt
    GIT_REPOSITORY  https://github.com/fmtlib/fmt
    GIT_TAG 9.1.0
    GIT_SHALLOW TRUE)

FetchContent_MakeAvailable(fmt)

FetchContent_Declare(
    spdlog
    GIT_REPOSITORY  https://github.com/gabime/spdlog
    GIT_TAG v1.11.0
    GIT_SHALLOW TRUE)

FetchContent_MakeAvailable(spdlog)

FetchContent_Declare(
    cxxopts
    GIT_REPOSITORY  https://github.com/jarro2783/cxxopts
    GIT_TAG v3.0.0
    GIT_SHALLOW TRUE)

FetchContent_MakeAvailable(cxxopts)

FetchContent_Declare(
    Catch2
    GIT_REPOSITORY  https://github.com/catchorg/Catch2
    GIT_TAG v2.13.9
    GIT_SHALLOW TRUE)

FetchContent_MakeAvailable(Catch2)

add_subdirectory(configured)
add_subdirectory(external)
add_subdirectory(src)

if (COMPILE_EXECUTABLE)
    add_subdirectory(app)
else()
    message("W/o executable compiling")
endif()
