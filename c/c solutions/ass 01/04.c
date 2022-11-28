// 4. WAP to find the area of the circle. Take radius of circle from user as input and print the result in below given format.
// Expected output format – “Area of circle is A having the radius R”. Replace A with area & R with radius.

#include<stdio.h>
int main()
{
    printf("enter the radius of circle ==>> ");
    int A,R;
    scanf("%d",&R);
    A=1.34*R*R;
    printf("\"Area of circle is %d having the radius %d.\"",A,R);
    return 0;
}