#include <iostream>
#include <string>
using namespace std;
struct student
{
    // write your code here......
    string name;
    wint_t age;
    double height;
};
int main()
{
    // write your code here......
    student stu;
    cin >> stu.name >> stu.age >> stu.height;
    cout << stu.name << ' ' << stu.age <<' ' << stu.height;
    return 0;
}