#include <iostream>
using namespace std;
class BaseCalculator
{
public:
    int m_A, m_B;
    // write your code here......
    virtual int getResult() = 0;
};
// 加法计算器类
class AddCalculator : public BaseCalculator
{
    // write your code here......
public:
    int getResult() { return m_A + m_B; }
};
// 减法计算器类
class SubCalculator : public BaseCalculator
{
    // write your code here......
public:
    int getResult() { return m_A - m_B; }
};
int main()
{
    BaseCalculator *cal = new AddCalculator;
    cal->m_A = 10;
    cal->m_B = 20;
    cout << cal->getResult() << endl;
    delete cal;
    cal = new SubCalculator;
    cal->m_A = 20;
    cal->m_B = 10;
    cout << cal->getResult() << endl;
    delete cal;
    return 0;
}