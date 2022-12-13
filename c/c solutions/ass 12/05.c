// 5. Write a recursive function to print first N even natural numbers

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
        natural(n - 1);
        printf("%d ", n*2);
    }
}
