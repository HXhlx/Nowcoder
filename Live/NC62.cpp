#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <TreeNode.h>
using namespace std;
class Solution
{
    bool flag = true;
    short DFS(TreeNode *node)
    {
        if (!node)
            return 0;
        short l = DFS(node->left), r = DFS(node->right);
        if (abs(l - r) > 1)
            flag = false;
        return max(l, r) + 1;
    }

public:
    bool IsBalanced_Solution(TreeNode *pRoot)
    {
        DFS(pRoot);
        return flag;
    }
};