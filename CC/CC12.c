#include <stdio.h>
#include <stdlib.h>
struct Node
{
    ssize_t n;
    struct Node *next;
};
int main()
{
    size_t n, i;
    struct Node list, *node = &list;
    scanf("%lld%lld", &n, &i);
    for (size_t k = 0; k < n; ++k)
    {
        node->next = (struct Node *)malloc(sizeof(struct Node));
        scanf("%lld", &node->next->n);
        node = node->next;
    }
    node->next = NULL;
    node = &list;
    for (size_t k = 0; k < i; ++k)
        node = node->next;
    struct Node p;
    p.n = i;
    p.next = node->next;
    node->next = &p;
    for (node = list.next; node; node = node->next)
        printf("%lld ", node->n);
}