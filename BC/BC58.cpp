#include <bits/stdc++.h>
using namespace std;
int main()
{
    float h, m;
    cin >> m >> h;
    float BMI = m / h / h;
    cout << (BMI >= 18.5 && BMI <= 23.9 ? "Normal" : "Abnormal");
}