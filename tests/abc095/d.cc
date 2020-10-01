#include <gtest/gtest.h>
#include <bits/stdc++.h>
#include "abc095/d.cc"

TEST(abc095d, 1) {
  vector<ll> x = {2, 9, 16};
  vector<ll> v = {80, 120, 1};
  EXPECT_EQ(191, solve(3, 20, x, v));
}

TEST(abc095d, 2) {
  vector<ll> x = {2, 9, 16};
  vector<ll> v = {80, 1, 120};
  EXPECT_EQ(192, solve(3, 20, x, v));
}

TEST(abc095d, 3) {
  vector<ll> x = {50000000000000};
  vector<ll> v = {1};
  EXPECT_EQ(0, solve(1, 100000000000000, x, v));
}

TEST(abc095d, 4) {
  vector<ll> x = {400000000, 800000000, 1900000000, 2400000000, 2900000000, 3300000000, 3700000000, 3800000000, 4000000000, 4100000000, 5200000000, 6600000000, 8000000000, 9300000000, 9700000000};
  vector<ll> v = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
  EXPECT_EQ(6500000000, solve(15, 10000000000, x, v));
}
