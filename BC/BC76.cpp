#include <bits/stdc++.h>
using namespace std;
int main()
{
    string ISBN;
    wint_t isbn = 0;
    cin >> ISBN;
    for (wint_t i = 0, j = 0; i < 11; ++i)
        if (i != 1 && i != 5)
            isbn += (ISBN[i] - 48) * ++j;
    if (isbn %= 11; isbn == (ISBN.back() == 'X' ? 10 : ISBN.back() - 48))
        cout << "Right";
    else
    {
        ISBN.back() = isbn == 10 ? 'X' : isbn + 48;
        cout << ISBN;
    }
}