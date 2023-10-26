#include <iostream>
using namespace std;
int main()
{
    int a=-1,b=1,c,n;
    cout<<"how much term you want of fibonnaci series :";
    cin>>n;
    while (n)
    {
        c=a+b;
        cout<<c<<"\n";
        a=b;
        b=c;
        n-=1;
    }
    
}
