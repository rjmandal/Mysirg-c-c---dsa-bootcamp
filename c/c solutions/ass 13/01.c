// 1. Write a recursive function to calculate sum of first N natural numbers

#include <stdio.h>
int natural(int);
int main()
{
    int n;
    printf("enter the no ==>> ");
    scanf("%d",&n);
    printf("%d",natural(n));
    return 0;
}
int natural(int n)
{
    if (n == 1)
    {
        return 1;
    }
        return n+natural(n-1);
}
