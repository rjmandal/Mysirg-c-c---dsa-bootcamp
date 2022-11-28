// 3. Write a function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0. (TSRS)

#include <stdio.h>
int evenodd(int);
int main()
{
    int no;
    printf("enter the no  ==>> ");
    scanf("%d", &no);
    printf("%d", evenodd(no));
    return 0;
}
int evenodd(int no)
{
    if (no % 2 == 0)
        return 1;
    else
        return 0;
}