#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <TreeNode.h>
using namespace std;
class Solution
{
    vector<int> pre, in, post;
    void reverse_post(TreeNode *node)
    {
        TreeNode *pre = nullptr, *cur = node;
        while (cur)
        {
            TreeNode *r = cur->right;
            cur->right = pre;
            pre = cur;
            cur = r;
        }
        swap(cur, pre);
        while (cur)
        {
            TreeNode *r = cur->right;
            cur->right = pre;
            pre = cur;
            post.emplace_back(cur->val);
            cur = r;
        }
    }

public:
    /**
     *
     * @param root TreeNode类 the root of binary tree
     * @return int整型vector<vector<>>
     */
    vector<vector<int>> threeOrders(TreeNode *root)
    {
        // write code here
        for (TreeNode *to = root; to;)
        {
            TreeNode *node = to->left;
            if (node)
            {
                while (node->right && node->right != to)
                    node = node->right;
                if (node->right == to)
                {
                    node->right = nullptr;
                    reverse_post(to->left);
                }
                else
                {
                    node->right = to;
                    pre.emplace_back(to->val);
                    to = to->left;
                    continue;
                }
            }
            else
                pre.emplace_back(to->val);
            in.emplace_back(to->val);
            to = to->right;
        }
        reverse_post(root);
        return {pre, in, post};
    }
};