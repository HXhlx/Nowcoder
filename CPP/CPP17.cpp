#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    // 下落的高度和落地的次数
    double h;
    int n;
    cin >> h >> n;
    // write your code here......
    double H = h, q = 0.5;
    while (n)
    {
        if (n & 1)
            H *= q;
        q *= q;
        n >>= 1;
    }
    cout << setiosflags(ios::fixed) << setprecision(1) << 3 * h - 4 * H << ' ' << H;
    return 0;
}