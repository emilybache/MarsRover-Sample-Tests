cmake_minimum_required(VERSION 3.8)
set(TEST_NAME MarsRoverKata.tests)
set(CMAKE_CXX_STANDARD 17)
set(SOURCE_FILES
        main.cpp
        sample1.cpp sample2.cpp sample3.cpp sample4.cpp sample5.cpp sample6.cpp)
add_executable(${TEST_NAME} ${SOURCE_FILES})
find_library(MarsRoverKata.code code ../code)
target_link_libraries(${TEST_NAME} LINK_PUBLIC MarsRoverKata.code)
add_test(NAME ${TEST_NAME} COMMAND ${TEST_NAME})

