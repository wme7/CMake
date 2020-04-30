cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

project(MPI_example)

find_package(MPI REQUIRED)
include_directories(${MPI_INCLUDE_PATH})

add_executable( test.run src/helloMPI.cpp)
target_link_libraries( test.run PUBLIC ${MPI_LIBRARIES})
