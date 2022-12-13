// 1. Write a function to calculate LCM of two numbers. (TSRS)

#include <stdio.h>
int lcm(int, int);
int main()
{
    int no1, no2;
    printf("enter the no1 ==>> ");
    scanf("%d", &no1);
    printf("enter the no2 ==>> ");
    scanf("%d", &no2);
    printf("%d", lcm(no1, no2));
    return 0;
}
int lcm(int no1, int no2)
{
    int i;
    for(i=2;i<=no1*no2;i++)
    {
        if(i%no1==0 && i%no2==0)
        {
            return i;
        }
    }
    return 1;
}
