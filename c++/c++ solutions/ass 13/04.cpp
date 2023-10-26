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
    if (n == 1)
        return 1;
    return n*n + sumSquare(n - 1);
}