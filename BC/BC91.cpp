#include <bits/stdc++.h>
using namespace std;
int main()
{
    array<wint_t, 4> Narcissistic{153, 370, 371, 407};
    for (wint_t m, n; cin >> m >> n;)
    {
        array<wint_t, 4>::iterator nar = Narcissistic.begin();
        wint_t t = 0;
        while (nar != Narcissistic.end() && *nar < m)
            ++nar;
        while (nar != Narcissistic.end() && *nar <= n)
        {
            cout << *nar << ' ';
            ++nar;
            ++t;
        }
        cout << (t ? "" : "no") << endl;
    }
}