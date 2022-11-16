// 1. Write a program to check whether a given number is positive or non-positive.

#include<stdio.h>
int main()
{
    printf("enter the no ==>> ");
    int no;
    scanf("%d",&no);
    if(no>0)
        printf("positive");
    else
        printf("non positive");
    return 0;
}