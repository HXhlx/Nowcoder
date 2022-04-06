#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <TreeNode.h>
using namespace std;
class Solution
{
    bool is_search(TreeNode *root)
    {
        int ji = INT_MIN;
        for (TreeNode *to = root; to;)
        {
            TreeNode *node = to->left;
            if (node)
            {
                while (node->right && node->right != to)
                    node = node->right;
                if (node->right == to)
                    node->right = nullptr;
                else
                {
                    node->right = to;
                    to = to->left;
                    continue;
                }
            }
            if (to->val < ji)
                return false;
            ji = to->val;
            to = to->right;
        }
        return true;
    }
    bool is_complete(TreeNode *root)
    {
        queue<TreeNode *> ji;
        ji.emplace(root);
        while (ji.front())
        {
            ji.emplace(ji.front()->left);
            ji.emplace(ji.front()->right);
            ji.pop();
        }
        while (!ji.empty())
        {
            if (ji.front())
                return false;
            ji.pop();
        }
        return true;
    }

public:
    /**
     *
     * @param root TreeNode类 the root
     * @return bool布尔型vector
     */
    vector<bool> judgeIt(TreeNode *root)
    {
        // write code here
        bool ic = is_complete(root), is = is_search(root);
        return {is, ic};
    }
};
TEST(JudgeIt, 1)
{
    Solution s;
    vector<bool> res{true, true};
    EXPECT_EQ(s.judgeIt(create({2, 1, 3})), res);
}
TEST(JudgeIt, 2)
{
    Solution s;
    vector<bool> res{true, false};
    EXPECT_EQ(s.judgeIt(create({1, INT_MAX, 2})), res);
}
TEST(JudgeIt, 3)
{
    Solution s;
    vector<bool> res{true, true};
    EXPECT_EQ(s.judgeIt(create({})), res);
}