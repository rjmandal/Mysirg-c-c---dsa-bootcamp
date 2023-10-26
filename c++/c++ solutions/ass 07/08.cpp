// 8. Write a program to find next Prime number of a given number

#include <iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    while(1)
    {
        n++;
        for(i=2;i<n;i++){
            if(n%i==0){
                 break;
        }
        }
        if(i==n){
            cout<<n<<endl;
            break;
        }
    }
}
