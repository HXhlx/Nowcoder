#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<unsigned, unsigned> Ps;
    unsigned N;
    cin >> N;
    pair<unsigned, unsigned> P[N];
    for (unsigned n = 0; n < N; ++n)
        cin >> P[n].first >> P[n].second;
    sort(P, P + N, [](pair<unsigned, unsigned> &a, pair<unsigned, unsigned> &b)
         { return a.second > b.second; });
    unsigned x = P[0].first;
    Ps[x] = P[0].second;
    for (unsigned n = 1; n < N; ++n)
        if (P[n].first > x)
        {
            Ps[P[n].first] = P[n].second;
            x = P[n].first;
        }
    for (pair<const unsigned, unsigned> &p : Ps)
        cout << p.first << ' ' << p.second << endl;
}