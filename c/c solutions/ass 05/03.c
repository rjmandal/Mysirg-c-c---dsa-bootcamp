// 3. Write a program to print the first N natural numbers in reverse order

#include<stdio.h>
int main()
{
    int n;
    printf("enter n of times ==> ");
    scanf("%d",&n);
    while(n)
    {
        printf("%d\n",n);
        n--;
    }
}