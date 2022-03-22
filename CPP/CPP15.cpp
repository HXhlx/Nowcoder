#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // write your code here......
    for (wint_t i = 1; i <= n; ++i)
    {
        for (wint_t j = 1; j <= i; ++j)
            cout << j << " * " << i << " = " << i * j << "    ";
        cout << endl;
    }
    return 0;
}