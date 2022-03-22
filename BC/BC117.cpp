#include <bits/stdc++.h>
using namespace std;
int main()
{
    array<int, 10> nums;
    for (int &n : nums)
        cin >> n;
    reverse_copy(nums.begin(), nums.end(), ostream_iterator<int>(cout, " "));
}