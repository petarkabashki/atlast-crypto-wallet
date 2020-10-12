
cmake_minimum_required(VERSION 3.18)

project(atlast VERSION 1.2.0)

add_definitions(-g -Wall -DMEMSTAT -DALIGNMENT -DEXPORT -DREADONLYSTRINGS)

add_library("${PROJECT_NAME}"
    atlast.c
)

add_executable(${PROJECT_NAME}-console atlmain.c )

target_link_libraries(${PROJECT_NAME}-console PRIVATE ${PROJECT_NAME} m)

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})