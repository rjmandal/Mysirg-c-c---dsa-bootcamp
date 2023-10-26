#include <iostream>
using namespace std;
int power(int, int);
int main()
{
    int n, p;
    cout << "enter the no :";
    cin >> n;
    cout << "enter the power : ";
    cin >> p;
    cout << power(n, p);
}
int power(int n, int p)
{
    if (p == 1)
        return n;
    if (p == 0)
        return 1;
    return n * power(n, --p);
}
