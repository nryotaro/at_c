#include "abc025/d.cc"
#include <gtest/gtest.h>

TEST(abc025d, 1) {
    EXPECT_EQ(2, solve({{0, 0, 15, 2, 7},
                        {0, 0, 16, 1, 22},
                        {20, 25, 4, 19, 0},
                        {3, 23, 9, 18, 10},
                        {17, 0, 5, 21, 8}}));
}

TEST(abc025d, 2) {
    EXPECT_EQ(40320, solve({{10, 14, 13, 15, 11},
                            {16, 0, 17, 0, 18},
                            {0, 19, 0, 20, 9},
                            {21, 12, 22, 0, 23},
                            {0, 24, 0, 25, 0}}));
}

TEST(abc025d, 3) {
    EXPECT_EQ(0, solve({{1, 2, 3, 4, 5},
                        {6, 7, 8, 9, 10},
                        {11, 12, 13, 14, 15},
                        {16, 17, 18, 19, 20},
                        {0, 0, 0, 0, 0}}));
}

TEST(abc025d, 4) {
    EXPECT_EQ(1, solve({{1, 25, 2, 24, 3},
                        {23, 4, 22, 5, 21},
                        {6, 20, 7, 19, 8},
                        {18, 9, 17, 10, 16},
                        {11, 15, 12, 14, 13}}));
}
