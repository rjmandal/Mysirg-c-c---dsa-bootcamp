// #1. Write a program which takes the month number as an input and display
// number of days in that month.

#include <stdio.h>
int main()
{
    printf("enter the month no ==>> ");
    int m;
    scanf("%d", &m);
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
        m = 1;
    else if (m == 2)
        m = 2;
    else
        m = 3;
    switch (m)
    {
    case 1:
        printf("31");
        break;
    case 2:
        printf("29");
        break;
    case 3:
        printf("30");
        break;

    default:
        printf("invalid month no");
        break;
    }
    return 0;
}