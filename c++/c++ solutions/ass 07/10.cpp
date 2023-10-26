// 10.Write a program to print all Armstrong numbers under 1000

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    for (int n = 0; n <= 1000; n++)
    {
        int ndigit=0, dn, sum = 0, digit, no;
        dn = n;
        no = n;
        while (dn)
        {
            dn /= 10;
            ndigit++;
        }
        while (no)
        {
            digit = no % 10;
            sum += pow(digit, ndigit);
            no /= 10;
        }
        if (n == sum)
            cout << n<<"\n";
    }
}
