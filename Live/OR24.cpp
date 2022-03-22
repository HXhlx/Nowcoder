#include <bits/stdc++.h>
#include <gtest/gtest.h>
using namespace std;
class ShortSubsequence
{
public:
    int findShortest(vector<int> A, int n)
    {
        // write code here
        vector<int> a(A);
        sort(a.begin(), a.end());
        pair<vector<int>::iterator, vector<int>::iterator> s = mismatch(A.begin(), A.end(), a.begin());
        pair<vector<int>::reverse_iterator, vector<int>::reverse_iterator> e = mismatch(A.rbegin(), A.rend(), a.rbegin());
        return max(static_cast<int>(n - distance(A.begin(), s.first) - distance(A.rbegin(), e.first)), 0);
    }
};
TEST(FindShortest, 1)
{
    ShortSubsequence s;
    EXPECT_EQ(s.findShortest({1, 5, 3, 4, 2, 6, 7}, 7), 4);
}