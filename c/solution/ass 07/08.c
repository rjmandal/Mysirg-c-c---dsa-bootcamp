// 8. Write a program to find next Prime number of a given number

#include <stdio.h>
int main()
{
    int no,i,j;
    printf("enter the no ==>> ");
    scanf("%d", &no);
   for (i = no+1;; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
                break;
        }
        if (j == i)
        {
            printf("%d\n", i);
            break;
        }
    }
    return 0;
}