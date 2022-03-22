#include <iostream>
// write your code here......
#include <algorithm>
#include <iomanip>
#include <map>
#include <vector>
using namespace std;
class Employee
{
    string name;
    double salary;
    // write your code here......
    const static map<size_t, pair<double, wint_t>> getTax;

public:
    Employee(string n, double s) : name(n), salary(s) {}
    string &getName() { return name; }
    double getSalary() { return salary; }
    double getPersonalIncomeTax()
    {
        double tax = salary - 3500;
        if (tax < 0)
            return 0;
        map<size_t, std::pair<double, wint_t>>::const_iterator p = getTax.lower_bound(tax);
        return tax * p->second.first - p->second.second;
    }
};
const map<size_t, pair<double, wint_t>> Employee::getTax{{1500, {0.03, 0}}, {4500, {0.1, 105}}, {9000, {0.2, 555}}, {35000, {0.25, 1005}}, {55000, {0.3, 2755}}, {80000, {0.35, 5505}}, {18446744073709551615, {0.45, 13505}}};
int main()
{
    // write your code here......
    vector<Employee> employees{Employee("张三", 6500), Employee("李四", 8000), Employee("王五", 100000)};
    sort(employees.begin(), employees.end(), [](Employee &a, Employee &b)
         { return a.getSalary() > b.getSalary(); });
    for (Employee &e : employees)
        cout << e.getName() << "应该缴纳的个人所得税是：" << setiosflags(ios::fixed) << setprecision(1) << e.getPersonalIncomeTax() << endl;
    return 0;
}