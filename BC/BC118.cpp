#include <bits/stdc++.h>
using namespace std;
int main()
{
    wint_t N;
    cin >> N;
    int nums[N];
    for (wint_t i = 0; i < N; ++i)
        cin >> nums[i];
    cout << accumulate(nums, nums + N, 0);
}