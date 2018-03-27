project(Eventful)

cmake_minimum_required(VERSION 3.9.0)

##### Compile Details ####
option(ARCH_WIN64 "Build for x64." ON)
option(EVENTFUL_TESTS "Build tests." ON)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

##### COMPILER SETTINGS #####
set (CMAKE_CXX_STANDARD 17)
message(STATUS "Using C++"  ${CMAKE_CXX_STANDARD})

##### OUTPUT DIRECTORIES #####
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

##### SRC/TESTS SUB-DIRECTORIES #####
add_subdirectory(src)

if (EVENTFUL_TESTS)
	add_subdirectory(tests)
endif()