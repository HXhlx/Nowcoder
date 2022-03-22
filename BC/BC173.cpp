#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin >> n;
    reverse_copy(n.begin(), n.end(), ostreambuf_iterator<char>(cout));
}