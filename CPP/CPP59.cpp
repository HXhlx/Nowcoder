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
    void compare(rectangle a)
    {
        // write your code here......
        cout << (length * width > a.length * a.width);
    }
};
int main()
{
    int l1, w1, l2, w2;
    cin >> l1 >> w1 >> l2 >> w2;
    rectangle a, b;
    a.set(l1, w1);
    b.set(l2, w2);
    a.compare(b);
    return 0;
}