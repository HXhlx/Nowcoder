#include <bits/stdc++.h>
using namespace std;
int main()
{
    wint_t m, n, u, v;
    cin >> n >> m;
    vector<wint_t> graph[n + 1];
    for (wint_t i = 0; i < m; ++i)
    {
        cin >> u >> v;
        graph[u].emplace_back(v);
    }
    for (wint_t i = 1; i <= n; ++i)
    {
        cout << i << "->";
        if (!graph[i].empty())
        {
            reverse_copy(graph[i].begin() + 1, graph[i].end(), ostream_iterator<wint_t>(cout, "->"));
            cout << graph[i].front();
        }
        cout << endl;
    }
}