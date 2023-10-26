// 5. Write a program to check whether two given numbers are co-prime
// numbers or not

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
    cout<<(hcf>1?"not a co-prime":"co-prime");
}
