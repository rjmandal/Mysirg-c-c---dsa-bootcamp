// 5. Write a program to print the first N odd natural numbers in reverse order.

#include<stdio.h>
int main()
{
    int n,i;
    printf("enter n of times ==> ");
    scanf("%d",&n);
    for(;n;n--)
    {
        printf("%d\n",n*2-1);
    }
}