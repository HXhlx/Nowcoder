#include <bits/stdc++.h>
using namespace std;
int main()
{
    bool flag;
    wint_t n;
    cin >> n;
    unsigned vals[n];
    for (wint_t i = 0; i < n; ++i)
        cin >> vals[i];
    cin >> flag;
    if (flag)
        sort(vals, vals + n, greater<unsigned>());
    else
        sort(vals, vals + n);
    copy(vals, vals + n, ostream_iterator<unsigned>(cout, " "));
}