// 3. Write a program to check whether a given number is there in the Fibonacci
// series or not.

#include <stdio.h>
int main()
{
    int no, a = -1, b = 1, c, i;
    printf("enter the no ==>> ");
    scanf("%d", &no);
    for (i = no; i; i--)
    {
        c = a + b;
        if (no == c)
        {
            break;
        }
        a = b;
        b = c;
        no--;
    }
    if (i)
        printf("yes");
    else
        printf("no");
}