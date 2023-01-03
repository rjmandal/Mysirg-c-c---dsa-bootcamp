// 3. Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]

#include<stdio.h>
#include<string.h>
void sort(int *ptr,int size);
int main()
{
    printf("enter the size of array ==>> ");
    int size,i;
    scanf("%d",&size);
    int a[size];
    sort(a,size);
    for ( i = 0; i < size; i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}