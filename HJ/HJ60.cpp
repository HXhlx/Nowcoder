#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<wint_t> nums;
    for (wint_t n; cin >> n;)
        nums.emplace_back(n);
    bitset<1000> visited;
    set<wint_t> primes;
    for (wint_t i = 2, m = *max_element(nums.begin(), nums.end()); i < m; ++i)
    {
        if (!visited[i])
            primes.insert(i);
        for (set<wint_t>::iterator it = primes.begin(); it != primes.end() && i * *it < m; ++it)
        {
            visited.set(i * *it);
            if (i % *it == 0)
                break;
        }
    }
    for (wint_t n : nums)
    {
        wint_t hn = n >> 1;
        if (!visited[hn])
        {
            cout << hn << endl
                 << hn << endl;
            continue;
        }
        for (wint_t l = (hn - 1) / 2 * 2 + 1, r = hn / 2 * 2 + 1; l >= 3; l -= 2, r += 2)
            if (!visited[l] && !visited[r])
            {
                cout << l << endl
                     << r << endl;
                break;
            }
    }
}