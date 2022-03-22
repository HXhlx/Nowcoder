#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<wint_t> nums;
    for (wint_t n; cin >> n;)
        nums.emplace_back(n);
    wint_t m = *max_element(nums.begin(), nums.end());
    wint_t fibo[m + 1];
    fibo[0] = 0;
    fibo[1] = 1;
    for (wint_t i = 2; i <= m; ++i)
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    for (wint_t n : nums)
        cout << fibo[n] << endl;
}