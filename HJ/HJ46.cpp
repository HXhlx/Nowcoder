#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    wint_t k;
    while (cin >> str >> k)
        cout << str.substr(0, k) << endl;
}