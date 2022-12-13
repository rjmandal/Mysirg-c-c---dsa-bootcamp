// 6. Write a recursive function to print first N even natural numbers in reverse order

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
        printf("%d ", n*2);
        natural(n - 1);
    }
}
