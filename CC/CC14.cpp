#include <bits/stdc++.h>
using namespace std;
class shape
{
    long double x, y;

public:
    virtual long double GetArea() = 0;
};
class Rectangle : public shape
{
    long double l, w;

public:
    Rectangle(long double length, long double width) : l(length), w(width) {}
    long double GetArea() { return l * w; }
};
class Circle : public shape
{
    long double r;

public:
    Circle(long double radius) : r(radius) {}
    long double GetArea() { return 3.14 * r * r; }
};
class Square : public Rectangle
{
public:
    Square(long double l) : Rectangle(l, l) {}
};
int main()
{
    long double l, r, w;
    cin >> l >> w;
    Rectangle rectangle(l, w);
    cin >> r;
    Circle circle(r);
    cin >> l;
    Square square(l);
    cout << rectangle.GetArea() << endl;
    cout << circle.GetArea() << endl;
    cout << square.GetArea() << endl;
}