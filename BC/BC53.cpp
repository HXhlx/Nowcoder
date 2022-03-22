#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<char> vowel{'a', 'e', 'i', 'o', 'u'};
    for (char c; cin >> c;)
        cout << (vowel.find(tolower(c)) == vowel.end() ? "Consonant" : "Vowel") << endl;
}