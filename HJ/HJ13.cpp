#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<string> strs;
    string str;
    while (cin >> str)
        strs.emplace(str);
    while (!strs.empty())
    {
        cout << strs.top() << ' ';
        strs.pop();
    }
}