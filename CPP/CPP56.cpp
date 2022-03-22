#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    // write your code here......
    array<size_t, 3> counts{};
    for (char c : s)
        ++counts[c - 97];
    copy(counts.begin(), counts.end(), ostream_iterator<size_t>(cout, " "));
    return 0;
}