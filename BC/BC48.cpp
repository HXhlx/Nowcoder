#include <bits/stdc++.h>
using namespace std;
int main()
{
    short x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    cout << pow(x1 - x2, 2) + pow(y1 - y2, 2);
}