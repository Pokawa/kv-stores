cmake_minimum_required(VERSION 3.13)
project(KVStores)
set(CMAKE_CXX_STANDARD 20)

add_subdirectory(include)

option(BUILD_TESTS "Build tests for library" ON)
if (BUILD_TESTS)
    enable_testing()
    add_subdirectory(test)
endif ()
