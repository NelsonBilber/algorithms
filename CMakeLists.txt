# Distributed under the MIT License (See accompanying file /LICENSE )

# CMake build : global project

cmake_minimum_required (VERSION 3.3)

project (algorithms)

set_property (GLOBAL PROPERTY USE_FOLDERS ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if (WIN32)
    #Visual Studio 2017
    if (MSVC_VERSION GREATER_EQUAL "1900")
            MESSAGE ("=> C++17 Compatible")
            include(CheckCXXCompilerFlag)
            CHECK_CXX_COMPILER_FLAG("/std:c++latest" _cpp_latest_flag_supported)
            if (_cpp_latest_flag_supported)
                    add_compile_options("/std:c++latest")
            endif()
    else()
            MESSAGE ("=> C++14 Compatible")
            set (CMAKE_CXX_STANDARD 14)
            set (CMAKE_CXX_STANDARD_REQUIRED ON)
    endif()
else()

endif()

set (THREADS_PREFER_PTHREAD_FLAG ON)
find_package (Threads REQUIRED)


option(DIR_SAMPLE "Enable building sample subdirectory" ON)
option(DIR_SORT "Enable building sort" ON)
#option(DIR_APP "Enable building main App" ON)


add_subdirectory (third_party EXCLUDE_FROM_ALL)

if(DIR_SORT)
        add_subdirectory (sort)
endif()
#if(DIR_APP)
#	add_subdirectory (app)
#endif()
if(DIR_SAMPLE)
	add_subdirectory (sample)
endif()

enable_testing ()
