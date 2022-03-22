#include <iostream>
#include <cstring>
#pragma warning(disable : 4996)
using namespace std;
class Person
{
public:
    char *name; // 姓名
    int age;    // 年龄
    Person(const char *name, int age)
    {
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
        this->age = age;
    }
    // write your code here......
    Person(const Person &person)
    {
        name = new char[strlen(person.name)];
        strcpy(name, person.name);
        age = person.age;
    }
    void showPerson() { cout << name << " " << age << endl; }
    ~Person()
    {
        if (name != nullptr)
        {
            delete[] name;
            name = nullptr;
        }
    }
};
int main()
{
    char name[100] = {0};
    int age;
    cin >> name >> age;
    Person p1(name, age), p2 = p1;
    p2.showPerson();
    return 0;
}