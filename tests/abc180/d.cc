#include "abc180/d.cc"

#include "gtest/gtest.h"

TEST(abc180d, 1) {
  EXPECT_EQ(2, solve(4, 20, 2, 10));
}

TEST(abc180d, 2) {
  EXPECT_EQ(1000000007, solve(1, 1000000000000000000, 10, 1000000000));
}

TEST(abc180d, 3) {
  EXPECT_EQ(3377699, solve(1125899906842624, 4503599627370497, 536870912, 1000000000));
}
