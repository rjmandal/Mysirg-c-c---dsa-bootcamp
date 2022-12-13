// 6. Write a recursive function to calculate factorial of a given number

#include <stdio.h>
int factorial(int);
int main()
{
    int n;
    printf("enter the no ==>> ");
    scanf("%d",&n);
    printf("%d",factorial(n));
    return 0;
}
int factorial(int n)
{
    if (n==0)
    {
        return 1;
    }
        return n*factorial(n-1);
}
