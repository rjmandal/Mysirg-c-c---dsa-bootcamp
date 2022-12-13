// 10. Write a program in C to copy the elements of one array into another array.Take array
// values from the user.

#include <stdio.h>
int main()
{
    int n;
    printf("enter the no of element you want to enter in the array ==>> ");
    scanf("%d",&n);
    int a[n],b[n], i;
    printf("enter the %d elements ==>> ",n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        b[i]=a[i];
    }
    for (i = 0; i < n; i++)
        printf("%d\n",b[i]);
    return 0;
}
