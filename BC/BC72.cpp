#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
int main()
{
    tm dmy = tm(), dmy1 = tm();
    cin >> dmy.tm_year >> dmy.tm_mon >> dmy.tm_mday >> dmy1.tm_year >> dmy1.tm_mon >> dmy1.tm_mday;
    cout << (system_clock::from_time_t(mktime(&dmy)) <= system_clock::from_time_t(mktime(&dmy1)) ? "yes" : "no");
}