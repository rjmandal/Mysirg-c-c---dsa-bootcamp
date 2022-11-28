// 13. Write a program to take a three-digit number from the user and rotate its digits by
// one position towards the right.

#include<stdio.h>
int main()
{
    printf("enter the three digit no ==>> ");
    int no,i,r;
    scanf("%d",&no);
    for(i=0;i<=3;i++)
    {
        r=no%10;
        no/=10;
        no=r*100+no;
    }
    printf("%d",no);
    return 0;
}