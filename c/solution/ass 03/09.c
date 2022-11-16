// 9. Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.

#include<stdio.h>
int main()
{
    int no1,no2,no3;
    printf("enter the no1 ==>> ");
    scanf("%d",&no1);
    printf("enter the no2 ==>> ");
    scanf("%d",&no2);
    printf("enter the no3 ==>> ");
    scanf("%d",&no3);
    if(no1>=no2 && no1>=no3)
        printf("no1");
    else if(no2>=no1 && no2>=no3)
        printf("no2");
    else
        printf("no3");
    return 0;
}