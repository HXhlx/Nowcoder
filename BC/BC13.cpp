#include <bits/stdc++.h>
using namespace std;
int main()
{
    string date;
    cin >> date;
    cout << "year=" << date.substr(0, 4) << endl
         << "month=" << date.substr(4, 2) << endl
         << "date=" << date.substr(6);
}