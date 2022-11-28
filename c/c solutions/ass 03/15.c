// 15. Write a program to check whether a given number is positive, negative or zero.

#include<stdio.h>
int main()
{
    int no;
    printf("enter the no ==>> ");
    scanf("%d",&no);
    if(no>0)
        printf("positive");
    else if(no==0)
        printf("zero");
    else
        printf("negative");
    return 0;
}