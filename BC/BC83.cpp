#include <bits/stdc++.h>
using namespace std;
int main()
{
    short n;
    cin >> n;
    cout << (n & 1 ? n + 1 : -n) / 2;
}