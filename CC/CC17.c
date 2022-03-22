#include <stdio.h>
#include <time.h>
int main()
{
    size_t n, t;
    struct tm loc;
    loc.tm_hour = loc.tm_min = loc.tm_sec = 0;
    scanf("%lld", &n);
    for (size_t i = 0; i < n; i++)
    {
        scanf("%lld", &t);
        loc.tm_sec += t;
        if (loc.tm_sec >= 60)
        {
            loc.tm_min += loc.tm_sec / 60;
            loc.tm_sec %= 60;
        }
        if (loc.tm_min >= 60)
        {
            loc.tm_hour += loc.tm_min / 60;
            loc.tm_min %= 60;
        }
        printf("%d %d %d\n", loc.tm_hour, loc.tm_min, loc.tm_sec);
    }
}