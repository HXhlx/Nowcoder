#include <iostream>
#include <deque>
using namespace std;
class Guest
{
public:
    string name;
    bool vip;
    Guest(string name, bool vip)
    {
        this->name = name;
        this->vip = vip;
    }
};
int main()
{
    Guest guest1("张三", false), guest2("李四", false), vipGuest("王五", true);
    deque<Guest> deque;
    // write your code here......
    deque.emplace_back(guest1);
    deque.emplace_back(guest2);
    deque.emplace_front(vipGuest);
    for (Guest g : deque)
        cout << g.name << " ";
    return 0;
}