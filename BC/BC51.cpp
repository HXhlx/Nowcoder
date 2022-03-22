#include <bits/stdc++.h>
using namespace std;
int main()
{
    for (wint_t score; cin >> score;)
        cout << (score >= 60 ? "Pass" : "Fail") << endl;
}