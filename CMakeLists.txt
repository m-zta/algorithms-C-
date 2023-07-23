cmake_minimum_required(VERSION 3.10)

# set the project name
project(algorithms)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# add the include directory to the include path
include_directories(${CMAKE_SOURCE_DIR}/include)

# add the executable
add_executable(algorithms src/main.cpp src/sorting_algorithms.cpp src/vector_generator.cpp)
