#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned n, m = 1;
    cin >> n;
    array<unsigned, 10> nums{};
    for (unsigned i = 1; n; n /= 10)
        if (nums[n % 10] == 0)
        {
            i *= 10;
            m = i;
            nums[n % 10] = i;
        }
    unsigned s = 0;
    for (wint_t i = 0; i < 10; ++i)
        if (nums[i])
            s += i * m / nums[i];
    cout << s;
}