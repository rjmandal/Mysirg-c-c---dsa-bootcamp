// 1.Write a recursive function to calculate sum of first N natural numbers

#include <iostream>
using namespace std;
int sumNatural(int);
int main()
{
    int n;
    cout << "enter the no :";
    cin >> n;
    cout << sumNatural(n);
}
int sumNatural(int n)
{
    if (n <= 1)
        return 1;
    return n + sumNatural(n - 1);
}