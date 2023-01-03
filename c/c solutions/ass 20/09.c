// 9. Write a program to print the elements of an array in reverse order.

#include <stdio.h>
#include <string.h>
void rev(int *, int);
int main()
{
    int s, i;
    printf("enter the size of an array ==>> ");
    scanf("%d", &s);
    int a[s];
    printf("enter the elements of array :\nS");
    for (i = 0; i < s; i++)
        scanf("%d", &a[i]);
    rev(a, s);
    for (i = 0; i < s; i++)
        printf("%d ", a[i]);
    return 0;
}
void rev(int *a, int s)
{
    int i, t;
    for (i = 0; i < s/2; i++)
    {
        t=a[i];
        a[i]=a[s-i-1];
        a[s-i-1]=t;
    }
}