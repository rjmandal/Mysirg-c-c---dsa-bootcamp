// 2. Write a program to check whether a given number is divisible by 5 or not

#include<stdio.h>
int main()
{
    printf("enter the no ==>> ");
    int no;
    scanf("%d",&no);
    if(no%5==0)
        printf("yes");
    else
        printf("no");
    return 0;
}