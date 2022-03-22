#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // write your code here......
    unsigned a[n][n];
    for (unsigned i = 0; i < n; ++i)
        iota(a[i], a[i] + n, i);
    for (unsigned i = 0; i < n; ++i)
    {
        copy(a[i], a[i] + n, ostream_iterator<unsigned>(cout, " "));
        cout << endl;
    }
    return 0;
}