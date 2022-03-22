#include <bits/stdc++.h>
using namespace std;
int main()
{
    wint_t h, m, n;
    cin >> n >> h >> m;
    cout << n - ceil(1. * m / h);
}