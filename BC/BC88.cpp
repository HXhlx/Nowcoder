#include <bits/stdc++.h>
using namespace std;
int main()
{
    wint_t n, t;
    cin >> n;
    for (t = 0; n != 1; ++t)
        if (n & 1)
            n = 3 * n + 1;
        else
            n >>= 1;
    cout << t;
}