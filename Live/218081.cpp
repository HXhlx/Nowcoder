#include <bits/stdc++.h>
using namespace std;
void quick_sort(wint_t *s, wint_t *e)
{
    if (s != e)
    {
        wint_t pivot = *s, *S = partition(s, e, [pivot](wint_t n)
                                          { return n < pivot; }),
               *E = partition(S, e, [pivot](wint_t n)
                              { return n == pivot; });
        quick_sort(s, S);
        quick_sort(E, e);
    }
}
int main()
{
    wint_t n;
    cin >> n;
    wint_t nums[n];
    for (wint_t i = 0; i < n; ++i)
        cin >> nums[i];
    quick_sort(nums, nums + n);
    copy(nums, nums + n, ostream_iterator<wint_t>(cout, " "));
}