#include <bits/stdc++.h>
using namespace std;
int main()
{
    wint_t m, n;
    cin >> n >> m;
    wint_t s1[n], s2[m];
    for (wint_t i = 0; i < n; ++i)
        cin >> s1[i];
    for (wint_t i = 0; i < m; ++i)
        cin >> s2[i];
    merge(s1, s1 + n, s2, s2 + m, ostream_iterator<wint_t>(cout, " "));
}