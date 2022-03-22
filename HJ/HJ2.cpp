#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch, str[1001];
    wint_t n = 0;
    cin.getline(str, 1001);
    cin >> ch;
    for (wint_t i = 0; str[i]; ++i)
        if (str[i] == ch || isalpha(str[i]) && isalpha(ch) && tolower(str[i]) == tolower(ch))
            ++n;
    cout << n;
}