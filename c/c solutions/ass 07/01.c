// 1. Write a program to find the Nth term of the Fibonnaci series.

#include<stdio.h>
int main()
{
    int no,a=-1,b=1,c;
    printf("enter the no ==>> ");
    scanf("%d",&no);
    while(no)
    {
        c=a+b;
        a=b;
        b=c;
        no--;
    }
        printf("%d\n",c);
}