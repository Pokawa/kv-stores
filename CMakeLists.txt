cmake_minimum_required(VERSION 3.13)
project(kv-stores)
set(CMAKE_CXX_STANDARD 20)

add_subdirectory(src)

enable_testing()
add_subdirectory(test)