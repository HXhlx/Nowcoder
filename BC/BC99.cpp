#include <bits/stdc++.h>
using namespace std;
int main()
{
    for (wint_t n; cin >> n;)
        for (wint_t i = 0; i < n; ++i)
        {
            for (wint_t j = 0; j < n; ++j)
                cout << "* ";
            cout << endl;
        }
}