#include <stdio.h>
void quick_sort(int *array, int l, int h)
{
    if (l < h)
    {
        int i = l, j = h, x = array[l];
        while (i < j)
        {
            while (i < j && array[j] >= x)
                --j;
            if (i < j)
                array[i++] = array[j];
            while (i < j && array[i] < x)
                ++i;
            if (i < j)
                array[j--] = array[i];
        }
        array[i] = x;
        quick_sort(array, l, i - 1);
        quick_sort(array, i + 1, h);
    }
}
void sort(int *array, int n) { quick_sort(array, 0, n - 1); }
int main()
{

    unsigned n;
    scanf("%d", &n);
    unsigned array[n];
    for (unsigned i = 0; i < n; ++i)
        scanf("%d", &array[i]);
    sort(array, n);
    for (unsigned i = 0; i < n; ++i)
        printf("%d ", array[i]);
}