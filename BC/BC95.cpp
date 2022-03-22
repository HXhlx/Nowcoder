#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned n;
    vector<wint_t> six;
    for (cin >> n; n; n /= 6)
        six.emplace_back(n % 6);
    reverse_copy(six.begin(), six.end(), ostream_iterator<wint_t>(cout, ""));
}