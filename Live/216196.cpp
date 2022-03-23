#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <Interval.h>
using namespace std;
class Solution
{
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * @param intervals Interval类vector
     * @param newInterval Interval类
     * @return Interval类vector
     */
    vector<Interval> insert(vector<Interval> &intervals, Interval newInterval)
    {
        // write code here
        vector<Interval> si;
        for (Interval &i : intervals)
            if (newInterval.start > i.end)
                si.emplace_back(i);
            else if (newInterval.end < i.start)
            {
                si.emplace_back(newInterval);
                si.emplace_back(i);
                newInterval = {INT_MAX, INT_MAX};
            }
            else
                newInterval = {min(newInterval.start, i.start), max(newInterval.end, i.end)};
        if (newInterval.start != INT_MAX)
            si.emplace_back(newInterval);
        return si;
    }
};
TEST(Insert, 1)
{
    Solution s;
    vector<Interval> intervals, si = s.insert(intervals, Interval(5, 7)), res = {Interval(5, 7)};
    ASSERT_EQ(si.size(), res.size());
    for (wint_t i = 0; i < si.size(); ++i)
    {
        EXPECT_EQ(si[i].start, res[i].start);
        EXPECT_EQ(si[i].end, res[i].end);
    }
}