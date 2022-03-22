#include <bits/stdc++.h>
using namespace std;
int main()
{
    wint_t n;
    cin >> n;
    float scores[n];
    for (wint_t i = 0; i < n; ++i)
        cin >> scores[i];
    cout << setiosflags(ios::fixed) << setprecision(2) << *max_element(scores, scores + n) << ' ' << *min_element(scores, scores + n) << ' ' << accumulate(scores, scores + n, 0.f) / n;
}