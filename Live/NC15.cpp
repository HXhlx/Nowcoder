#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <TreeNode.h>
using namespace std;
class Solution
{
public:
    /**
     *
     * @param root TreeNode类
     * @return int整型vector<vector<>>
     */
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        // write code here
        queue<TreeNode *> nodes;
        vector<vector<int>> lo;
        if (root)
            nodes.emplace(root);
        while (!nodes.empty())
        {
            lo.emplace_back();
            for (wint_t i = 0, len = nodes.size(); i < len; ++i)
            {
                lo.back().emplace_back(nodes.front()->val);
                if (nodes.front()->left)
                    nodes.emplace(nodes.front()->left);
                if (nodes.front()->right)
                    nodes.emplace(nodes.front()->right);
                nodes.pop();
            }
        }
        return lo;
    }
};