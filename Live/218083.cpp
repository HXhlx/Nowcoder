#include <bits/stdc++.h>
using namespace std;
int main()
{
    wint_t n;
    cin >> n;
    wint_t nums[n];
    for (wint_t i = 0; i < n; ++i)
        cin >> nums[i];
    wint_t m = *max_element(nums, nums + n), counts[m + 1];
    fill(counts, counts + m + 1, 0);
    for (wint_t i = 0; i < n; ++i)
        ++counts[nums[i]];
    for (wint_t i = 0; i <= m; ++i)
        for (wint_t j = 0; j < counts[i]; ++j)
            cout << i << ' ';
}