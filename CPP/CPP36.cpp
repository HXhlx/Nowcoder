#include <iostream>
using namespace std;
int getSum(int n);
int main()
{
    int n;
    cin >> n;
    cout << getSum(n) << endl;
    return 0;
}
int getSum(int n)
{
    // write your code here......
    pair<int, int> counts{1, 1};
    for (int i = 3; i <= n; ++i)
        counts = {counts.second, counts.first + counts.second};
    return counts.second;
}