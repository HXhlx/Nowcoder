#include <bits/stdc++.h>
using namespace std;
int main()
{
    wint_t N;
    double s = 0;
    cin >> N;
    for (wint_t i = 1; i <= N; ++i)
        s += 1. / i;
    cout << setiosflags(ios::fixed) << setprecision(6) << s;
}