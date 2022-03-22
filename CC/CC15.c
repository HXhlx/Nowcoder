#include <stdio.h>
struct Book
{
    char str[100];
    unsigned short p;
};
void swap(struct Book *b1, struct Book *b2)
{
    struct Book t = *b1;
    *b1 = *b2;
    *b2 = t;
}
void sort(struct Book *books, short l, short h)
{
    if (l < h)
    {
        short i = l, j = h;
        while (i < j)
        {
            while (i < j && books[j].p > books[l].p)
                --j;
            while (i < j && books[i].p <= books[l].p)
                ++i;
            if (i < j)
                swap(&books[i], &books[j]);
        }
        swap(&books[i], &books[l]);
        sort(books, l, i - 1);
        sort(books, i + 1, h);
    }
}
int main()
{
    unsigned short n;
    scanf("%d", &n);
    struct Book books[n];
    for (unsigned short i = 0; i < n; i++)
        scanf("%s%d", books[i].str, &books[i].p);
    sort(books, 0, n - 1);
    for (unsigned short i = 0; i < n; i++)
        printf("%s\n", books[i].str);
}