#include <bits/stdc++.h>
using namespace std;
int main()
{
    char b;
    float a;
    cin >> a >> b;
    cout << 20 + ceil(max(0.f, a - 1)) + (b == 'y') * 5;
}