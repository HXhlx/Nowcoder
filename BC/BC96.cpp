#include <bits/stdc++.h>
using namespace std;
int main()
{
    wint_t K;
    cin >> K;
    double s = sqrt(1 + 8 * K);
    wint_t is = s;
    cout << (is - 1) * is * (is + 1) / 24 + (is != s) * (K - (is - 1) * (is + 1) / 8) * (is + 1) / 2;
}