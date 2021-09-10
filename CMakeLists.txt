#
# Auto-generated cmake build file for guunits
#
cmake_minimum_required(VERSION 3.15.0)
project(guunits )
enable_testing()
add_subdirectory(guunits)
add_subdirectory(guunits_generator)
include( GNUInstallDirs )
add_compile_definitions()
include_directories($<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>/./ $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}> $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>/.. $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}>/.. $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}> $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}/guunits> ../../Common /usr/local/include)
link_directories(/usr/local/lib)
