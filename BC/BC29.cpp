#include <bits/stdc++.h>
using namespace std;
int main()
{
    wint_t N, X;
    cin >> X >> N;
    cout << (N + X - 1) % 7 + 1;
}