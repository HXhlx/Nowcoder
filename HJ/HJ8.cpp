#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<unsigned, unsigned> iv;
    unsigned index, value;
    wint_t n;
    cin >> n;
    for (wint_t i = 0; i < n; ++i)
    {
        cin >> index >> value;
        iv[index] += value;
    }
    for (auto [i, v] : iv)
        cout << i << ' ' << v << endl;
}