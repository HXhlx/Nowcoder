#include <bits/stdc++.h>
using namespace std;
int main()
{
    for (float a, b, c; cin >> a >> b >> c;)
        if (a)
        {
            float delta = b * b - 4 * a * c;
            if (delta > 0)
            {
                float x1 = -(b + sqrt(delta)) / (a * 2), x2 = -x1 - b / a;
                cout << setiosflags(ios::fixed) << setprecision(2) << "x1=" << x1 << ";x2=" << x2 << endl;
            }
            else if (delta < 0)
            {
                complex<float> x1 = (0 - b - complex<float>(0, sqrt(-delta))) / (a * 2), x2 = 0.f - x1 - b / a;
                cout << setiosflags(ios::fixed) << setprecision(2) << "x1=" << x1.real() << x1.imag() << "i;x2=" << x2.real() << '+' << x2.imag() << 'i' << endl;
            }
            else
                cout << setiosflags(ios::fixed) << setprecision(2) << "x1=x2=" << -b / (a * 2) + 0 << endl;
        }
        else
            cout << "Not quadratic equation" << endl;
}