#include <iostream>
using namespace std;
class Person
{
    int age;
    // write your code here......
    friend void showAge(Person &p);

public:
    Person(int age) { this->age = age; }
};
void showAge(Person &p) { cout << p.age << endl; }
int main()
{
    Person p(10);
    showAge(p);
    return 0;
}