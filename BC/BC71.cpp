#include <bits/stdc++.h>
using namespace std;
int main()
{
    for (wint_t a, b, c; cin >> a >> b >> c;)
        if (a == b && a == c)
            cout << "Equilateral triangle!" << endl;
        else if (a + b > c && a + c > b && b + c > a)
            cout << (a == b || a == c || b == c ? "Isosceles" : "Ordinary") << " triangle!" << endl;
        else
            cout << "Not a triangle!" << endl;
}