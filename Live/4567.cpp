#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <ListNode.h>
class ChkIntersection
{
    ListNode *getLoopNode(ListNode *head)
    {
        ListNode *fast = head->next->next, *slow = head->next;
        while (fast != slow)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        fast = head;
        while (fast != slow)
        {
            fast = fast->next;
            slow = slow->next;
        }
        return slow;
    }

public:
    bool chkInter(ListNode *head1, ListNode *head2, int adjust0, int adjust1)
    {
        // write code here
        ListNode *l1 = getLoopNode(head1), *l2 = getLoopNode(head2);
        if (l1 == l2)
            return true;
        for (ListNode *l = l1->next; l != l1; l = l->next)
            if (l == l2)
                return true;
        return false;
    }
};