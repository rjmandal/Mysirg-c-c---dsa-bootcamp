#include <iostream>
using namespace std;
int fibonnaci(int);
int main()
{
    int n;
    cout << "enter the no :";
    cin >> n;
    for (int i = 1; i <= n; i++)
        cout << fibonnaci(i) << endl;
}
int fibonnaci(int n)
{
    if (n == 0 || n == 1)
        return n;
    return fibonnaci(n - 1) + fibonnaci(n - 2);
}
