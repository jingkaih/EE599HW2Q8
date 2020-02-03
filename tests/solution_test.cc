#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(SortThanRearrangeShould, HandleOdd) {
  Solution solution;
  std::vector<int> vect = {637, 231, 123, 43, 69, 43, 900, 10, 7, 21, 99, 0, 500};
  solution.SortThenRearrange(vect);
  std::vector<int> expected = {43, 43, 21,10, 7, 0, 69, 900, 637, 500, 231, 123, 99};
  EXPECT_EQ(expected, vect);
}
TEST(SortThanRearrangeShould, HandleEven) {
  Solution solution;
  std::vector<int> vect = {637, 231, 123, 43, 69, 43, 900, 10, 21, 99, 0, 500};
  solution.SortThenRearrange(vect);
  std::vector<int> expected = {69, 43, 43, 21, 10, 0, 900, 637, 500, 231, 123, 99};
  EXPECT_EQ(expected, vect);
}