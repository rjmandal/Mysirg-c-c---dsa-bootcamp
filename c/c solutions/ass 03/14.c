// 14. Write a program to check whether a given number is divisible by 7 or divisible by 3.

#include<stdio.h>
int main()
{
    int no;
    printf("enter the no ==>> ");
    scanf("%d",&no);
    if(no%3==0 || no%7==0)
        printf("yes");
    else
        printf("no");
    return 0;
}