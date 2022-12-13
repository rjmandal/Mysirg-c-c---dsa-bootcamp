// 6. Write a program to sort elements of an array of size 10. Take array values from the
// user.

#include <stdio.h>
int main()
{
    int a[10], i, j;
    printf("enter the 10 no ==>> ");
    for (i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    for (j = 0; j < 10; j++)
    {
        for (i = 0; i < 9; i++)
        {
            if (a[i] > a[i + 1])
            {
                a[i] = a[i + 1] + a[i];
                a[i + 1] = a[i] - a[i + 1];
                a[i] = a[i] - a[i + 1];
            }
        }
    }
    for (i = 0; i < 10; i++)
        printf("%d ", a[i]);
    return 0;
}
