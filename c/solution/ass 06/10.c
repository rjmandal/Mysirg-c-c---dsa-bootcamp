//10. Write a program to reverse a given number

#include<stdio.h>
#include<math.h>
int main()
{
    int no,r=0,d;
    printf("enter the no ==>> ");
    scanf("%d",&no);
    while (no)
    {
        d=no%10;
        no/=10;
        r=r*10+d;
    }
    printf("%d",r);
    return 0;
}