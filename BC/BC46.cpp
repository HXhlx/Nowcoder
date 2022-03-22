#include <bits/stdc++.h>
using namespace std;
int main()
{
    wint_t s, k, g, q;
    cin >> s >> k >> g >> q;
    cout << setiosflags(ios::fixed) << setprecision(1) << s * 0.2 + k * 0.1 + g * 0.2 + q * 0.5;
}