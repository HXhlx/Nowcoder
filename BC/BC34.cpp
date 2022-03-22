#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    double C = a + b + c, S = sqrt(C * (C - 2 * a) * (C - 2 * b) * (C - 2 * c) / 16);
    cout << setiosflags(ios::fixed) << setprecision(2) << "circumference=" << C << " area=" << S;
}