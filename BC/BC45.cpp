#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned n, s = 0;
    cin >> n;
    for (unsigned i = 1; i < n; i *= 10)
        s += n / i % 2 * i;
    cout << s;
}