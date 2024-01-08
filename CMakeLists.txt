cmake_minimum_required(VERSION 3.10)
project(Patobroker VERSION 1.0)

# C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(include)
include_directories(include/security)
include_directories(include/gui)
include_directories(include/gui/qt)
include_directories(include/api)

# Find the QtWidgets library
find_package(Qt6 COMPONENTS Core Gui Widgets REQUIRED)

# Automatically add all source files from the src directory
file(GLOB_RECURSE SOURCES "src/*.cpp")

# Define the executable
add_executable(patobroker ${SOURCES})

# Use the Widgets module from Qt 6
target_link_libraries(patobroker Qt6::Core Qt6::Gui Qt6::Widgets)