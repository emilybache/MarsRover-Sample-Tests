cmake_minimum_required(VERSION 3.8)
project(MarsRoverKata.code CXX)
set(SOURCE_FILES
        mars_rover.h)
add_library(${PROJECT_NAME} ${SOURCE_FILES})
target_include_directories(${PROJECT_NAME} INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

