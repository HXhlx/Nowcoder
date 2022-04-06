#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include "ListNode.h"
class Solution
{
public:
    /**
     *
     * @param head ListNode类
     * @return ListNode类
     */
    ListNode *insertionSortList(ListNode *head)
    {
        // write code here
        ListNode *isl = new ListNode(0), *node = head;
        while (node)
        {
            ListNode *i = isl;
            while (i->next && i->next->val < node->val)
                i = i->next;
            ListNode *r = node->next;
            node->next = i->next;
            i->next = node;
            node = r;
        }
        return isl->next;
    }
};
using namespace std;
TEST(InsertionSortList, 1)
{
    Solution s;
    ListNode *ans = s.insertionSortList(create({30, 20, 40})), *node = ans;
    vector<int> vec{20, 30, 40};
    for (int v : vec)
    {
        EXPECT_EQ(v, node->val);
        node = node->next;
    }
}