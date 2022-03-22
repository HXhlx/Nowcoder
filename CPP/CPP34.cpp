#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    int whitespace = 0, digits = 0, chars = 0, others = 0;
    // write your code here......
    for (char c : str)
        if (isalpha(c))
            ++chars;
        else if (isdigit(c))
            ++digits;
        else if (isspace(c))
            ++whitespace;
        else
            ++others;
    cout << "chars : " << chars << " whitespace : " << whitespace << " digits : " << digits << " others : " << others << endl;
    return 0;
}