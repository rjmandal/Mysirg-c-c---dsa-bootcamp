// 9. Write a program in C to find the square of any number using the function.

#include <stdio.h>
int square(int);
int main()
{
    int no;
    printf("enter the no ==>> ");
    scanf("%d", &no);
    printf("%d",square(no));
    return 0;
}
int square(int no)
{
    return no*no;
}
