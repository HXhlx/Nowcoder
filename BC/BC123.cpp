#include <bits/stdc++.h>
using namespace std;
int main()
{
    wint_t m, N;
    cin >> N;
    int nums[N + 1];
    for (wint_t i = 0; i < N; ++i)
        cin >> nums[i];
    cin >> m;
    for (short n = N - 1; n >= -1; --n)
        if (n > -1 && nums[n] > m)
            nums[n + 1] = nums[n];
        else
        {
            nums[n + 1] = m;
            break;
        }
    copy(nums, nums + N + 1, ostream_iterator<int>(cout, " "));
}