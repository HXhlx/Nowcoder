#include <bits/stdc++.h>
using namespace std;
int main()
{
    wint_t y, m, d;
    cin >> y >> m >> d;
    array<wint_t, 12> months{31, 28 + wint_t(y % 400 == 0 || y % 4 == 0 && y % 100), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cout << accumulate(months.begin(), months.begin() + m - 1, d);
}