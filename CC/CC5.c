#include <stdio.h>
int cal(int *array, int n)
{
    unsigned s = 0;
    for (unsigned i = 0; i < n; ++i)
        s += array[i];
    return s;
}
int main()
{
    unsigned n;
    scanf("%d", &n);
    unsigned array[n];
    for (unsigned i = 0; i < n; ++i)
        scanf("%d", &array[i]);
    printf("%d", cal(array, n));
}