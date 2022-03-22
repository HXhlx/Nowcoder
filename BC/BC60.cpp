#include <bits/stdc++.h>
using namespace std;
int main()
{
    for (char c; cin >> c;)
        cout << c << " is " << (isalpha(c) ? "" : "not ") << "an alphabet." << endl;
}