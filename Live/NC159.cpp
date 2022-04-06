#include <bits/stdc++.h>
#include "gtest/gtest.h"
using namespace std;
class Solution
{
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 返回最小的花费代价使得这n户人家连接起来
     * @param n int n户人家的村庄
     * @param m int m条路
     * @param cost intvector<vector<>> 一维3个参数，表示连接1个村庄到另外1个村庄的花费的代价
     * @return int
     */
    int miniSpanningTree(int n, int m, vector<vector<int>> &cost)
    {
        // write code here
        auto cmp = [](vector<int> &a, vector<int> &b)
        { return a.back() < b.back(); };
        int mst = 0;
        priority_queue<vector<int>, vector<vector<int>>, decltype(cmp)> prim(cmp);
        unordered_set<int> res;
        return mst;
    }
};
TEST(MiniSpanningTree, 1)
{
    Solution s;
    vector<vector<int>> cost{{1, 3, 3}, {1, 2, 1}, {2, 3, 1}};
    EXPECT_EQ(s.miniSpanningTree(3, 3, cost), 2);
}
TEST(MiniSpanningTree, 2)
{
    Solution s;
    vector<vector<int>> cost{{1, 2, 1}};
    EXPECT_EQ(s.miniSpanningTree(2, 1, cost), 1);
}