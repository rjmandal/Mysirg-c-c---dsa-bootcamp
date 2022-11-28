// 17. Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not.

#include<stdio.h>
int main()
{
    int s1,s2,s3;
    printf("enter the lenght of a first side of a triangle ==>> ");
    scanf("%d",s1);
    printf("enter the lenght of a second side of a triangle ==>> ");
    scanf("%d",s2);
    printf("enter the lenght of a third side of a triangle ==>> ");
    scanf("%d",s3);
    if(s1+s2==s3 || s2+s3==s1 || s1+s3==s2)
     printf("not a valid trinagle");
    else
     printf("valid trinagle");
    return 0;
}