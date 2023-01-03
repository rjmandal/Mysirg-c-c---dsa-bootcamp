// 8. Write a program to compute the sum of all elements in an array using pointers.

#include <stdio.h>
#include <string.h>
int sum(int *, int);
int main()
{
    int s, i;
    printf("enter the size of an array ==>> ");
    scanf("%d", &s);
    int a[s];
    printf("enter the elements of array ==>> ");
    for (i = 0; i < s; i++)
        scanf("%d", &a[i]);
    printf("%d", sum(a, s));
    return 0;
}
int sum(int *a, int s)
{
    int i, sum = 0;
    for (i = 0; i < s; i++)
    {
        sum+=a[i];
    }
    return sum;
}