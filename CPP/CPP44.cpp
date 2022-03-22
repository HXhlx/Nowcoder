#include <iostream>
using namespace std;
class Base
{
    int x, y;

public:
    Base(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    int getX() { return x; }
    int getY() { return y; }
};

class Sub : public Base
{
    int z;

public:
    Sub(int x, int y, int z) : Base(x, y), z(z)
    { // write your code here
    }
    int getZ() { return z; }
    int calculate() { return Base::getX() * Base::getY() * this->getZ(); }
};
int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    Sub sub(x, y, z);
    cout << sub.calculate() << endl;
    return 0;
}