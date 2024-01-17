cmake_minimum_required(VERSION 3.15)

set(This hello_test)

set(Sources
    hello_test.cpp
)

add_executable(${This} ${Sources})

target_link_libraries(${This} PUBLIC
    gtest_main
    hello
)

add_test(
    NAME ${This}
    COMMAND ${This}
)