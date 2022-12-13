// 8. Write a program to find the second smallest number in an array.Take array values
// from the user.

#include <stdio.h>
int main()
{
    int n, i, min, min2;
    printf("enter the no of element you want to enter ==>> ");
    scanf("%d", &n);
    int a[n];
    printf("enter the %d no ==>> ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    min = a[0];
    for (i = 1; i < n; i++)
    {
        if (min > a[i])
        {
            min = a[i];
        }
        if (min == a[n])
        {
            min2 = a[n - 1];
        }
        else
            min2 = a[i];
    }
    for (i = 1; i < n; i++)
    {
        if (min2 > a[i] && a[i] != min)
            min2 = a[i];
    }
    printf("second min no in this array  is %d ", min2);
    return 0;
}
