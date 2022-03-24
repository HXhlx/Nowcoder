#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <RandomListNode.h>
class Solution
{
public:
    RandomListNode *Clone(RandomListNode *pHead)
    {
        if (!pHead)
            return nullptr;
        for (RandomListNode *node = pHead; node; node = node->next->next)
        {
            RandomListNode *r = new RandomListNode(node->label);
            r->next = node->next;
            node->next = r;
        }
        for (RandomListNode *node = pHead; node; node = node->next->next)
            if (node->random)
                node->next->random = node->random->next;
        RandomListNode *head = pHead->next;
        pHead->next = head->next;
        for (RandomListNode *node = head->next, *p = head; node; node = node->next)
        {
            p->next = node->next;
            node->next = node->next->next;
            p = p->next;
        }
        return head;
    }
};
TEST(Clone, 1)
{
}