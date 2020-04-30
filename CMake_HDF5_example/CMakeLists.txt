cmake_minimum_required (VERSION 3.10 FATAL_ERROR)

project(HDF5-example)

enable_language(CXX)
set(HDF5_USE_STATIC_LIBRARIES ON)

find_package(HDF5 REQUIRED COMPONENTS C CXX)
include_directories(${HDF5_INCLUDE_DIRS})

message("${HDF5_INCLUDE_DIRS}")

add_executable( test.run src/writedata.cpp )
target_link_libraries( test.run ${HDF5_CXX_LIBRARIES} ${HDF5_LIBRARIES} )
