cmake_minimum_required(VERSION 3.0)
project(MathTest CXX)

if(CMAKE_COMPILER_IS_GNUCXX)
SET(CMAKE_CXX_FALGS -msse4.1)
endif()


file(GLOB CPP_FILES
"*.cpp"
)

add_executable(${PROJECT_NAME} ${CPP_FILES})
set_target_properties(${PROJECT_NAME} PROPERTIES OUTPUT_NAME ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} 
    PUBLIC "${CMAKE_HOME_DIRECTORY}/include"
    PUBLIC "${CMAKE_HOME_DIRECTORY}/lib/catch"
)


target_link_libraries(${PROJECT_NAME} Common Math)