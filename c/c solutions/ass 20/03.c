// 3. Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]

#include <stdio.h>
#include <string.h>
void sort(int *ptr, int size);
int main()
{
    printf("enter the size of array ==>> ");
    int size, i;
    scanf("%d", &size);
    int a[size];
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    sort(a, size);
    for (i = 0; i < size; i++)
    {
        printf("%d", a[i]);
    }
    return 0;
}
void sort(int *ptr, int size)
{
    int i, j;
    for (i = 0; i < size-1; i++)
    {
        for (j = i+1; j < size; j++)
        {
            if (ptr[i] > ptr[j])
            {
                int t;
                t = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = t;
            }
        }
    }
}