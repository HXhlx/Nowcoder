#include <bits/stdc++.h>
using namespace std;
int main()
{
    wint_t n;
    cin >> n;
    wint_t nums[n];
    for (wint_t i = 0; i < n; ++i)
        cin >> nums[i];
    for (wint_t i = 1; i < n; i <<= 1)
        for (wint_t j = 0, i2 = i << 1; i + j < n; j += i2)
            inplace_merge(nums + j, nums + i + j, nums + min(i2 + j, n));
    copy(nums, nums + n, ostream_iterator<wint_t>(cout, " "));
}