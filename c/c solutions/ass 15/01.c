// 1. Write a function to find the greatest number from the given array of any size. (TSRS)

#include <stdio.h>
#include<limits.h>
int max(int[], int);
int main()
{
    int n;
    printf("enter the no of element you want to enter in the array ==>> ");
    scanf("%d", &n);
    int a[n], i;
    printf("enter the %d elements ==>> ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("greatest no is %d", max(a, n));
    return 0;
}
int max(int a[], int n)
{
    int max =INT_MIN, i;
    for (i = 0; i < n; i++)
    {
        if (max < a[i])
            max = a[i];
    }
    return max;
}
