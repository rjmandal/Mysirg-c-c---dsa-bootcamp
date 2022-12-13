// 4. Write a recursive function to print first N odd natural numbers in reverse order

#include <stdio.h>
void natural(int);
int main()
{
    int n;
    printf("enter the no ==>> ");
    scanf("%d",&n);
    natural(n);
    return 0;
}
void natural(int n)
{
    if (n > 0)
    {
        printf("%d ", n*2-1);
        natural(n - 1);
    }
}
