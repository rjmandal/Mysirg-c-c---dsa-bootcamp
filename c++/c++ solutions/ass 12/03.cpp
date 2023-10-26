// 7. Write a recursive function to print squares of first N natural numbers

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
        oddNaturalNo(n - 1);
        cout << n*n<<" ";
    }
}


