#include <bits/stdc++.h>
using namespace std;
int main()
{
    wint_t n;
    cin >> n;
    cout << (n % 400 == 0 || n % 100 && n % 4 == 0 ? "yes" : "no");
}