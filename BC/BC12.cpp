#include <bits/stdc++.h>
using namespace std;
int main()
{
    array<double, 3> scores;
    unsigned n;
    cin >> n;
    cin.ignore();
    for (double &score : scores)
    {
        cin >> score;
        score = round(score * 100) / 100;
        cin.ignore();
    }
    cout << "The each subject score of No. " << n << " is " << setiosflags(ios::fixed) << setprecision(2) << scores[0] << ", " << scores[1] << ", " << scores[2] << '.';
}