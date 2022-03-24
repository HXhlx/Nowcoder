#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <ListNode.h>
class CheckIntersect
{
public:
    bool chkIntersect(ListNode *headA, ListNode *headB)
    {
        // write code here
        ListNode *p1 = headA, *p2 = headB;
        wint_t len1 = 500, len2 = 500;
        for (wint_t l = 0; p1 != p2 && l <= len1 + len2; ++l)
        {
            if (p1)
                p1 = p1->next;
            else
            {
                p1 = headB;
                len1 = l;
            }
            if (p2)
                p2 = p2->next;
            else
            {
                p2 = headA;
                len2 = l;
            }
        }
        return p1 == p2;
    }
};