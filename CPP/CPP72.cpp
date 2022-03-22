#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    vector<int> a;
    // write your code here......
    cin >> n >> k;
    a.resize(n);
    for (int &i : a)
        cin >> i;
    nth_element(a.begin(), a.begin() + k - 1, a.end());
    cout << a[k - 1];
    return 0;
}