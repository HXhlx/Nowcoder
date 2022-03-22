#include <bits/stdc++.h>
using namespace std;
int main()
{
    double c, f;
    cin >> f;
    c = (f - 32) * 5 / 9;
    c = round(c * 1000) / 1000;
    cout << setiosflags(ios::fixed) << setprecision(3) << c;
}