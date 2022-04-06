#include <bits/stdc++.h>
using namespace std;
int main()
{
    wint_t m, n, u, v;
    cin >> n >> m;
    bool graph[n][n];
    fill(graph[0], graph[0] + n * n, false);
    for (wint_t i = 0; i < m; ++i)
    {
        cin >> u >> v;
        graph[u - 1][v - 1] = graph[v - 1][u - 1] = true;
    }
    for (wint_t i = 0; i < n; ++i)
    {
        copy(graph[i], graph[i] + n, ostream_iterator<bool>(cout, " "));
        cout << endl;
    }
}