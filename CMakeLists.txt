cmake_minimum_required(VERSION 3.10)

# set the project name
project(algorithms VERSION 1.0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# locate any packages
# i.e. find_package(Threads)

# add compile definitions
# i.e. add_definitions(-DMI_DEFINITION)

# specify directories where the compiler should look for headers
include_directories(${CMAKE_SOURCE_DIR}/include)

# specify the source files to be compiled
# i.e. set(SOURCES src/main.cpp src/other.cpp)
# OR
# file(GLOB SOURCES "src/*.cpp") to grab wildcard files

# add the executable
add_executable(algorithms src/main.cpp src/sorting_algorithms.cpp src/vector_generator.cpp)

# add library
# i.e. add_library(my_library ${SOURCES})

# link libraries if required
# i.e. target_link_libraries(my_project ${CMAKE_THREAD_LIBS_INIT})

# install targets
# i.e. install(TARGETS my_project DESTINATION bin)