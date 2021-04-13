#include <div.hpp>

#include <gtest/gtest.h>

TEST(div, div1)
{
  int ans = 9;
  int result = div(105, 12);

  EXPECT_EQ(result, ans);
}
