cmake_minimum_required(VERSION 3.10)
project(SignalProcessing)

# Include directories
include_directories(include)

# Source files
file(GLOB SOURCES "src/*.cpp" "main.cpp")

# Create executable
add_executable(SignalProcessing ${SOURCES})
