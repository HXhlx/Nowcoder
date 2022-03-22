#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int m_nKey;
    ListNode *m_pNext;
};
int main()
{
    wint_t k, n;
    while (cin >> n)
    {
        ListNode *head = new ListNode, *node = head, *slow = head, *fast = head;
        for (wint_t i = 0; i < n; ++i)
        {
            cin >> node->m_nKey;
            node->m_pNext = new ListNode;
            node = node->m_pNext;
        }
        cin >> k;
        for (wint_t i = 0; i < k; ++i)
            fast = fast->m_pNext;
        while (fast)
        {
            slow = slow->m_pNext;
            fast = fast->m_pNext;
        }
        cout << slow->m_nKey << endl;
    }
}