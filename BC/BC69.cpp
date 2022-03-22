#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<wint_t, string> http{{200, "OK"}, {202, "Accepted"}, {400, "Bad Request"}, {403, "Forbidden"}, {404, "Not Found"}, {500, "Internal Server Error"}, {502, "Bad Gateway"}};
    for (wint_t h; cin >> h;)
        cout << http[h] << endl;
}