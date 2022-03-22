#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    // write your code here......
    for (wint_t i = 0; i < 5; ++i)
    {
        int n;
        cin >> n;
        s.insert(n);
    }
    copy(s.begin(), s.end(), ostream_iterator<int>(cout, " "));
    return 0;
}