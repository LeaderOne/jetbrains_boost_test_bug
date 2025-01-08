cmake_minimum_required(VERSION 3.22)
project(boost_test_dmo)

set(CMAKE_CXX_STANDARD 17)

find_package (Boost REQUIRED COMPONENTS unit_test_framework)
include_directories (${Boost_INCLUDE_DIRS})

add_library(tester-core main.cpp)

target_link_libraries(tester-core PUBLIC ${Boost_LIBRARIES})

add_executable(boost_test_dmo main.cpp
        src/main/TestAThing.cpp
        src/main/TestAThing.h
        src/test/test_thing.cpp)
