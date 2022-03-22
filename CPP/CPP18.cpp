#include <iostream>
using namespace std;
int main()
{
    // write your code here......
    wint_t n, i;
    cin >> n;
    for (i = 2; i * i < n; ++i)
        if (n % i == 0)
            break;
    cout << (n % i || n == 2 ? "是质数" : "不是质数");
    return 0;
}