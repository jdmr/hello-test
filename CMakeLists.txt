cmake_minimum_required(VERSION 3.15)

set(This hello)

project(${This} CXX)

set(CMAKE_CXX_STANDARD 20)

enable_testing()

add_subdirectory(googletest)

set(Headers
    hello.hpp
)

set(Sources
    hello.cpp
)

add_library(${This} STATIC ${Sources} ${Headers})

add_subdirectory(tests)
add_subdirectory(app)