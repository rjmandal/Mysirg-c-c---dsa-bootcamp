// 2. Write a recursive function to calculate sum of first N even natural numbers

#include <iostream>
using namespace std;
int sumEvenNatural(int);
int main()
{
    int n;
    cout << "enter the no :";
    cin >> n;
    cout << sumEvenNatural(n);
}
int sumEvenNatural(int n)
{
    if (n == 1)
        return 2;
    return n*2 + sumEvenNatural(n - 1);
}