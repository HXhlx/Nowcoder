#include <bits/stdc++.h>
using namespace std;
class phone
{
    // write your code here......
    int price;
    friend class myphone;

public:
    phone(int x) : price(x) {}
};
class myphone
{
    phone a;

public:
    myphone(int x) : a(x) {}
    int getprice() { return a.price; }
};
int main()
{
    int p;
    cin >> p;
    myphone a(p);
    cout << a.getprice();
    return 0;
}