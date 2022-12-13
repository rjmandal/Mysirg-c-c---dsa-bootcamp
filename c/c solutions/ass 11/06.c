// 6. Write a function to print all Prime numbers between two given numbers. (TSRN)

#include <stdio.h>
void prime(int, int);
int main()
{
    int no1, no2;
    printf("enter the lower no ==>> ");
    scanf("%d", &no1);
    printf("enter the upper no ==>> ");
    scanf("%d", &no2);
    prime(no1, no2);
    return 0;
}
void prime(int no1, int no2)
{
    int i;
    while (no1 < no2)
    {
        no1++;
        for (i = 2; i < no1; i++)
            if (no1 % i == 0)
                break;
        if (no1 == i)
            printf("%d ", no1);
    }
}
