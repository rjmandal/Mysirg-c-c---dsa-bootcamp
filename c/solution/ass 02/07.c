// 7. Write a program to find the position of first 1 in LSB

#include<stdio.h>
int main()
{
    int i=1,lsb,p=0,r;
    printf("enter the lsb ==>> ");
    scanf("%d",&lsb);
    while(i<=8)
    {
        p++;
        r=lsb%10;
        lsb=lsb/10;
        if(r==1)
        {
            break;
        }
        i++;
    }
    printf("%d",p);
    return 0;
}