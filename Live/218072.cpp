#include <bits/stdc++.h>
using namespace std;
int main()
{
    wint_t n;
    cin >> n;
    wint_t nums[n];
    for (wint_t i = 0; i < n; ++i)
        cin >> nums[i];
    for (wint_t i = 1; i < n; ++i)
        for (wint_t j = i; j && nums[j] < nums[j - 1]; --j)
            swap(nums[j], nums[j - 1]);
    copy(nums, nums + n, ostream_iterator<wint_t>(cout, " "));
}