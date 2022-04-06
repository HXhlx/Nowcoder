#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <ListNode.h>
class Solution
{
public:
    ListNode *detectCycle(ListNode *head)
    {
        if (!head || !head->next)
            return nullptr;
        ListNode *slow = head->next;
        for (ListNode *fast = head->next->next; slow != fast; fast = fast->next->next)
            if (fast && fast->next)
                slow = slow->next;
            else
                return nullptr;
        for (ListNode *fast = head; fast != slow; fast = fast->next)
            slow = slow->next;
        return slow;
    }
};