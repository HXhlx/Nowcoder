#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <ListNode.h>
class Solution
{
public:
    ListNode *ReverseList(ListNode *pHead)
    {
        if (!pHead)
            return nullptr;
        ListNode *pre = nullptr, *p = pHead;
        for (ListNode *r = pHead->next; r; r = r->next)
        {
            p->next = pre;
            pre = p;
            p = r;
        }
        p->next = pre;
        return p;
    }
};
TEST(ReverseList, 1) {}