// 5. Write a recursive function to calculate sum of digits of a given number

#include <stdio.h>
int digitsum(int);
int main()
{
    int n;
    printf("enter the no ==>> ");
    scanf("%d",&n);
    printf("%d",digitsum(n));
    return 0;
}
int digitsum(int n)
{
    if (n==0)
    {
        return 0;
    }
        return n%10+digitsum(n/10);
}
