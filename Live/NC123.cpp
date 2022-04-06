#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <TreeNode.h>
using namespace std;
class Solution
{
    wint_t cur = 0, len;
    TreeNode *deserialize(char *str)
    {
        string d;
        while (++cur < len && str[cur] != '|')
            d += str[cur];
        TreeNode *node = d.empty() ? nullptr : new TreeNode(stoi(d));
        if (node)
        {
            node->left = deserialize(str);
            node->right = deserialize(str);
        }
        return node;
    }

public:
    char *Serialize(TreeNode *root)
    {
        string s("|");
        for (TreeNode *to = root; to;)
        {
            TreeNode *node = to->left;
            if (node)
            {
                while (node->right && node->right != to)
                    node = node->right;
                if (node->right == to)
                {
                    s += '|';
                    node->right = nullptr;
                }
                else
                {
                    node->right = to;
                    s += to_string(to->val) + '|';
                    to = to->left;
                    continue;
                }
            }
            else
                s += to_string(to->val) + "||";
            to = to->right;
        }
        char *res = new char[s.length()];
        strcpy(res, s.c_str());
        return res;
    }
    TreeNode *Deserialize(char *str)
    {
        return (len = strlen(str)) != 1 ? deserialize(str) : nullptr;
    }
};
TEST(Serialize, 1)
{
    Solution s;
    TreeNode *sam = create({1, 2, 3, INT_MAX, INT_MAX, 6, 7});
    EXPECT_TRUE(is_equal(sam, s.Deserialize(s.Serialize(sam))));
}
TEST(Serialize, 2)
{
    Solution s;
    TreeNode *sam = create({8, 6, 10, 5, 7, 9, 11});
    EXPECT_TRUE(is_equal(sam, s.Deserialize(s.Serialize(sam))));
}