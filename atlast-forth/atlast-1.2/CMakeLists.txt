
cmake_minimum_required(VERSION 3.18)

project(atlast VERSION 1.2.0)

add_definitions(-g -Wall -DMEMSTAT -DALIGNMENT -DEXPORT -DREADONLYSTRINGS  -DNOMEMCHECK)

# -DNOMEMCHECK

add_library("${PROJECT_NAME}"
    atlast.c
)

include_directories(.)

add_executable(${PROJECT_NAME}-console atlmain.c )

target_link_libraries(${PROJECT_NAME}-console PRIVATE ${PROJECT_NAME} m)

target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR})