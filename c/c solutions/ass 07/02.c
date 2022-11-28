// 2. Write a program to print first N terms of Fibonacci series

#include<stdio.h>
int main()
{
    int no,a=-1,b=1,c;
    printf("enter the no ==>> ");
    scanf("%d",&no);
    while(no)
    {
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
        no--;
    }
}