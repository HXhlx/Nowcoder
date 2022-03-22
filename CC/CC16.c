#include <stdio.h>
int main()
{
    size_t n, x = 0, y = 0, x1, y1;
    scanf("%lld", &n);
    for (size_t i = 0; i < n; ++i)
    {
        scanf("%lld%lld", &x1, &y1);
        x += x1;
        y += y1;
    }
    printf("%lld %lld", x, y);
}