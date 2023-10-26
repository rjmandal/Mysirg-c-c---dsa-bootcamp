// 10. Write a function to print all prime factors of a given number. For example, if the
// number is 36 then your result should be 2, 2, 3, 3. (TSRN)

#include <iostream>
void primeFactors(int);
using namespace std;
int main()
{
    int no;
    cout << "enter the no : ";
    cin >> no;
    primeFactors(no);
}
void primeFactors(int no)
{
    int i, j;
    for (i = 2; no!=1; i++)
    {
        for (j = 2; j <i; j++)

            if (i % j == 0)
            {
                break;
            }
        if (j==i)
        {
            while (no % i == 0)
            {
                no /= i;
                cout << i;
            }
        }
    }
}