#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned n;
    cin >> n;
    for (unsigned i = 2, sn = sqrt(n); i <= sn;)
        if (n % i == 0)
        {
            cout << i << ' ';
            n /= i;
        }
        else
            ++i;
    if (n != 1)
        cout << n;
}