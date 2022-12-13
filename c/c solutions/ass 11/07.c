// 7. Write a function to print first N terms of Fibonacci series (TSRN)

#include <stdio.h>
void fibonacci(int);
int main()
{
    int no;
    printf("enter the no ==>> ");
    scanf("%d", &no);
    fibonacci(no);
    return 0;
}
void fibonacci(int no)
{
    int a=-1,b=1,c,count=0;
    while(count!=no)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
        count++;
    }
}
