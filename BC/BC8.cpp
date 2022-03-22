#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    cin.get(c);
    for (wint_t i = 0; i < 3; ++i)
        cout << string(2 - i, ' ') << string(i * 2 + 1, c) << endl;
    for (wint_t i = 1; i < 3; ++i)
        cout << string(i, ' ') << string(5 - 2 * i, c) << endl;
}