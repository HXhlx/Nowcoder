#include <stdio.h>
#include <stdlib.h>
struct Node
{
    size_t n;
    struct Node *next;
};
void swap(size_t *a, size_t *b)
{
    size_t t = *a;
    *a = *b;
    *b = t;
}
int main()
{
    size_t n;
    struct Node list;
    list.next = NULL;
    scanf("%d", &n);
    for (struct Node *node = &list; n--; node = node->next)
    {
        node->next = (struct Node *)malloc(sizeof(struct Node));
        node->next->next = NULL;
        scanf("%lld", &node->next->n);
    }
    struct Node *l = list.next, *r = list.next->next;
    if (r)
    {
        swap(&l->n, &r->n);
        while (r->next)
        {
            l = l->next;
            r = r->next;
        }
        swap(&l->n, &r->n);
    }
    for (struct Node *node = list.next; node; node = node->next)
        printf("%lld ", node->n);
}