// 12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
// convert it into USD.

#include<stdio.h>
int main()
{
    printf("enter the amount in INR ==>> ");
    float INR,USD=76.23;
    scanf("%f",&INR);
    printf("%2f",INR/USD);
    return 0;
}