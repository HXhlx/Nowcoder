#include <iostream>
using namespace std;
int main()
{
    int month;
    cin >> month;
    // write your code here......
    if (month > 12 || month < 1)
        cout << "不合法";
    else if (month >= 12 || month <= 2)
        cout << "冬季";
    else if (month <= 5)
        cout << "春季";
    else if (month <= 8)
        cout << "夏季";
    else
        cout << "秋季";
    return 0;
}