cmake_minimum_required(VERSION 3.0.0)
project(atlast-crypto VERSION 0.1.0)

# include(CTest)
# enable_testing()

# add_executable(atlast-crypto main.cpp)

add_subdirectory(crypto)
add_subdirectory("atlast-forth/atlast-1.2")
add_subdirectory(atlast-crypto)

# set(CPACK_PROJECT_NAME ${PROJECT_NAME})
# set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
# include(CPack)
