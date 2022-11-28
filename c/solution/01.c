// 1. Write a function to calculate the area of a circle. (TSRS)

#include<stdio.h>
int area(int);
main()
{
    int r ;
    printf("enter the radius of circle ==>> ");
    scanf("%d",&r);
    printf("%d",area(r));
    return 0;
}
int area(int r)
{
    return r*r*3.14;
}