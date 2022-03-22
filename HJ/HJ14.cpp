#include <bits/stdc++.h>
using namespace std;
int main()
{
    wint_t n;
    cin >> n;
    string strs[n];
    for (wint_t i = 0; i < n; ++i)
        cin >> strs[i];
    sort(strs, strs + n);
    copy(strs, strs + n, ostream_iterator<string>(cout, "\n"));
}