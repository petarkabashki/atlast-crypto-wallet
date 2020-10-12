
cmake_minimum_required(VERSION 3.18)

project(atlast-crypto VERSION 0.0.1)

add_executable(${PROJECT_NAME}
    main.c
    "atl_primitives/crypto_atl.c"
)

target_link_libraries(${PROJECT_NAME} atlast crypto m)


add_definitions(-g -Wall -DMEMSTAT -DALIGNMENT -DEXPORT -DREADONLYSTRINGS)

include_directories("../atlast-forth/atlast-1.2")
include_directories("../crypto")