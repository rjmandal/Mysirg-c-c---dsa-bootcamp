// 9. Write a program in C to read n number of values in an array and display it in reverse
// order. Take array values from the user.

#include <stdio.h>
int main()
{
    int n;
    printf("enter the no of element you want to enter in the array ==>> ");
    scanf("%d",&n);
    int a[n], i;
    printf("enter the %d elements ==>> ",n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = n-1; i >=0; i--)
        printf("%d\n",a[i]);
    return 0;
}
