// 2. Write a program to calculate the average of numbers stored in an array of size 10.
// Take array values from the user.

#include<stdio.h>
int main()
{
    int a[10],sum=0,i;
    printf("enter the 10 no ==>> ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("average of your 10 no is %d",sum/10);
}
