#include <bits/stdc++.h>
using namespace std;
int main()
{
    array<wint_t, 3> d{2, 3, 7};
    wint_t n, t = 0;
    cin >> n;
    for (wint_t i : d)
        if (n % i == 0)
        {
            cout << i << ' ';
            ++t;
        }
    if (t == 0)
        cout << 'n';
}