# How to use `OpenMP` with CMake

## installation of library

* In MacOS:
    ```console
    brew install libomp
    ```
* In Linux (Ubuntu) there is no need as `gcc` already supports `-fopenmp`

## Usage the `OMP` library with cmake

1. cd /to/CMake_example/
2. Copy and paste the following instructions in your terminal:
    ```console
    mkdir build
    cd build
    cmake ..
    make
    ./test.run
    ```
