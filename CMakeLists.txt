cmake_minimum_required(VERSION 3.13)
project(quick-cpp-review)

set(CMAKE_CXX_STANDARD 11)

# Required by GTest
add_subdirectory(external)
# Apps & Libs
add_subdirectory(src)

# Required by GTest
enable_testing()
add_subdirectory(test)

