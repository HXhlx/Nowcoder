#include <bits/stdc++.h>
using namespace std;
struct Apple
{
    wint_t ID, price;
    string name;
};
int main()
{
    wint_t k, n;
    cin >> n >> k;
    Apple apples[n];
    for (wint_t i = 0; i < n; ++i)
        cin >> apples[i].ID >> apples[i].name >> apples[i].price;
    partial_sort(apples, apples + k, apples + n, [](Apple &a, Apple &b)
                 { return a.price < b.price; });
    cout << accumulate(apples, apples + k, 0, [](wint_t s, Apple &a)
                       { return s + a.price; });
}