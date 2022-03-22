#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n1, n2, n;
    char o;
    cin >> n1 >> o >> n2;
    switch (o)
    {
    case '+':
        n = n1 + n2;
        break;
    case '-':
        n = n1 - n2;
        break;
    case '*':
        n = n1 * n2;
        break;
    case '/':
        if (n2)
            n = n1 / n2;
        else
        {
            cout << "Wrong!Division by zero!";
            return 0;
        }
        break;
    default:
        cout << "Invalid operation!";
        return 0;
        break;
    }
    cout << setiosflags(ios::fixed) << setprecision(4) << n1 << o << n2 << '=' << n;
}