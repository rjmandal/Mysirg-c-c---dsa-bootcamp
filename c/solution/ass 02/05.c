// 5. Write a program to input a three-digit number and display the sum of the digits.

#include<stdio.h>
int main()
{
    int no,r,sum=0;
    printf("enter the three digit no ==>> ");\
    scanf("%d",&no);
    while(no)
    {
        r=no%10;
        no=no/10;
        sum=sum+r;
    }
    printf("%d",sum);
    return 0;
}