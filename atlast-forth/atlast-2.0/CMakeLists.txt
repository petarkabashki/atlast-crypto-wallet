
cmake_minimum_required(VERSION 3.18)

project(atlast VERSION 2.0.0)

add_definitions(-g -Wall -DMEMSTAT -DALIGNMENT -DEXPORT -DREADONLYSTRINGS)

add_library("${PROJECT_NAME}"
    atlast.c
)

add_executable(${PROJECT_NAME}-console atlmain.c )

target_link_libraries(${PROJECT_NAME}-console PRIVATE ${PROJECT_NAME} m)