#include <iostream>
using namespace std;
int main()
{
    double weight, height;
    cin >> weight >> height;
    // write your code here......
    double BMI = weight / height / height;
    if (BMI >= 24.9)
        cout << "偏胖" << endl;
    else if (BMI >= 20.9)
        cout << "适中" << endl;
    else if (BMI >= 18.5)
        cout << "苗条" << endl;
    else
        cout << "偏瘦" << endl;
    return 0;
}