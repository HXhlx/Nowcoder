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
    {
        bool is_sorted = true;
        for (wint_t j = 0; j < n - i; ++j)
            if (nums[j] > nums[j + 1])
            {
                swap(nums[j], nums[j + 1]);
                is_sorted = false;
            }
        if (is_sorted)
            break;
    }
    copy(nums, nums + n, ostream_iterator<wint_t>(cout, " "));
}