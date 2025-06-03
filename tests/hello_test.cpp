#include <gtest/gtest.h>
#include "../test.cpp"

TEST(HelloTest, TestFunctionality) {
    EXPECT_EQ(1 + 1, 2);
}

TEST(HelloTest, AnotherTest) {
    EXPECT_TRUE(true);
}