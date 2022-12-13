// 5. Write a function to print first N prime numbers (TSRN)

#include <stdio.h>
void prime(int);
int main()
{
    int no;
    printf("enter the no ==>> ");
    scanf("%d", &no);
    prime(no);
    return 0;
}
void prime(int no)
{
    int i, j, end = 0;
    for (j = 1;end!=no; j++)
    {
        for (i = 2; i < j; i++)
            if (j % i == 0)
                break;
        if (j == i)
        {
            printf("%d ", j);
            end++;
        }
    }
}
