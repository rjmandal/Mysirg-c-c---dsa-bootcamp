#include <iostream>
using namespace std;
int hcf(int, int);
int main()
{
    int n1, n2;
    cout << "enter the no :";
    cin >> n1 >> n2;
    cout << hcf(n1, n2);
}
int hcf(int a, int b)
{
    if (a % b == 0)
        return b;
    if (b % a == 0)
        return a;

    return a > b ? hcf(a % b, b) : hcf(b % a, a);
}