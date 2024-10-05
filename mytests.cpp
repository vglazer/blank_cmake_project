#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "myfunctions.hpp"

TEST(MyFunctions, Sum)
{
  int x = 1;
  int y = 2;
  EXPECT_EQ(sum(x, y), 3);
}

int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
