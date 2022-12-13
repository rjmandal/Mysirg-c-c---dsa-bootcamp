// 3. Write a program to calculate the sum of all even numbers and sum of all odd
// numbers, which are stored in an array of size 10. Take array values from the user.

#include<stdio.h>
int main()
{
    int a[10],sume=0,i,sumo=0;
    printf("enter the 10 no ==>> ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        sume=sume+a[i];
        else
        sumo=sumo+a[i];
    }
    printf("average of even nos is ==>> %d and odd nos is %d ==>> ",sume,sumo);
    return 0;
}
