// 7. Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots

#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter value of a ==>> ");
    scanf("%d",&a);
    printf("enter value of a ==>> ");
    scanf("%d",&b);
    printf("enter value of a ==>> ");
    scanf("%d",&c);
    d=(b*b)-(4*a*c);
    if(d>0){
        printf("roots are real and diffrent");
    }
    else if(d=0){
        printf("roots are real and equal");
    }
    else{
        printf("roots are imaginary");
    }
    return 0;
}