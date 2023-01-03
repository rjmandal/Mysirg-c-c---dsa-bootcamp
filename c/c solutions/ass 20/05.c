// 5. Write a program to find the maximum number between two numbers using a pointer

#include <stdio.h>
#include <string.h>
int main()
{
    int a,b,*max;
    printf("enter the two no \nno 1 ==>> ");
    scanf("%d", &a);
    printf("no 2 ==>> ");
    scanf("%d", &b);
    if(a>b)
        max=&a;
    else
    max=&b;
    printf("%d",*max);
    return 0;
}