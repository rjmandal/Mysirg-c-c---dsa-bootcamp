// 2. Write a function to find the smallest number from the given array of any size. (TSRS)

#include <stdio.h>
#include<limits.h>
int min(int[], int);
int main()
{
    int n;
    printf("enter the no of element you want to enter in the array ==>> ");
    scanf("%d", &n);
    int a[n], i;
    printf("enter the %d elements ==>> ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("smallest no is %d", min(a, n));
    return 0;
}
int min(int a[], int n)
{
    int min = INT_MAX, i;
    for (i = 0; i < n; i++)
    {
        if (min > a[i])
            min = a[i];
    }
    return min;
}
