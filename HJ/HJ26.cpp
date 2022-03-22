#include <bits/stdc++.h>
using namespace std;
int main()
{
    array<string, 26> words;
    string str;
    getline(cin, str);
    for (char c : str)
        if (isalpha(c))
            words[toupper(c) - 65] += c;
    array<string, 26>::iterator si = words.begin();
    for (string::iterator s = str.begin(), w = si->begin(); s != str.end(); ++s)
        if (isalpha(*s))
        {
            while (w == si->end())
            {
                ++si;
                w = si->begin();
            }
            *s = *w++;
        }
    cout << str;
}