cmake_minimum_required(VERSION 2.6)
project (Sorting)

set (PROJECT_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR})

set(PROJECT1_SRCS
${PROJECT_SOURCE_DIR}/main.cpp
)

add_executable(${PROJECT_NAME} ${PROJECT1_SRCS})
