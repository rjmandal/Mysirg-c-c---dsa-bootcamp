// 5. Write a program to check whether two given numbers are co-prime
// numbers or not

#include <stdio.h>
int main()
{
    int no1, no2, i;
    printf("enter the no1 ==>> ");
    scanf("%d", &no1);
    printf("enter the no2 ==>> ");
    scanf("%d", &no2);
    for (i = 2; i <= (no1 <= no2 ? no1 : no2); i++)
    {
        if (no1 % i == 0 && no2 % i == 0)
        {
            printf("not a co prime");
            break;
        }
    }
    if (i > no1 <= no2 ? no1 : no2)
        printf("coprime");
    return 0;
}