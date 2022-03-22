#include <bits/stdc++.h>
using namespace std;
class rectangle
{
    int length, width;

public:
    void set(int x, int y)
    {
        length = x;
        width = y;
    }
    int getlength() { return length; }
    int getwidth() { return width; }
    int area() { return length * width; }
    // write your code here......
    string cancover(rectangle &b) { return area() >= b.area() && (length >= b.length && width >= b.width || length >= b.width && width >= b.length) ? "yes" : "no"; }
};
int main()
{
    int l1, w1, l2, w2;
    cin >> l1 >> w1 >> l2 >> w2;
    rectangle a, b;
    a.set(l1, w1);
    b.set(l2, w2);
    cout << a.cancover(b);
    return 0;
}