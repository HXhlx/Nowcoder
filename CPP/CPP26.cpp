#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {0}, *ptr = arr, len = sizeof(arr) / sizeof(int);
    for (int i = 0; i < len; i++)
        cin >> arr[i];
    // write your code here......
    for (wint_t i = 0; i < len; ++i)
        cout << *ptr++ << ' ';
    return 0;
}