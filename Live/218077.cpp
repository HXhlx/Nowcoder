#include <bits/stdc++.h>
using namespace std;
int main()
{
    wint_t n;
    cin >> n;
    wint_t nums[n];
    for (wint_t i = 0; i < n; ++i)
        cin >> nums[i];
    wint_t eor = accumulate(nums, nums + n, 0, bit_xor<wint_t>()), rightOne = eor & (~eor + 1), a = accumulate(nums, nums + n, 0, [rightOne](wint_t s, wint_t n)
                                                                                                               { return s ^ n * static_cast<bool>(n & rightOne); }),
           b = eor ^ a;
    cout << min(a, b) << ' ' << max(a, b);
}