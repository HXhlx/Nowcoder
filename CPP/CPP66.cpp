#include <bits/stdc++.h>
using namespace std;
class rectangle
{
    int length, width;

public:
    rectangle(int x, int y)
    {
        length = x;
        width = y;
    }
    void set(int x, int y)
    {
        length = x;
        width = y;
    }
    int getlength() { return length; }
    int getwidth() { return width; }
    int area() { return length * width; }
};
class cuboid : public rectangle
{
    int height;

public:
    // write your code here...
    cuboid(int x, int y, int z) : rectangle(x, y), height(z) {}
    unsigned area() { return (rectangle::area() + getlength() * height + getwidth() * height) << 1; }
};
int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    cuboid a(x, y, z);
    cout << a.rectangle::area() << endl
         << a.area();
    return 0;
}