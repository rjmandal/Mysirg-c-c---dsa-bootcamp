// 2. Write a recursive function to calculate sum of first N odd odd numbers

#include <stdio.h>
int odd(int);
int main()
{
    int n;
    printf("enter the no ==>> ");
    scanf("%d",&n);
    printf("%d",odd(n));
    return 0;
}
int odd(int n)
{
    if (n == 1)
    {
        return 1;
    }
        return n*2-1+odd(n-1);
}
