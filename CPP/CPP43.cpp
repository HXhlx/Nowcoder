#include <iostream>
using namespace std;
class Time
{
public:
    int hours, minutes; // 小时, 分钟
    Time()
    {
        hours = 0;
        minutes = 0;
    }
    Time(int h, int m)
    {
        this->hours = h;
        this->minutes = m;
    }
    void show() { cout << hours << " " << minutes << endl; }
    // write your code here......
    Time operator+(Time &t)
    {
        Time res(hours + t.hours, minutes + t.minutes);
        if (res.minutes >= 60)
        {
            res.hours += 1;
            res.minutes -= 60;
        }
        return res;
    }
};
int main()
{
    int h, m;
    cin >> h >> m;
    Time t1(h, m), t2(2, 20), t3 = t1 + t2;
    t3.show();
    return 0;
}