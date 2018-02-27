#Links
#How to build Multiprojects with Cmake
#https://rix0r.nl/blog/2015/08/13/cmake-guide/
#http://techminded.net/blog/modular-c-projects-with-cmake.html
#https://www.johnlamp.net/cmake-tutorial-4-libraries-and-subdirectories.html
#http://derekmolloy.ie/hello-world-introductions-to-cmake/
#https://www.codeproject.com/Articles/1181455/A-CMake-tutorial-for-Visual-Cplusplus-developers

cmake_minimum_required(VERSION 2.6)
project (Algorithms LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

#Visual Studio 2017
if (MSVC_VERSION GREATER_EQUAL "1900")
    include(CheckCXXCompilerFlag)
    CHECK_CXX_COMPILER_FLAG("/std:c++latest" _cpp_latest_flag_supported)
    if (_cpp_latest_flag_supported)
        add_compile_options("/std:c++latest")
    endif()
endif()


#Enable threads
#set(CMAKE_THREAD_PREFER_PTHREAD TRUE)
#find_package(Threads REQUIRED)
#if(CMAKE_USE_PTHREADS_INIT)
#    set(CMAKE_C_FLAGS ${CMAKE_C_FLAGS} "-pthread")
#else()
#    message (STATUS "Cannot enable multithreading.")
#endif()


set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/build)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(PROJECT_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)

option(DIR_SEARCH "Enable building searching" ON)
option(DIR_SORTING "Enable building sorting" ON)
option(DIR_TESTS "Enable building Testings" ON)

if(DIR_SEARCH)
  add_subdirectory(Searching)
endif()
if(DIR_SORTING)
  add_subdirectory(Sorting)
endif()
if(DIR_TESTS)
  add_subdirectory(Tests)
endif()
