#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // write your code here......
    wint_t nums[n];
    for (wint_t i = 0; i < n; ++i)
        nums[i] = i + n;
    for (wint_t i = 0; i < n; ++i)
        cout << nums[i] << ' ';
    return 0;
}