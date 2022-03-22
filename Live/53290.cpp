#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned n, v;
    cin >> n >> v;
    unsigned a[n];
    for (wint_t i = 0; i < n; ++i)
        cin >> a[i];
    cout << distance(a, lower_bound(a, a + n, v)) + 1;
}