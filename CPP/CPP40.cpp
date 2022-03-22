#include <iostream>
#include <string>
using namespace std;
// Person类
class Person
{
public:
    string name; // 姓名
    int age;     // 年龄
    // write your code here......
    Person(string n, int a) : name(n), age(a) {}
    void showPerson() { cout << name << " " << age << endl; }
};
int main()
{
    string name;
    int age;
    cin >> name >> age;
    Person p(name, age);
    p.showPerson();
    return 0;
}