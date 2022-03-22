#include <iostream>
using namespace std;
void func(int *p, int n);
int main()
{
    int arr[6] = {0};
    for (int i = 0; i < 6; i++)
        cin >> arr[i];
    func(arr, 6);
    for (int i = 0; i < 6; i++)
        if (i == 5)
            cout << arr[i] << endl;
        else
            cout << arr[i] << " ";
    return 0;
}
void func(int *p, int n)
{
    // write your code here......
    wint_t i = 0;
    for (wint_t j = 0; j < n; ++i, ++j)
    {
        while (j < n && p[j] == 0)
            ++j;
        p[i] = p[j];
    }
    while (i < n)
        p[i++] = 0;
}