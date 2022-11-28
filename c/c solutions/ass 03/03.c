// 3. Write a program to check whether a given number is an even number or an odd number

#include<stdio.h>
int main()
{
    printf("enter the no ==>> ");
    int no;
    scanf("%d",&no);
    if(no%2==0)
        printf("even");
    else
        printf("odd");
    return 0;
}