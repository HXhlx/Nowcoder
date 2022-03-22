#include <iostream>
#include <vector>
// write your code here......
#include <algorithm>
#include <iterator>
using namespace std;
int main()
{
    int num;
    vector<int> v;
    for (int i = 0; i < 5; i++)
    {
        cin >> num;
        v.push_back(num);
    }
    // write your code here......
    sort(v.begin(), v.end(), greater<int>());
    copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
    return 0;
}