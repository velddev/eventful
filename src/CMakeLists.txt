cmake_minimum_required(VERSION 3.9.0)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")
include_directories(../src)

project(Eventful)

file(GLOB_RECURSE SOURCES "./eventful/*.cpp")
file(GLOB_RECURSE HEADERS "./eventful/*.h")

source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${SOURCES} ${HEADERS})
add_library(Eventful ${SOURCES} ${HEADERS})