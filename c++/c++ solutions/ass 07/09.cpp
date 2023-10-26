// 9. Write a program to check whether a given number is an Armstrong number
// or not

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int no, ndigit = 0, dn,sum=0,digit,n;
    cout << "enter the no : ";
    cin >> no;
    dn = no;
    n=no;
    while (dn)
    {
        dn /= 10;
        ndigit++;
    }
    cout << "no of digits = " << ndigit << endl;
    while (no)
    {  
        digit=no%10;
        sum+=pow(digit,ndigit);
        no/=10;
    }
    if(n==sum){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}
