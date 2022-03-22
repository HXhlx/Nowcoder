#include <bits/stdc++.h>
#include <gtest/gtest.h>
using namespace std;
class Solution
{
public:
    bool Find(int target, vector<vector<int>> array)
    {
        vector<int>::iterator it = lower_bound(array.front().begin(), array.front().end(), target);
        for (short j = it == array.front().end() ? array.front().size() - 1 : distance(array.front().begin(), it), i = 0, n = array.size(); i < n && j >= 0;)
            if (i < n && array[i][j] < target)
                ++i;
            else if (j >= 0 && array[i][j] > target)
                --j;
            else
                return true;
        return false;
    }
};
TEST(Find, 1)
{
    Solution s;
    EXPECT_TRUE(s.Find(7, {{1, 2, 8, 9}, {2, 4, 9, 12}, {4, 7, 10, 13}, {6, 8, 11, 15}}));
}
TEST(Find, 2)
{
    Solution s;
    EXPECT_FALSE(s.Find(1, {{2}}));
}
TEST(Find, 3)
{
    Solution s;
    EXPECT_FALSE(s.Find(3, {{1, 2, 8, 9}, {2, 4, 9, 12}, {4, 7, 10, 13}, {6, 8, 11, 15}}));
}