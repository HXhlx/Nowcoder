#include <bits/stdc++.h>
using namespace std;
wint_t N;
void InOrder(wint_t l, string s)
{
    if (l > N)
        return;
    InOrder(l + 1, "down");
    cout << s << endl;
    InOrder(l + 1, "up");
}
int main()
{
    cin >> N;
    InOrder(1, "down");
}