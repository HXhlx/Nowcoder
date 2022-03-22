#include <iostream>
#include <string>
using namespace std;
string toHexString(int n);
int main()
{
    int n;
    cin >> n;
    string hexStr = toHexString(n);
    cout << hexStr << endl;
    return 0;
}
string toHexString(int n)
{
    // write your code here......
    const static string radix("0123456789ABCDEF");
    string res;
    while (n)
    {
        res += radix[n % 16];
        n /= 16;
    }
    for (size_t i = 0, j = res.length() - 1; i < j; ++i, --j)
        swap(res[i], res[j]);
    return res;
}