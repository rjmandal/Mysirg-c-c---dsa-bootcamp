// 2. Write a program to print the first N natural numbers.

#include<stdio.h>
int main()
{
    int n,i=1;
    printf("enter n of times ==> ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\n",i);
        i++;
    }
}