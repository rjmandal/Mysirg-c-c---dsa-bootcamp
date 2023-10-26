// 6. Write a program to print all Prime numbers under 100

#include <iostream>
using namespace std;
int main()
{
    int n,i;
    for(n=1;n<=100;n++)
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
