#include <iostream>
using namespace std;
int main()
{
   int num[10],even=0,odd=0;
   for(int i=0;i<=9;i++){
    cin>>num[i];
    if(num[i]%2==0)
        even=even+num[i];
    else{
        odd=odd+num[i];
    }
   }
   cout<<"Even = "<<even<<"\nOdd = "<<odd;
}
