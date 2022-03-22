#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    unordered_set<char> nums;
    cin >> s;
    for (char c : s)
        nums.insert(c);
    cout << nums.size();
}