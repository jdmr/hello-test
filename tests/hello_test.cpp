#include "../hello.hpp"
#include <gtest/gtest.h>
#include <string>

TEST(hello_test, hello) {
    EXPECT_EQ("Hello World!", hello("World"));
}