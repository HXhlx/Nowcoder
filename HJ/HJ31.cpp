#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    stack<string> ss;
    ss.emplace("");
    while (cin.get(c))
    {
        if (isalpha(c))
            ss.top() += c;
        else if (!ss.top().empty())
            ss.emplace("");
    }
    while (ss.top().empty())
        ss.pop();
    while (!ss.empty())
    {
        cout << ss.top() << ' ';
        ss.pop();
    }
}