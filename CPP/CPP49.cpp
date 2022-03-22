#include <iostream>
// write your code here......
#include <set>
using namespace std;
int main()
{
    char str[100] = {0};
    cin.getline(str, sizeof(str));
    // write your code here......
    set<char> unique;
    for (wint_t i = 0; str[i]; ++i)
        unique.insert(str[i]);
    copy(unique.begin(), unique.end(), ostreambuf_iterator<char>(cout));
    return 0;
}