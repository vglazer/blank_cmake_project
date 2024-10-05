#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "myfunctions.hpp"

using ::testing::IsEmpty;
using ::testing::ElementsAre;
using ::testing::ElementsAreArray;

TEST(MakeVector, Empty)
{
  std::vector<int> v;
  EXPECT_THAT(v, IsEmpty());
}

TEST(MakeVector, Basic)
{
  std::vector<int> v = make_vector(1, 3);
  EXPECT_THAT(v, ElementsAre(1, 1, 1));
  EXPECT_THAT(v, ElementsAreArray({1, 1, 1}));
}

TEST(Sum, Basic)
{
  int x = 1;
  int y = 2;
  EXPECT_EQ(sum(x, y), 3);
}

TEST(Sum, Negative)
{
  int x = 1;
  int y = -2;
  EXPECT_EQ(sum(x, y), -1);
}

int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
