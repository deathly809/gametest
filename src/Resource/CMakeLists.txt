cmake_minimum_required(VERSION 3.0)
project(Resource CXX)

file(GLOB_RECURSE CPP_FILES
"*.cpp"
)

file(GLOB HPP_FILES
"${CMAKE_HOME_DIRECTORY}/include/${PROJECT_NAME}/*.hpp"
)

include_directories(${PROJECT_NAME}
    PUBLIC "${CMAKE_HOME_DIRECTORY}/include"
    PUBLIC "${CMAKE_HOME_DIRECTORY}/lib/json"
    PUBLIC "${ASSIMP_INCLUDE_DIRS}"
)

add_library(${PROJECT_NAME} STATIC ${CPP_FILES} ${HPP_FILES})

set_target_properties(${PROJET_NAME}
    PROPERTIES POSITION_INDEPENDENT_CODE ON
)

target_link_libraries(${PROJECT_NAME} Render Common Glad ${OPENGL_LIBRARIES} ${ASSIMP_LIBRARIES} ${IRRXML_LIBRARIES} )


