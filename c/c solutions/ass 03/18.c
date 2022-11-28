// 18. Write a program which takes the month number as an input and display number of days in that month

#include <stdio.h>
int main()
{
    int m;
    printf("enter the month no ==>> ");
    scanf("%d", &m);
    if (m >= 1 && m <= 12)
    {
        if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
            printf("31");
        else if (m == 2)
            printf("29");
        else
            printf("30");
    }
    else 
       printf("invalid month no ");
    return 0;
}