#include "abc022/c.cc"
#include <gtest/gtest.h>

TEST(abc022c, 1) {
    EXPECT_EQ(13, solve(5, 7, {1, 1, 2, 1, 3, 2, 3}, {2, 4, 3, 5, 5, 5, 4},
                        {2, 1, 7, 12, 2, 3, 5}));
}

TEST(abc022c, 2) {
    EXPECT_EQ(-1, solve(5, 4, {1, 1, 1, 1}, {2, 3, 4, 5}, {1, 1, 1, 1}));
}

TEST(abc022c, 3) {
    EXPECT_EQ(11, solve(10, 12, {1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 7, 8},
                        {4, 9, 5, 6, 7, 10, 7, 6, 8, 8, 9, 10},
                        {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5, 8}));
}
