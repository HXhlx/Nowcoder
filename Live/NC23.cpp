#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <ListNode.h>
class Solution
{
public:
    /**
     *
     * @param head ListNode类
     * @param x int整型
     * @return ListNode类
     */
    ListNode *partition(ListNode *head, int x)
    {
        // write code here
        ListNode *lh = new ListNode(0), *lt = lh, *gh = new ListNode(0), *gt = gh;
        for (ListNode *node = head; node; node = node->next)
            if (node->val < x)
            {
                lt->next = node;
                lt = lt->next;
            }
            else
            {
                gt->next = node;
                gt = gt->next;
            }
        lt->next = gh->next;
        gt->next = nullptr;
        return lh->next;
    }
};