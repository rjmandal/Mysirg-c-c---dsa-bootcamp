// 2. Write a recursive function to calculate sum of first N odd natural numbers

#include <iostream>
using namespace std;
int sumOddNatural(int);
int main()
{
    int n;
    cout << "enter the no :";
    cin >> n;
    cout << sumOddNatural(n);
}
int sumOddNatural(int n)
{
    if (n == 1)
        return 1;
    return n*2-1 + sumOddNatural(n - 1);
}