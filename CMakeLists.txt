cmake_minimum_required(VERSION 3.2 FATAL_ERROR)
project(imageapp VERSION 0.1 LANGUAGES CXX)

# Must use GNUInstallDirs to install libraries into correct
# locations on all platforms.
include(GNUInstallDirs)

# Include Boost as an imported target
find_package(Boost REQUIRED)
add_library(boost INTERFACE IMPORTED)
set_property(TARGET boost PROPERTY
    INTERFACE_INCLUDE_DIRECTORIES ${Boost_INCLUDE_DIR})

# Targets that we develop here
enable_testing()
add_subdirectory(src/image)
add_subdirectory(src/app)
