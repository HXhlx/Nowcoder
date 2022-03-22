#include <iostream>
using namespace std;
int main()
{
    char str[30] = {0};
    cin.getline(str, sizeof(str));
    int m;
    cin >> m;
    // write your code here......
    for (char *p = str + m - 1; *p; ++p)
        cout.put(*p);
    return 0;
}