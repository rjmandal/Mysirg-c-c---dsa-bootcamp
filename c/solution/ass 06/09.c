// 9. Write a program to calculate LCM of two numbers

#include<stdio.h>
int main()
{
    int no1,no2,i;
    printf("enter the no1 ==>> ");
    scanf("%d",&no1);
    printf("enter the no2 ==>> ");
    scanf("%d",&no2);
    for(i=2;i<=no1*no2;i++)
    {
        if(i%no1==0 && i%no2==0)
        {
            printf("LCM is %d",i);
            break;
        }
    }
    return 0;
}