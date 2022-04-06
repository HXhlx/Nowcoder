#include <bits/stdc++.h>
#include <gtest/gtest.h>
using namespace std;
class Solution
{
public:
    /**
     *
     * @param numbers int整型vector
     * @param target int整型
     * @return int整型vector
     */
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        // write code here
        unordered_map<int, int> nums;
        for (int i = 0, n = numbers.size(); i < n; ++i)
            if (nums.find(target - numbers[i]) == nums.end())
                nums[numbers[i]] = i + 1;
            else
                return {nums[target - numbers[i]], i + 1};
        return {};
    }
};