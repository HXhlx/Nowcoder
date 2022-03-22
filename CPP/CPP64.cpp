#include <iostream>
using namespace std;
class Time
{
public:
    int hours, minutes; // 小时, 分钟
    Time(int h = 0, int m = 0) : hours(h), minutes(m) {}
    void show() { cout << hours << " " << minutes << endl; }
    // write your code here......
    bool operator<(Time &t) { return hours * 60 + minutes < t.hours * 60 + t.minutes; }
};
int main()
{
    int h, m;
    cin >> h >> m;
    Time t1(h, m), t2(6, 6);
    cout << (t1 < t2 ? "yes" : "no");
    return 0;
}