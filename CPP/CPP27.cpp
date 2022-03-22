#include <iostream>
using namespace std;
int main()
{
    char str[100] = {0};
    cin.getline(str, sizeof(str));
    // write your code here......
    wint_t n = 0;
    for (char *p = str; *p; ++p)
        ++n;
    cout << n;
    return 0;
}