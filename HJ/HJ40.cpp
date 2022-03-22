#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[1000];
    while (cin.getline(s, 1000))
    {
        array<wint_t, 4> nums{};
        for (wint_t i = 0; s[i]; ++i)
            if (isalpha(s[i]))
                ++nums[0];
            else if (s[i] == ' ')
                ++nums[1];
            else if (isdigit(s[i]))
                ++nums[2];
            else
                ++nums[3];
        copy(nums.begin(), nums.end(), ostream_iterator<wint_t>(cout, "\n"));
    }
}