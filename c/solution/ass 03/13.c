// 13. Write a program to noeck whether a given number is divisible by 3 and divisible by 2.

#include<stdio.h>
int main()
{
    int no;
    printf("enter the no ==>> ");
    scanf("%d",&no);
    if(no%3==0 && no%2==0)
        printf("yes");
    else
        printf("no");
    return 0;
}