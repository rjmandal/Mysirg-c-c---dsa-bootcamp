// 7. Write a program to print all Prime numbers between two given numbers

#include <stdio.h>
int main()
{
    int no1, no2, i,j;
    printf("enter the lower no ==>> ");
    scanf("%d", &no1);
    printf("enter the upper no ==>> ");
    scanf("%d", &no2);
   for (i = no1; i <= no2; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
                break;
        }
        if (j == i)
            printf("%d\n", i);
    }
    return 0;
}