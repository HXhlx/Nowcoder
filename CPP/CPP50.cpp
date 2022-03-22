#include <iostream>
// write your code here......
#include <map>
using namespace std;
int main()
{
    char str[100] = {0};
    cin.getline(str, sizeof(str));
    // write your code here......
    map<char, wint_t> counts;
    for (wint_t i = 0; str[i]; ++i)
        if (isalpha(str[i]))
            ++counts[str[i]];
    for (pair<const char, wint_t> &c : counts)
        cout << c.first << ':' << c.second << endl;
    return 0;
}