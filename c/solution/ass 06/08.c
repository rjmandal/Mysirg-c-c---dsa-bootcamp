// 8. Write a program to check whether a given number is a Prime number or
// not

#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the no ==>> ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            break;
    }
    if(i==n)
        printf("prime no ");
    else
        printf("not a prime no");
    return 0;
}