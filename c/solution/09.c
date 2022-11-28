// 9. Write a function to check whether a given number contains a given digit or not. (TSRS)

#include <stdio.h>
int containdigit(int, int);
int main()
{
    int n, d;
    printf("enter the no  ==>> ");
    scanf("%d", &n);
    printf("enter the digit  ==>> ");
    scanf("%d", &d);
    printf("%d", containdigit(n, d));
    return 0;
}
int containdigit(int n, int d)
{
    int r;
    while (n)
    {
        r = n % 10;
        n /= 10;
        if (r == d)
            return 1;
    }
    return 0;
}