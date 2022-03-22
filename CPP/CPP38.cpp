#include <iostream>
using namespace std;
class Cube
{
    // write your code here......
    int length, width, height;

public:
    void setLength(int l) { length = l; }
    void setWidth(int w) { width = w; }
    void setHeight(int h) { height = h; }
    int getLength() { return length; }
    int getWidth() { return width; }
    int getHeight() { return height; }
    int getArea() { return (length * width + length * height + width * height) << 1; }
    int getVolume() { return length * width * height; }
};
int main()
{
    int length, width, height;
    cin >> length >> width >> height;
    Cube c;
    c.setLength(length);
    c.setWidth(width);
    c.setHeight(height);
    cout << c.getLength() << " " << c.getWidth() << " " << c.getHeight() << " " << c.getArea() << " " << c.getVolume() << endl;
    return 0;
}