# How to use `MPI` with CMake

## installation of library

* Install the OpenMPI distribution from [here](https://www.open-mpi.org/software/ompi/v4.0/)

## Usage the `MPI` library with cmake

1. cd /to/CMake_example/
2. Copy and paste the following instructions in your terminal:
    ```console
    mkdir build
    cd build
    cmake ..
    make
    mpirun -n 2 test.run
    ```