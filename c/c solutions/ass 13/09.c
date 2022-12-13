// 9. Write a program in C to count the digits of a given number using recursion.

#include <stdio.h>
int countdigit(int);
int main()
{
    int n,n2;
    printf("enter the n1 ==>> ");
    scanf("%d",&n);
    printf("%d",countdigit(n));
    return 0;
}
int countdigit(int n)
{
    int count=0;
    if (n==0)
    {
        return count;
    }
    count++;
    return countdigit(n/10);
}
