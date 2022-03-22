#include <bits/stdc++.h>
using namespace std;
int main()
{
    array<wint_t, 26> links{2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 9, 9, 9, 9};
    string password;
    cin >> password;
    for (char c : password)
        if (islower(c))
            cout << links[c - 97];
        else if (isupper(c))
            cout.put(c + 33 == 123 ? 'a' : c + 33);
        else
            cout << c;
}