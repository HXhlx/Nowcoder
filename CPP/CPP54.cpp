#include <iostream>
using namespace std;
int main()
{
    char str[100] = {0};
    cin.getline(str, sizeof(str));
    // write your code here......
    string opt(str, 3), num;
    wint_t i = 4;
    while (str[i] != ' ')
        num += str[i++];
    short n1 = stoi(num);
    num.clear();
    while (str[++i])
        num += str[i];
    short n2 = stoi(num);
    switch (tolower(opt[0]))
    {
    case 'a':
        cout << n1 + n2;
        break;
    case 'd':
        if (n2)
            cout << n1 / n2;
        else
            cout << "Error";
        break;
    case 'm':
        cout << n1 * n2;
        break;
    case 's':
        cout << n1 - n2;
        break;
    }
    return 0;
}