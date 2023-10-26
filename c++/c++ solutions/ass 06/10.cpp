// 10.Write a program to reverse a given number
#include <iostream>
using namespace std;
int main()
{
    int n,r,result;
   cout<<"enter no :\n";
   cin>>n;
   while (n)
   {
    r=n%10;
    result=result*10+r;
    n=n/10;
   }
   
   cout<<"Reverse : "<<result;
   return 0;
}
