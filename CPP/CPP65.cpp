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
    int area() { return length * width; }
};
class cuboid : public rectangle
{
    int height;

public:
    // write your code here...
    cuboid(int x, int y, int z) : rectangle(x, y), height(z) {}
    unsigned getvolume() { return area() * height; }
};
int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    cuboid a(x, y, z);
    cout << a.getvolume();
    return 0;
}