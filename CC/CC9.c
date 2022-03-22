#include <stdio.h>
#include <stdlib.h>
struct Node
{
    size_t n;
    struct Node *next;
};
int main()
{
    size_t n, s = 0;
    struct Node list;
    list.next = NULL;
    scanf("%d", &n);
    for (struct Node *node = &list; n--; node = node->next)
    {
        node->next = (struct Node *)malloc(sizeof(struct Node));
        node->next->next = NULL;
        scanf("%lld", &node->next->n);
    }
    for (struct Node *node = list.next; node; node = node->next)
        s += node->n;
    printf("%lld", s);
}