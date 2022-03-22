#include <bits/stdc++.h>
using namespace std;
int main()
{
    array<array<wint_t, 11>, 10> apples;
    for (array<wint_t, 11> &apple : apples)
        apple[0] = 1;
    wint_t m, n;
    for (wint_t c = 1; c < 11; ++c)
        for (wint_t r = 0; r < 10; ++r)
            apples[r][c] = apples[r][c - 1] + (r < c ? 0 : apples[r - c][c]);
    while (cin >> m >> n)
        cout << apples[m][n - 1] << endl;
}