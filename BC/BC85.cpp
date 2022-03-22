#include <bits/stdc++.h>
using namespace std;
int main()
{
    wint_t N;
    double s = 0;
    cin >> N;
    for (short i = 1, j = 1; i <= N; ++i, j *= -1)
        s += 1. / (i * j);
    cout << setiosflags(ios::fixed) << setprecision(3) << s;
}