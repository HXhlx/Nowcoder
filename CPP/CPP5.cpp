#include <iostream>
using namespace std;
int main()
{
    // write your code here......
    int a, b;
    cin >> a >> b;
    if (a < b)
        swap(a, b);
    cout << a + b << ' ' << a - b << ' ' << a * b << ' ' << a / b << ' ' << a % b;
    return 0;
}