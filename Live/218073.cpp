#include <bits/stdc++.h>
using namespace std;
int main()
{
    wint_t k, n;
    cin >> n >> k;
    wint_t nums[n];
    for (wint_t i = 0; i < n; ++i)
        cin >> nums[i];
    wint_t *p = lower_bound(nums, nums + n, k);
    cout << (p == nums + n || *p != k ? EOF : distance(nums, p));
}