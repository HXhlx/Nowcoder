#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    wint_t M;
    cin >> M;
    unsigned nums[M];
    for (wint_t m = 0; m < M; ++m)
    {
        cin >> s;
        nums[m] = stoul(s.substr(s.length() - 6));
    }
    sort(nums, nums + M);
    copy(nums, nums + M, ostream_iterator<unsigned>(cout, "\n"));
}