#include <bits/stdc++.h>
using namespace std;
int main()
{
    wint_t N;
    while (cin >> N)
    {
        wint_t nums[N];
        for (wint_t n = 0; n < N; ++n)
            nums[n] = (n + 1) * (n + 2) >> 1;
        for (wint_t n = 0; n < N; ++n)
        {
            transform(nums + n, nums + N, ostream_iterator<wint_t>(cout, " "), bind(minus<wint_t>(), placeholders::_1, n));
            cout << endl;
        }
    }
}