cmake_minimum_required(VERSION 3.20.0)
project(exercise1 VERSION 0.1.0)

# Compilation flags
add_compile_options(-Wall)

# Add executable
add_executable(exercise1 exercise1/src/exercise1.cpp)

# Set C++ standard to C++17
set_property(TARGET exercise1 PROPERTY CXX_STANDARD 17)
