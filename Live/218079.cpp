#include <bits/stdc++.h>
using namespace std;
int main()
{
    wint_t n;
    cin >> n;
    wint_t nums[n];
    for (wint_t i = 0; i < n; ++i)
        cin >> nums[i];
    make_heap(nums, nums + n);
    sort_heap(nums, nums + n);
    copy(nums, nums + n, ostream_iterator<wint_t>(cout, " "));
}