#include <bits/stdc++.h>
using namespace std;
class Array
{
    int n, *a; //数组大小, 数组
public:
    Array()
    {
        cin >> n;
        a = new int[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
    }
    ~Array() { delete[] a; }
    int getlen() { return n; }
    int get(int i) { return a[i]; }
    // write your code here......
    Array(Array &b)
    {
        n = b.n;
        a = new int[n];
        for (unsigned i = 0; i < n; ++i)
            a[i] = b.a[i];
    }
    void show()
    {
        for (int i = 0; i < n; i++)
            cout << a[i] << ' ';
    }
};
int main()
{
    Array a;
    Array b = a;
    b.show();
    return 0;
}