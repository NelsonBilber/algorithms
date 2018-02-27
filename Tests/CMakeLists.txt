cmake_minimum_required(VERSION 2.6)

project(Tests LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set (PROJECT_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR})

set(PROJECT_SRCS
${PROJECT_SOURCE_DIR}/catch/catch.hpp
${PROJECT_SOURCE_DIR}/catch/catch_reporter_automake.hpp
${PROJECT_SOURCE_DIR}/catch/catch_reporter_tap.hpp
${PROJECT_SOURCE_DIR}/catch/catch_reporter_teamcity.hpp
${PROJECT_SOURCE_DIR}/TestCase-Searching-QuickSort.cpp
)

add_executable(${PROJECT_NAME} ${PROJECT_SRCS})
