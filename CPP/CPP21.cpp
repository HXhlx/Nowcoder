#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {0};
    int len = sizeof(arr) / sizeof(int);
    for (int i = 0; i < len; i++)
        cin >> arr[i];
    // write your code here......
    for (wint_t i = 0; i < 5; ++i)
    {
        bool is_sorted = true;
        for (wint_t j = 1; j < 6 - i; ++j)
            if (arr[j] < arr[j - 1])
            {
                swap(arr[j], arr[j - 1]);
                is_sorted = false;
            }
        if (is_sorted)
            break;
    }
    for (int a : arr)
        cout << a << ' ';
    return 0;
}