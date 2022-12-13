// 10. Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the function.

#include <stdio.h>
int sum();
int fact(int);
int main()
{
    int no;
    // printf("enter the no ==>> ");
    // scanf("%d", &no);
    printf("%d", sum());
    return 0;
}
int fact(int no)
{
    int f = 1;
    while (no)
    {
        f = f * no;
        no--;
    }
    return f;
}

int sum()
{
    int i, sum = 0;
    for (i = 1; i <= 5; i++)
        sum = sum + fact(i) / i;
    return sum;
}
