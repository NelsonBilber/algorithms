# Distributed under the MIT License (See accompanying file /LICENSE )

# CMake build : library

set (SUB_FOLDER_LIB sort)


set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)


#configure variables
set (LIB_NAME ${SUB_FOLDER_LIB}Lib)

#configure directories
set (LIBRARY_MODULE_PATH ${PROJECT_SOURCE_DIR}/${SUB_FOLDER_LIB})
set (LIBRARY_SRC_PATH  "${LIBRARY_MODULE_PATH}/src" )
set (LIBRARY_INCLUDE_PATH  "${LIBRARY_MODULE_PATH}/include")

#set includes
include_directories (${LIBRARY_INCLUDE_PATH} ${THIRD_PARTY_INCLUDE_PATH})

#set sources
file (GLOB LIB_HEADER_FILES "${LIBRARY_INCLUDE_PATH}/*.h")
file (GLOB LIB_SOURCE_FILES "${LIBRARY_SRC_PATH}/*.cpp")

#set library
add_library (${LIB_NAME} STATIC ${LIB_SOURCE_FILES} ${LIB_HEADER_FILES})

#export vars
set (LIBRARY_INCLUDE_PATH  ${LIBRARY_INCLUDE_PATH} PARENT_SCOPE)
set (LIB_NAME ${LIB_NAME} PARENT_SCOPE)

#test
enable_testing ()
add_subdirectory (test)
