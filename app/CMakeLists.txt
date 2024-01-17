cmake_minimum_required(VERSION 3.15)

set(This hello_app)

project(${This} CXX)

set(CMAKE_CXX_STANDARD 20)

set(Sources
    app.cpp
)

add_executable(${This} ${Sources})

target_link_libraries(${This} PUBLIC
    hello
)
