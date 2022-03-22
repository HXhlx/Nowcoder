#include <bits/stdc++.h>
using namespace std;
int main()
{
    for (wint_t n; cin >> n;)
        for (wint_t i = n; i; --i)
        {
            for (wint_t j = 0; j < i; ++j)
                cout << "* ";
            cout << endl;
        }
}