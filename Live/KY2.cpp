#include <bits/stdc++.h>
using namespace std;
int main()
{
    for (wint_t n; cin >> n;)
    {
        bool flag;
        cin >> flag;
        pair<string, wint_t> users[n];
        for (wint_t i = 0; i < n; ++i)
            cin >> users[i].first >> users[i].second;
        if (flag)
            stable_sort(users, users + n, [](pair<string, wint_t> u1, pair<string, wint_t> u2)
                        { return u1.second < u2.second; });
        else
            stable_sort(users, users + n, [](pair<string, wint_t> u1, pair<string, wint_t> u2)
                        { return u1.second > u2.second; });
        for (wint_t i = 0; i < n; ++i)
            cout << users[i].first << ' ' << users[i].second << endl;
    }
}