// 8. Write a recursive function to print binary of a given decimal number

#include <iostream>
using namespace std;
void oddNaturalNo(int);
int main()
{
    int n;
    cout << "enter the no : ";
    cin >> n;
    oddNaturalNo(n);
    return 0;
}
void oddNaturalNo(int n)
{
    if (n > 0)
    {
        cout << n%10<<" ";
        oddNaturalNo(n/10);
    }
}


