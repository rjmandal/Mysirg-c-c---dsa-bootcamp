// 3. Write a function to sort an array of any size. (TSRS)

#include <stdio.h>
#include <limits.h>
int sort(int[], int);
int main()
{
    int n;
    printf("enter the no of element you want to enter in the array ==>> ");
    scanf("%d", &n);
    int a[n], i;
    printf("enter the %d elements ==>> ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    sort(a,n);
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}
int sort(int a[], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        // for (j = 0; j < n - 1; j++)
        //     if (a[j] > a[j + 1])
        //     {
        //         a[j] = a[j + 1] + a[j];
        //         a[j + 1] = a[j] - a[j + 1];
        //         a[j] = a[j] - a[j + 1];
        //     }
        for (j = 1; j < n; j++)
            if (a[i] > a[j])
            {
                a[i] = a[j] + a[i];
                a[j] = a[i] - a[j];
                a[i] = a[i] - a[j];
            }
    }
    return a;
}
