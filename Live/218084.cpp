#include <bits/stdc++.h>
using namespace std;
int main()
{
    array<queue<wint_t>, 10> bases;
    wint_t n;
    cin >> n;
    wint_t nums[n];
    for (wint_t i = 0; i < n; ++i)
        cin >> nums[i];
    for (wint_t i = 1, m = *max_element(nums, nums + n); i <= m; i *= 10)
    {
        for (wint_t k = 0; k < n; ++k)
            bases[nums[k] / i % 10].emplace(nums[k]);
        wint_t *p = nums;
        for (queue<wint_t> &base : bases)
            while (!base.empty())
            {
                *p++ = base.front();
                base.pop();
            }
    }
    copy(nums, nums + n, ostream_iterator<wint_t>(cout, " "));
}