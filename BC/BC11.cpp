#include <bits/stdc++.h>
using namespace std;
int main()
{
    array<wint_t, 3> scores;
    for (wint_t &n : scores)
        cin >> n;
    cout << "score1=" << scores[0] << ",score2=" << scores[1] << ",score3=" << scores[2];
}