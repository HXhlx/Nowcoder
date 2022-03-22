#include <bits/stdc++.h>
using namespace std;
int main()
{
    wint_t n;
    cin >> n;
    wint_t vals[n];
    for (wint_t i = 0; i < n; ++i)
        cin >> vals[i];
    cout << (is_sorted(vals, vals + n) || is_sorted(vals, vals + n, greater<wint_t>()) ? "" : "un") << "sorted";
}