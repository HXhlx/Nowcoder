#include <bits/stdc++.h>
using namespace std;
int main()
{
    array<int, 10> nums;
    for (int &n : nums)
        cin >> n;
    cout << "positive:" << count_if(nums.begin(), nums.end(), [](int n)
                                    { return n > 0; })
         << endl
         << "negative:" << count_if(nums.begin(), nums.end(), [](int n)
                                    { return n < 0; });
}