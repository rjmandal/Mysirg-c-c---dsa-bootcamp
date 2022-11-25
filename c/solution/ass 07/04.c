// 4. Write a program to calculate HCF of two numbers

#include <stdio.h>
int main()
{
    int no1, no2, i, hcf;
    printf("enter the no1 ==>> ");
    scanf("%d", &no1);
    printf("enter the no2 ==>> ");
    scanf("%d", &no2);
    for (i = 1; i <= (no1 <= no2 ? no1 : no2); i++)
    {
        if (no1 % i == 0 && no2 % i == 0)
            hcf = i;
    }
    printf("hcf is %d ", hcf);
    return 0;
}