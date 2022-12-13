// 7. Write a recursive function to calculate HCF of two numbers

#include <stdio.h>
int hcf(int,int);
int main()
{
    int n1,n2;
    printf("enter the n1 ==>> ");
    scanf("%d",&n1);
    printf("enter the n2 ==>> ");
    scanf("%d",&n2);
    printf("%d",hcf(n1,n2));
    return 0;
}
int hcf(int n1,int n2)
{
    int i=n2;
    if (i>=1)
    {
        return 1;
    }
        return hcf(n1,n2);
}
