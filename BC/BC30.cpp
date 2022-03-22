#include <bits/stdc++.h>
using namespace std;
int main()
{
    tm t;
    unsigned seconds;
    cin >> seconds;
    t.tm_sec = seconds % 60;
    t.tm_min = seconds / 60 % 60;
    t.tm_hour = seconds / 3600;
    cout << t.tm_hour << ' ' << t.tm_min << ' ' << t.tm_sec;
}