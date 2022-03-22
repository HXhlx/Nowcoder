#include <bits/stdc++.h>
using namespace std;
class TDate
{
    wint_t Year, Month, Day;
    friend istream &operator>>(istream &, TDate &);
    friend ostream &operator<<(ostream &, TDate &);

public:
    TDate(wint_t y = 0, wint_t m = 0, wint_t d = 0) : Year(y), Month(m), Day(d) {}
};
istream &operator>>(istream &is, TDate &date)
{
    is >> date.Year >> date.Month >> date.Day;
    return is;
}
ostream &operator<<(ostream &os, TDate &date)
{
    os << date.Day << '/' << date.Month << '/' << date.Year;
    return os;
}
int main()
{
    TDate date;
    cin >> date;
    cout << date;
}