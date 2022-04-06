#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <ListNode.h>
class Solution
{
public:
    /**
     *
     * @param head ListNode类 the head
     * @return bool布尔型
     */
    bool isPail(ListNode *head)
    {
        // write code here
        if (!head || !head->next)
            return true;
        ListNode *left = nullptr, *slow = head, *right = head->next, *fast = head;
        while (fast && fast->next)
        {
            fast = fast->next->next;
            slow->next = left;
            left = slow;
            slow = right;
            right = right->next;
        }
        for (right = fast ? right : slow; left && right; left = left->next, right = right->next)
            if (left->val != right->val)
                return false;
        return true;
    }
};