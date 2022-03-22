#include <bits/stdc++.h>
using namespace std;
int main()
{
    array<short, 4> mn;
    for (short &m : mn)
        cin >> m;
    cout << *max_element(mn.begin(), mn.end());
}