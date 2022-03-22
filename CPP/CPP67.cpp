#include <bits/stdc++.h>
using namespace std;
class rectangle
{
    int length, width;

public:
    rectangle(int x, int y) : length(x), width(y) {}
    void set(int x, int y)
    {
        length = x;
        width = y;
    }
    int getlength() { return length; }
    int getwidth() { return width; }
    // write your code here...
    virtual unsigned getval() { return length * width; }
};
class cuboid : public rectangle
{
    int height;

public:
    cuboid(int x, int y, int z) : rectangle(x, y), height(z) {}
    // write your code here...
    unsigned getval() { return rectangle::getval() * height; }
};
int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    cuboid a(x, y, z);
    rectangle b(x, y), *p = &b;
    cout << p->getval() << '\n';
    p = &a;
    cout << p->getval();
    return 0;
}