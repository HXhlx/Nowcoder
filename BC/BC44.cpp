#include <bits/stdc++.h>
using namespace std;
int main()
{
    size_t m, n;
    cin >> n >> m;
    size_t g = __gcd(m, n);
    cout << g + m * n / g;
}