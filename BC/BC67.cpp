#include <bits/stdc++.h>
using namespace std;
int main()
{
    short x, x1, y, y1;
    cin >> x >> y >> x1 >> y1;
    map<pair<short, short>, char> direct{{{0, 1}, 'u'}, {{0, -1}, 'd'}, {{1, 0}, 'r'}, {{-1, 0}, 'l'}};
    cout << direct[{x1 - x, y1 - y}];
}