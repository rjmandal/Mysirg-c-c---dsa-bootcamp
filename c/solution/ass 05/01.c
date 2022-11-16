// 1. Write a program to print MySirG N times on the screen

#include<stdio.h>
int main()
{
    int n;
    printf("enter n of times ==> ");
    scanf("%d",&n);
    while(n)
    {
        printf("MysirG\n");
        n--;
    }
}