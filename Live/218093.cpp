#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <TreeNode.h>
using namespace std;
class Solution
{
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 求这可树的最大宽度
     * @param head TreeNode类 树的根节点
     * @return int整型
     */
    int getMaxWidth(TreeNode *head)
    {
        // write code here
        queue<TreeNode *> nodes;
        wint_t gmw = 0;
        if (head)
            nodes.emplace(head);
        while (!nodes.empty())
        {
            wint_t len = nodes.size();
            gmw = max(len, gmw);
            for (wint_t i = 0; i < len; ++i)
            {
                if (nodes.front()->left)
                    nodes.emplace(nodes.front()->left);
                if (nodes.front()->right)
                    nodes.emplace(nodes.front()->right);
                nodes.pop();
            }
        }
        return gmw;
    }
};