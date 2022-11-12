// 4. Write a program to swap values of two int variables without using a third variable.

#include<stdio.h>
int main()
{
    int n1,n2;
   printf("enter the n1 ==>> ");
   scanf("%d",&n1); 
   printf("enter the n2 ==>> ");
   scanf("%d",&n2);
   n1=n1+n2;
   n2=n1-n2;
   n1=n1-n2;
   printf("n1 = %d and n2 = %d",n1,n2);
   return 0;
}