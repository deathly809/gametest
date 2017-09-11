#
# https://stackoverflow.com/questions/16398937/cmake-and-finding-other-projects-and-their-dependencies
#
cmake_minimum_required(VERSION 3.0)
project(Jerobins)

# Output directories
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/build)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

# Include folders
set(PROJECT_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)
include_directories("${PROJECT_INCLUDE_DIR}")
include_directories("${PROJECT_SOURCE_DIR}/lib/json")

# GLEW
set(GLEW_ROOT "${CMAKE_HOME_DIRECTORY}/lib/glew")
set(GLEW_INCLUDE "${CMAKE_HOME_DIRECTORY}/lib/glew")
set(GLEW_LIB "${CMAKE_HOME_DIRECTORY}/lib/glew/lib/Release/Win32")
set(GLEW_DLL "${CMAKE_HOME_DIRECTORY}/lib/glew/bin/Release/Win32/")

# Remove 'lib' prefix for shared libraries on Windows
if (WIN32)
    set(APPEND CMAKE_SHARED_LIBRARY_PREFIX "")
    list(APPEND CMAKE_PREFIX_PATH ${GLEW_LIB} ${GLEW_INCLUDE} ${GLEW_DLL})
    list(APPEND CMAKE_LIBRARY_PATH ${GLEW_LIB} ${GLEW_INCLUDE} ${GLEW_DLL})
endif ()


add_subdirectory(src/Common)
add_subdirectory(src/Engine)
add_subdirectory(src/Math)
add_subdirectory(src/Render)
add_subdirectory(src/Resource)
add_subdirectory(src/Main)