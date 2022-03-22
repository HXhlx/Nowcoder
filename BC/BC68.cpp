#include <bits/stdc++.h>
using namespace std;
int main()
{
    array<string, 7> weeks{"Mon", "Tues", "Wednes", "Thurs", "Fri", "Satur", "Sun"};
    wint_t week;
    cin >> week;
    cout << weeks[week - 1] << "day";
}