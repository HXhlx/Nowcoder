#include <stdio.h>
#include <stdlib.h>
struct Node
{
    ssize_t n;
    struct Node *next;
};
int main()
{
    size_t n, x;
    struct Node list;
    list.next = NULL;
    scanf("%lld%lld", &n, &x);
    for (struct Node *node = &list; n--; node = node->next)
    {
        node->next = (struct Node *)malloc(sizeof(struct Node));
        node->next->next = NULL;
        scanf("%lld", &node->next->n);
    }
    for (struct Node *node = &list; node->next;)
        if (node->next->n == x)
        {
            struct Node *p = node->next;
            node->next = node->next->next;
            free(p);
        }
        else
            node = node->next;
    for (struct Node *node = list.next; node; node = node->next)
        printf("%lld ", node->n);
}