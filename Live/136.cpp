#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <TreeNode.h>
using namespace std;
class Solution
{
    vector<int> p;
    vector<vector<int>> ps;
    void DFS(TreeNode *node, int sum)
    {
        if (node)
        {
            sum -= node->val;
            p.emplace_back(node->val);
            if (!node->left && !node->right && sum == 0)
                ps.emplace_back(p);
            DFS(node->left, sum);
            DFS(node->right, sum);
            p.pop_back();
        }
    }

public:
    /**
     *
     * @param root TreeNode类
     * @param sum int整型
     * @return int整型vector<vector<>>
     */
    vector<vector<int>> pathSum(TreeNode *root, int sum)
    {
        // write code here
        DFS(root, sum);
        return ps;
    }
};