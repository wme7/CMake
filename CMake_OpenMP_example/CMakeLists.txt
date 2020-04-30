cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

project(OpenMP_example)

find_package(OpenMP REQUIRED)

add_executable( test.run src/helloOMP.cpp)
target_link_libraries( test.run PUBLIC OpenMP::OpenMP_CXX)
