// 2. Write a function to calculate HCF of two numbers. (TSRS)

#include <stdio.h>
int hcf(int, int);
int main()
{
    int no1, no2;
    printf("enter the no1 ==>> ");
    scanf("%d", &no1);
    printf("enter the no2 ==>> ");
    scanf("%d", &no2);
    printf("%d", hcf(no1, no2));
    return 0;
}
int hcf(int no1, int no2)
{
    int i,hcf;
    for(i=1;i<=(no1>no2?no1:no2);i++)
    {
        if(no1%i==0 && no2%i==0)
            hcf=i;
    }
    return hcf;
}
