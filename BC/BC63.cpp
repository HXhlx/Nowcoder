#include <bits/stdc++.h>
using namespace std;
int main()
{
    bool coupon;
    float val;
    tm d = tm();
    cin >> val >> d.tm_mon >> d.tm_mday >> coupon;
    cout << setiosflags(ios::fixed) << setprecision(2) << max(val * (d.tm_mday == 11 ? 0.7 : 0.8) - coupon * 50, 0.);
}