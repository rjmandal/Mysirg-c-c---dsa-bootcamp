// 6. Write a program to print the first N even natural numbers

#include<stdio.h>
int main()
{
    int n,i;
    printf("enter n of times ==> ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d\n",i*2);
    }
}