#include <bits/stdc++.h>
using namespace std;
int main()
{
    wint_t n, c, e, m, t = 0;
    cin >> n;
    for (wint_t i = 0; i < n; ++i)
    {
        cin >> c >> m >> e;
        if (c + e + m < 180)
            ++t;
    }
    cout << t;
}