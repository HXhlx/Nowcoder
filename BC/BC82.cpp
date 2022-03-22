#include <bits/stdc++.h>
using namespace std;
int main()
{
    for (wint_t i = 1; i < 10; ++i)
    {
        for (wint_t j = 1; j <= i; ++j)
            cout << j << '*' << i << '=' << setw(2) << i * j << ' ';
        cout << endl;
    }
}