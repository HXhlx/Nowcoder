#include <bits/stdc++.h>
using namespace std;
int main()
{
    array<wint_t, 4> nums{2, 3, 2, 4};
    for (unsigned n; cin >> n;)
        cout << (n <= 2 ? EOF : (short)nums[(n - 3) % 4]) << endl;
}