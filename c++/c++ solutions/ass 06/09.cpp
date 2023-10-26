#include <iostream>
using namespace std;
int main()
{
    int n1,n2,i;
   cout<<"enter two no :\n";
   cin>>n1>>n2;
   i=(n1>n2)?n1:n2;
   while(1)
   {
    if(i%n1==0 && i%n2==0)
    {
        break;
    }
    i++;
   }
   cout<<"LCM : "<<i;
   return 0;
}
