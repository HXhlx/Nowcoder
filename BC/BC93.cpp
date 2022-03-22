#include <bits/stdc++.h>
using namespace std;
int main()
{
    array<wint_t, 7> scores;
    for (wint_t i = 0; cin >> scores[i % 7]; ++i)
        if (i % 7 == 6)
            cout << setiosflags(ios::fixed) << setprecision(2) << (accumulate(scores.begin(), scores.end(), 0) - *min_element(scores.begin(), scores.end()) - *max_element(scores.begin(), scores.end())) / 5. << endl;
}