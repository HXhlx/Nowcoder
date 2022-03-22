#include <bits/stdc++.h>
using namespace std;
int main()
{
    wint_t k, n;
    cin >> n >> k;
    wint_t arr[n];
    for (wint_t i = 0; i < n; ++i)
        cin >> arr[i];
    wint_t *p = lower_bound(arr, arr + n, k);
    cout << (p == arr + n ? EOF : distance(arr, p));
}