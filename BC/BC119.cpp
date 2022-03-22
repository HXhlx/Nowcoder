#include <bits/stdc++.h>
using namespace std;
int main()
{
    wint_t n;
    cin >> n;
    wint_t scores[n];
    for (wint_t i = 0; i < n; ++i)
        cin >> scores[i];
    cout << *max_element(scores, scores + n) - *min_element(scores, scores + n);
}