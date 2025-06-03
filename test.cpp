---FILEPATH test.cpp
---FIND
```
```cpp

```
---REPLACE
```
#include <gtest/gtest.h>

// Function to be tested
int Add(int a, int b) {
    return a + b;
}

// Test case for the Add function
TEST(AddTest, PositiveNumbers) {
    EXPECT_EQ(Add(1, 2), 3);
}

TEST(AddTest, NegativeNumbers) {
    EXPECT_EQ(Add(-1, -1), -2);
}

TEST(AddTest, Zero) {
    EXPECT_EQ(Add(0, 0), 0);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
```
---COMPLETE