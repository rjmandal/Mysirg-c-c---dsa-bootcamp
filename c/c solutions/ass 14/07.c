// 7. Write a program to find second largest in an array.Take array values from the user.

#include <stdio.h>
int main()
{
    int n,i, max2 = 0, max = 0;
    printf("enter the no of element you want to enter ==>> ");
    scanf("%d", &n);
    int a[n];
    printf("enter the %d no ==>> ",n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (max < a[i])
            max = a[i];
    }
    for (i = 0; i < n; i++)
    {
        if (max2 < a[i] && a[i]!=max)
            max2 = a[i];
    }
    printf("second largest no in this array ==>> %d ", max2);
    return 0;
}
