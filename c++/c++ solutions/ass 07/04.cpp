// 4. Write a program to calculate HCF of two numbers

#include <iostream>
using namespace std;
int main()
{
    int n1,n2,n,hcf;
    cout<<"enter the two no : ";
    cin>>n1>>n2;
    n=n1>n2?n1:n2;
    for(int i=1;i<n;i++)
    {
        if(n1%i==0&&n2%i==0){
            hcf=i;
        }
    }
    cout<<hcf;
}
