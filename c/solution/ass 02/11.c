// 11. Write a program to input a number from the user and also input a digit. Append a
// digit in the number and print the resulting number. (Example - number=234 and
// digit=9 then the resulting number is 2349)

#include<stdio.h>
int main()
{
    printf("enter the no ==>> ");
    int no,d;
    scanf("%d",&no);
    printf("enter the digit ==>> ");
    scanf("%d",&d);

    printf("%d",no*10+d);
    return 0;
}