#include <bits/stdc++.h>
using namespace std;
int main()
{
    // write your code here......
    map<ssize_t, size_t> a;
    size_t m, n;
    ssize_t x;
    cin >> n >> m;
    for (size_t i = 0; i < n; i++)
    {
        cin >> x;
        ++a[x];
    }
    for (size_t i = 0; i < m; i++)
    {
        cin >> x;
        cout << (a.find(x) == a.end() ? "no" : "yes") << endl;
    }
    return 0;
}