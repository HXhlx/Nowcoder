#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {0}, len = sizeof(arr) / sizeof(int);
    for (int i = 0; i < len; i++)
        cin >> arr[i];
    // write your code here......
    for (wint_t i = 0; i < 5; ++i)
    {
        int m = i + 1;
        for (wint_t j = i + 2; j < 6; ++j)
            if (arr[m] > arr[j])
                m = j;
        if (arr[i] > arr[m])
            swap(arr[i], arr[m]);
    }
    for (int a : arr)
        cout << a << ' ';
    return 0;
}