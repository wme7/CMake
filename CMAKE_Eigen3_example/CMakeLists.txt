cmake_minimum_required (VERSION 3.10 FATAL_ERROR)

project (Eigen3-example)

find_package(Eigen3 REQUIRED NO_MODULE)
include_directories(${EIGEN3_INCLUDE_DIR})

message("${EIGEN3_INCLUDE_DIR}")

add_executable( test.run src/main.cpp)
target_link_libraries( test.run Eigen3::Eigen)
