// 3. Write a recursive function to calculate sum of first N even numbers

#include <stdio.h>
int even(int);
int main()
{
    int n;
    printf("enter the no ==>> ");
    scanf("%d",&n);
    printf("%d",even(n));
    return 0;
}
int even(int n)
{
    if (n == 1)
    {
        return 2;
    }
        return n*2+even(n-1);
}
