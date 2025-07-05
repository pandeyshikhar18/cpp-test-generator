#include <gtest/gtest.h>
#include "math_utils.h"

TEST(MathUtilsTest, Add) {
    EXPECT_EQ(add(2, 3), 5);
    EXPECT_EQ(add(-1, 1), 0);
}

TEST(MathUtilsTest, Subtract) {
    EXPECT_EQ(subtract(5, 3), 2);
    EXPECT_EQ(subtract(0, 1), -1);
}

TEST(MathUtilsTest, AddLargeNumbers) {
    EXPECT_EQ(add(1000000, 2000000), 3000000);
}
