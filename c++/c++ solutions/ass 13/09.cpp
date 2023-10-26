#include <iostream>
using namespace std;
int count(int);
int main()
{
    int n;
    cout << "enter the no :";
    cin >> n;
    cout<<count(n);
}
int count(int n)
{
    if (n/10==0)
        return 1;
    return count(n/10)+1;
}
