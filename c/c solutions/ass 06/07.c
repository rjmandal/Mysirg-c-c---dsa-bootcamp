// 7. Write a program to count digits in a given number

#include<stdio.h>
int main()
{
    int n,count=0;
    printf("enter the no ==>> ");
    scanf("%d",&n);
    while(n)
    {
       n/=10;
       count++;
    }
        printf("%d",count);
    return 0;
}