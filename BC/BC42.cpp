#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
int main()
{
    tm t = tm();
    unsigned k;
    scanf("%d:%d%d", &t.tm_hour, &t.tm_min, &k);
    time_t tt = system_clock::to_time_t(system_clock::from_time_t(mktime(&t)) + minutes(k));
    cout << put_time(localtime(&tt), "%H:%M");
}