#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned date, m;
    cin >> date;
    m = date % 100;
    if (m == 12 || m <= 2)
        cout << "winter";
    else if (m <= 5)
        cout << "spring";
    else if (m <= 8)
        cout << "summer";
    else
        cout << "autumn";
}