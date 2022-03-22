#include <bits/stdc++.h>
using namespace std;
int main()
{
    wint_t K, n;
    cin >> n >> K;
    wint_t a[n];
    for (wint_t i = 0; i < n; ++i)
        cin >> a[i];
    wint_t *s = partition(a, a + n, [K](wint_t num)
                          { return num < K; }),
           *e = partition(s, a + n, [K](wint_t num)
                          { return num == K; });
    if (s == e)
        cout << EOF << ' ' << EOF;
    else
        cout << distance(a, s) << ' ' << distance(a, e - 1);
}