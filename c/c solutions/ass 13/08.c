// 8. Write a recursive function to print first N terms of Fibonacci series

#include <stdio.h>
void fibonacci(int);
int main()
{
    int n1,n2;
    printf("enter the n1 ==>> ");
    scanf("%d",&n1);
    fibonacci(n1);
    return 0;
}
void fibonacci(int n)
{
    int a=-1,b=1,c;
    if (n>=1)
    {
    fibonacci(n-1);
    c=a+b;
    printf("%d ",c);
    a=b;
    b=c;
    }
}
