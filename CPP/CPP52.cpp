#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int letter = 0, digit = 0, space = 0, other = 0;
    char buf[1024] = {0};
    cin.getline(buf, sizeof(buf));
    // write your code here......
    for (wint_t i = 0; buf[i]; ++i)
        if (isalpha(buf[i]))
            ++letter;
        else if (isdigit(buf[i]))
            ++digit;
        else if (isspace(buf[i]))
            ++space;
        else
            ++other;
    cout << "letter:" << letter << " digit:" << digit << " space:" << space << " other:" << other << endl;
    return 0;
}