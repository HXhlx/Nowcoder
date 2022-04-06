struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};
ListNode *create(std::vector<int> seq)
{
    ListNode *head = new ListNode(0), *node = head;
    for (int v : seq)
    {
        node->next = new ListNode(v);
        node = node->next;
    }
    return head->next;
}