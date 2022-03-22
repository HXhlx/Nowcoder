#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    // write your code here......
    size_t m, n, num;
    cin >> n >> m;
    for (size_t i = 0; i < n; i++)
    {
        cin >> num;
        s.insert(num);
    }
    for (size_t i = 0; i < m; i++)
    {
        cin >> num;
        set<int>::iterator p = s.upper_bound(num);
        cout << (p == s.end() ? EOF : *p) << endl;
    }
    return 0;
}