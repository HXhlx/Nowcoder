#include <bits/stdc++.h>
using namespace std;
int main()
{
    array<int, 3> nums;
    for (int &n : nums)
        cin >> n;
    for (int n : nums)
        cout << left << setw(8) << n;
}