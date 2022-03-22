#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long factorial = 1;
    // write your code here......
    while (n)
        factorial *= n--;
    cout << factorial << endl;
    return 0;
}