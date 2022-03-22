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
    void calculate() { cout << getX() * getY() << endl; }
};
class Sub : public Base
{
    // write your code here......
public:
    Sub(int x, int y) : Base(x, y) {}
    void calculate()
    {
        if (getY() == 0)
            cout << "Error";
        else
            cout << getX() / getY();
    }
};
int main()
{
    int x, y, z;
    cin >> x >> y;
    Sub sub(x, y);
    sub.calculate();
    return 0;
}