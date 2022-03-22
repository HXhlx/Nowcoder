#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double price;
    cin >> price;
    double cost = 0.0;
    // write your code here.......
    if (price >= 5000)
        cost = 0.6 * price;
    else if (price >= 2000)
        cost = 0.7 * price;
    else if (price >= 500)
        cost = 0.8 * price;
    else if (price >= 100)
        cost = 0.9 * price;
    else
        cost = price;
    cout << setiosflags(ios::fixed) << setprecision(1) << cost << endl;
    return 0;
}