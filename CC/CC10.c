#include <stdio.h>
#include <stdlib.h>
struct Node
{
    size_t n;
    struct Node *next;
};
void create(struct Node *list, size_t n)
{
    struct Node *node = list;
    for (size_t i = 0; i < n; i++)
    {
        node->next = (struct Node *)malloc(sizeof(struct Node));
        scanf("%lld", &node->next->n);
        node = node->next;
    }
    node->next = NULL;
}
int main()
{
    size_t n;
    struct Node a, b;
    scanf("%lld", &n);
    create(&a, n);
    create(&b, n);
    for (struct Node *A = a.next, *B = b.next; A && B; A = A->next, B = B->next)
        printf("%lld ", B->n += A->n);
}