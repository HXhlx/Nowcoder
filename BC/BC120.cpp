#include <bits/stdc++.h>
using namespace std;
int main()
{
    wint_t n;
    cin >> n;
    wint_t scores[n];
    for (wint_t i = 0; i < n; ++i)
        cin >> scores[i];
    partial_sort(scores, scores + 5, scores + n, greater<wint_t>());
    copy(scores, scores + 5, ostream_iterator<wint_t>(cout, " "));
}