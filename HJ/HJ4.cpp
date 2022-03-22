#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    vector<string> strs, ss;
    while (cin >> str)
        strs.emplace_back(str);
    for (string &s : strs)
        for (wint_t i = 0; i < s.size(); i += 8)
            ss.emplace_back(s.substr(i, 8) + string((i + 8 > s.size()) * (i + 8 - s.size()), '0'));
    copy(ss.begin(), ss.end(), ostream_iterator<string>(cout, "\n"));
}