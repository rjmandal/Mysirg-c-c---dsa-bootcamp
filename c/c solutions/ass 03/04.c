// 4. Write a program to check whether a given number is an even number or an odd number without using % operator.

#include<stdio.h>
int main()
{
    printf("enter the no ==>> ");
    int no;
    scanf("%d",&no);
    if(no&1)
        printf("odd");
    else
        printf("even");
    return 0;
}