#include <bits/stdc++.h>
using namespace std;
struct list_node
{
    int val;
    list_node *next;
};                          //链表的节点
list_node *input_list(void) //读入链表
{
    int n, val;
    list_node *phead = new list_node(), *cur_pnode = phead;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i)
    {
        scanf("%d", &val);
        if (i == 1)
        {
            cur_pnode->val = val;
            cur_pnode->next = NULL;
        }
        else
        {
            list_node *new_pnode = new list_node();
            new_pnode->val = val;
            new_pnode->next = NULL;
            cur_pnode->next = new_pnode;
            cur_pnode = new_pnode;
        }
    }
    return phead;
}
void sol(list_node *a_head, list_node *b_head)
{
    //////在下面完成代码
    for (list_node *a = a_head, *b = b_head; a && b;)
        if (a->val < b->val)
            a = a->next;
        else if (a->val > b->val)
            b = b->next;
        else
        {
            cout << a->val << ' ';
            a = a->next;
            b = b->next;
        }
}
int main()
{
    list_node *a_head = input_list(), *b_head = input_list(); // A 链表的头节点, B 链表的头节点
    sol(a_head, b_head);
}