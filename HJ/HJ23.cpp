#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while (cin >> s)
    {
        string str;
        unordered_map<char, wint_t> c;
        wint_t m = 21;
        for (char ch : s)
            ++c[ch];
        for (pair<const char, wint_t> &C : c)
            m = min(C.second, m);
        for (char ch : s)
            if (c[ch] > m)
                str += ch;
        cout << str << endl;
    }
}