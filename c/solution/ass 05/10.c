// 10. Write a program to print a table of N.

#include <stdio.h>
int main()
{
    int n, i;
    printf("enter n of times ==> ");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++)

        printf("%d\n", i * n);
}