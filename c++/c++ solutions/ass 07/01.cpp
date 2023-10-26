#include <iostream>
using namespace std;
int main()
{
    int a=-1,b=1,c,n;
    cout<<"enter which term of fibonnaci series you want :";
    cin>>n;
    while (n)
    {
        c=a+b;
        a=b;
        b=c;
        n-=1;
    }
        cout<<c;
    
}
