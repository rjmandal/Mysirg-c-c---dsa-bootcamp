// 7. Write a program to print all Prime numbers between two given numbers

#include <iostream>
using namespace std;
int main()
{
    int n,n1,n2,i;
    cin>>n1>>n2;
    if(n1>n2){
        n1=n1+n2;
        n2=n1-n2;
        n1=n1-n2;
    }
    for(n=n1;n<=n2;n++)
    {
        for(i=2;i<n;i++){
            if(n%i==0){
                 break;
        }
        }
        if(i==n){
            cout<<n<<endl;
        }
    }
}
