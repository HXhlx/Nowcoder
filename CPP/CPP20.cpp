#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {0}, len = sizeof(arr) / sizeof(int);
    for (int i = 0; i < len; i++)
        cin >> arr[i];
    cout << "[";
    for (int i = 0; i < len; i++)
    {
        if (i == len - 1)
        {
            cout << arr[i] << "]" << endl;
            break;
        }
        cout << arr[i] << ", ";
    }
    // write your code here......
    for (wint_t i = 0, j = 5; i < j; ++i, --j)
        swap(arr[i], arr[j]);
    cout << "[";
    for (int i = 0; i < len; i++)
    {
        if (i == len - 1)
        {
            cout << arr[i] << "]" << endl;
            break;
        }
        cout << arr[i] << ", ";
    }
    return 0;
}