#include <bits/stdc++.h>
using namespace std;
class Array
{
    int n, *a; //数组大小, 数组
public:
    // write your code here......
    Array()
    {
        cin >> n;
        a = new int[n];
        for (unsigned i = 0; i < n; ++i)
            cin >> a[i];
    }
    ~Array() { delete[] a; }
    void show()
    {
        for (int i = 0; i < n; i++)
            cout << a[i] << ' ';
    }
};
int main()
{
    Array a;
    a.show();
    return 0;
}