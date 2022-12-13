// 10. Write a program in C to calculate the power of any number using recursion.

#include <stdio.h>
int power(int,int);
int main()
{
    int n,x;
    printf("enter the n ==>> ");
    scanf("%d",&n);
    printf("enter the power ==>> ");
    scanf("%d",&x);
    printf("%d",power(n,x));
    return 0;
}
int power(int n,int x)
{
    if (x==0)
    {
        return n;
    }
    return n*power(n,x--);
}
