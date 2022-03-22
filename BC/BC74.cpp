#include <bits/stdc++.h>
using namespace std;
int main()
{
    array<wint_t, 12> days{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for (tm m = tm(); cin >> m.tm_year >> m.tm_mon;)
        cout << days[m.tm_mon - 1] + (m.tm_mon == 2 && (m.tm_year % 400 == 0 || m.tm_year % 4 == 0 && m.tm_year % 100)) << endl;
}