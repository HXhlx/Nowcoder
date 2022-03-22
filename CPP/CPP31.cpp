#include <iostream>
using namespace std;
int mystrcmp(const char *src, const char *dst);
int main()
{
    char s1[100] = {0}, s2[100] = {0};
    cin.getline(s1, sizeof(s1));
    cin.getline(s2, sizeof(s2));
    int ret = mystrcmp(s1, s2);
    cout << ret << endl;
    return 0;
}
int mystrcmp(const char *src, const char *dst)
{
    // write your code here......
    for (wint_t i = 0; i < 100; ++i)
        if (src[i] > dst[i])
            return 1;
        else if (src[i] < dst[i])
            return -1;
        else if (src[i] == 0)
            return 0;
    return 0;
}