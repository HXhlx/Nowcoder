#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <TreeNode.h>
class Solution
{
    int l, r;
    TreeNode *lca(TreeNode *node)
    {
        if (!node || node->val == l || node->val == r)
            return node;
        TreeNode *left = lca(node->left), *right = lca(node->right);
        if (!left)
            return right;
        if (!right)
            return left;
        return node;
    }

public:
    /**
     *
     * @param root TreeNode类
     * @param o1 int整型
     * @param o2 int整型
     * @return int整型
     */
    int lowestCommonAncestor(TreeNode *root, int o1, int o2)
    {
        // write code here
        l = o1;
        r = o2;
        return lca(root)->val;
    }
};