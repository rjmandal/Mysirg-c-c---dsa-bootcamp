#include <iostream>
using namespace std;
int sumSquare(int);
int main()
{
    int n;
    cout << "enter the no :";
    cin >> n;
    cout << sumSquare(n);
}
int sumSquare(int n)
{
    if (n == 0)
        return 0;
    return n%10 + sumSquare(n/10);
}