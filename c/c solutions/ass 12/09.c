// 9. Write a recursive function to print octal of a given decimal number

#include <stdio.h>
void octal(int);
int main()
{
    int n;
    printf("enter the no ==>> ");
    scanf("%d",&n);
    octal(n);
    return 0;
}
void octal(int n)
{
    if (n > 0)
    {
        octal(n/8);
        printf("%d ", n%8);
    }
}
