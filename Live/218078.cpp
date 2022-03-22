#include <bits/stdc++.h>
using namespace std;
wint_t Max(wint_t *nums, wint_t l, wint_t r)
{
    wint_t m = (l + r) >> 1;
    return l == r ? nums[l] : max(Max(nums, l, m), Max(nums, m + 1, r));
}
int main()
{
    wint_t n;
    cin >> n;
    wint_t nums[n];
    for (wint_t i = 0; i < n; ++i)
        cin >> nums[i];
    cout << Max(nums, 0, n - 1);
}