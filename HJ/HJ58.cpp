#include <bits/stdc++.h>
using namespace std;
void print(priority_queue<wint_t> &vals)
{
    wint_t val = vals.top();
    vals.pop();
    if (!vals.empty())
        print(vals);
    cout << val << ' ';
}
int main()
{
    wint_t k, n, val;
    while (cin >> n >> k)
    {
        priority_queue<wint_t> vals;
        k = min(k, n);
        for (wint_t i = 0; i < k; ++i)
        {
            cin >> val;
            vals.emplace(val);
        }
        for (wint_t i = k; i < n; ++i)
        {
            cin >> val;
            vals.emplace(val);
            vals.pop();
        }
        print(vals);
        cout << endl;
    }
}