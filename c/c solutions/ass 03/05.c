// 5. Write a program to check whether a given number is a three-digit number or not.

#include<stdio.h>
int main()
{
    printf("enter the no ==>> ");
    int no;
    scanf("%d",&no);
    if(no>99&&no<=999)
        printf("yes");
    else
        printf("no");
    return 0;
}