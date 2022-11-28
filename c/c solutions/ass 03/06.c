// 6. Write a program to print greater between two numbers. Print one number of both are the same.

#include<stdio.h>
int main()
{
    printf("enter the no1 ==>> ");
    int no1,no2;
    scanf("%d",&no1);
    printf("enter the no2 ==>> ");
    scanf("%d",&no2);
    if(no1>=no2)
        printf("no1");
    else
        printf("no2");
    return 0;
}