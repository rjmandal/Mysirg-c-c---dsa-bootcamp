// 1. Write a program to calculate sum of first N natural numbers

#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("enter the n times you want ==>> ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        sum=sum+i;
    }
        printf("%d",sum);
    return 0;
}