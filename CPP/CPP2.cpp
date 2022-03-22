#include <iostream>
using namespace std;
int main()
{
    double d;
    cin >> d;
    // write your code here......
    cout << static_cast<int>(d + (d > 0 ? 0.5 : -0.5));
    return 0;
}