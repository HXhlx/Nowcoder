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
    copy_n(a.rbegin(), k, ostream_iterator<int>(cout, " "));
    return 0;
}