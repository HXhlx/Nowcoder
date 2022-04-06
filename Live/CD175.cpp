#include <bits/stdc++.h>
using namespace std;
array<array<unsigned, 3>, 500001> nodes;
int main()
{
    unsigned n, root, fa, lch, rch, node;
    cin >> n >> root;
    for (unsigned i = 0; i < n; ++i)
    {
        cin >> fa >> lch >> rch;
        nodes[fa][1] = lch;
        nodes[fa][2] = rch;
        nodes[lch][0] = nodes[rch][0] = fa;
    }
    cin >> node;
    if (nodes[node][2])
    {
        unsigned res = nodes[node][2];
        while (nodes[res][1])
            res = nodes[res][1];
        cout << res;
    }
    else
    {
        unsigned parent = nodes[node][0], sub = node;
        while (parent && nodes[parent][2] == sub)
        {
            sub = parent;
            parent = nodes[parent][0];
        }
        cout << parent;
    }
}