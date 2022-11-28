// 8. Program to convert a positive number into a negative number and negative
// number into a positive number using a switch statement.

#include <stdio.h>
int main()
{
    int no, b;
    printf("enter the no ==>> ");
    scanf("%d", &no);
    switch (1)
    {
    case 1:
    if(no>0)
    {
        printf("%d",-no);
        break;
    }
    case 2:
    if(no<0)
    {
        printf("%d",+no);
        break;
    }
    }
    return 0;
}