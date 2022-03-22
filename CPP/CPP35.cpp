#include <iostream>
using namespace std;
long long factorial(int n);
int main()
{
    int n;
    cin >> n;
    cout << factorial(n) << endl;
    return 0;
}
long long factorial(int n)
{
    // write your code here......
    return n == 1 ? 1 : n * factorial(n - 1);
}