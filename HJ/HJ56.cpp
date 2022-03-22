#include <bits/stdc++.h>
using namespace std;
int main()
{
    array<wint_t, 4> perfects{6, 28, 496, 8128};
    unsigned n;
    while (cin >> n)
        cout << distance(perfects.begin(), find_if(perfects.begin(), perfects.end(), [&n](wint_t m)
                                                   { return m > n; }))
             << endl;
}