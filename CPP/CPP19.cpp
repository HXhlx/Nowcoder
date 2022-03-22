#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {0}, len = sizeof(arr) / sizeof(int);
    for (int i = 0; i < len; i++)
        cin >> arr[i];
    // write your code here......
    int m = arr[0], M = arr[0];
    for (wint_t i = 1; i < 6; ++i)
    {
        m = min(m, arr[i]);
        M = max(M, arr[i]);
    }
    cout << m << ' ' << M;
    return 0;
}