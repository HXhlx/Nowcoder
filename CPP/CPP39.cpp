#include <iostream>
using namespace std;
// 点类
class Pointer
{
    int x, y; // x 坐标 // y 坐标
public:
    void setX(int x) { this->x = x; }
    int getX() { return x; }
    void setY(int y) { this->y = y; }
    int getY() { return y; }
};
// 圆类
class Circle
{
private:
    Pointer center; // 圆心
    int radius;     // 半径
public:
    void setCenter(int x, int y)
    {
        center.setX(x);
        center.setY(y);
    }
    void setRadius(int radius) { this->radius = radius; }
    // write your code here......
    void isPointerInCircle(Pointer &p)
    {
        int s = (center.getX() - p.getX()) * (center.getX() - p.getX()) + (center.getY() - p.getY()) * (center.getY() - p.getY());
        if (s > radius * radius)
            cout << "out";
        else if (s < radius * radius)
            cout << "in";
        else
            cout << "on";
    }
};
int main()
{
    // 键盘输入点的坐标
    int x, y;
    cin >> x >> y;
    // 创建一个点
    Pointer p;
    p.setX(x);
    p.setY(y);
    // 创建一个圆
    Circle c;
    c.setCenter(5, 0);
    c.setRadius(5);
    // 判断点和圆的关系
    c.isPointerInCircle(p);
    return 0;
}