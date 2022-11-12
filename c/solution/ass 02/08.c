//8. Write a program to check whether the given number is even or odd using a bitwise
// operator.

#include<stdio.h>
int main()
{
    int no;
    printf("enter the no ==>> ");
    scanf("%d",&no);
    if(no&1)
    {
        printf("odd");
    }
    else{
        printf("even");
    }
    return 0;
}