#include <bits/stdc++.h>
using namespace std;
int main()
{
    for (int n; cin >> n;)
        cout << (n & 1 ? "Odd" : "Even") << endl;
}