// 10. Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.

#include<stdio.h>
int main()
{
    int c,s,p,l;
    printf("enter the cost price ==>> ");
    scanf("%d",&c);
    printf("enter the selling price ==>> ");
    scanf("%d",&s);
    p=s-c;
    p=p*100/c;
    printf("%d %%",p);
    return 0;
}