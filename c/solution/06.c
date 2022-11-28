// 6. Write a function to calculate the factorial of a number. (TSRS)

#include <stdio.h>
int fact(int);
int main()
{
    int n;
    printf("enter the no  ==>> ");
    scanf("%d", &n);
    printf("%d",fact(n));
    return 0;
}
int fact(int n)
{
    int f=1;
    while(n)
    {
        f=f*n;
        n--;
    }
    return f;
}