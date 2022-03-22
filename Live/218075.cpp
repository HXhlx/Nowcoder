#include <bits/stdc++.h>
using namespace std;
int main()
{
    wint_t n;
    cin >> n;
    wint_t nums[n];
    for (wint_t i = 0; i < n; ++i)
        cin >> nums[i];
    if (n == 1 || nums[0] < nums[1])
        cout << 0;
    else if (nums[n - 2] > nums[n - 1])
        cout << n - 1;
    else
    {
        wint_t l = 1, r = n - 2;
        while (l < r)
        {
            wint_t m = (l + r) >> 1;
            if (nums[m] > nums[m - 1])
                r = m - 1;
            else if (nums[m] > nums[m + 1])
                l = m + 1;
            else
            {
                cout << m;
                return 0;
            }
        }
        cout << l;
    }
}