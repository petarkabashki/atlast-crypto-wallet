cmake_minimum_required(VERSION 3.0.0)
project(atlast-crypto VERSION 0.1.0)


# add_executable(atlast-crypto main.cpp)

# secp256k1

# include(ExternalProject)
# ExternalProject_Add(secp256k1
#     SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/secp256k1
#     CONFIGURE_COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/secp256k1/configure --prefix=/home/grenada/proj/atlast-crypto/secp256k1-prefix
#     BUILD_COMMAND ${MAKE})

# add_subdirectory(crypto)
add_subdirectory(wallycore)
add_subdirectory("atlast-forth/atlast-1.2")
add_subdirectory("wallycore/src/secp256k1")
add_subdirectory(atlast-crypto)

