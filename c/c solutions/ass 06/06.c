// 6. Write a program to calculate factorial of a number

#include<stdio.h>
int main()
{
    int n,fact=1;
    printf("enter the no ==>> ");
    scanf("%d",&n);
    while(n)
    {
       fact = fact*n;
       n--; 
    }
        printf("%d",fact);
    return 0;
}