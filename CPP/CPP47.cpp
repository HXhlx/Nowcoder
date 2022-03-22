#include <iostream>
// write your code here......
#include <vector>
#include <iterator>
using namespace std;
int main()
{
    // write your code here......
    vector<int> vec(5);
    copy(istream_iterator<int>(cin), istream_iterator<int>(), vec.begin());
    copy(vec.begin(), vec.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    copy(vec.rbegin(), vec.rend(), ostream_iterator<int>(cout, " "));
    return 0;
}