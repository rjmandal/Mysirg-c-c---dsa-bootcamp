// 7. Program to take the value from the user as input electricity unit charges
// and calculate total electricity bill according to the given condition . Using
// the switch statement.
// For the first 50 units Rs. 0.50/unit
// For the next 100 units Rs. 0.75/unit
// For the next 100 units Rs. 1.20/unit
// For units above 250 Rs. 1.50/unit
// An additional surcharge of 20% is added to the bill.

#include <stdio.h>
int main()
{
    int no, b;
    printf("enter units charges ==>> ");
    scanf("%d", &no);
    switch (1)
    {
    case 1:
        b = no * 0.50;
        if (no <= 50)
        {
            printf("your bill is %d pay before due date to avoid late fee", b + (20 * b / 100));
            break;
        }
    case 2:
        b = ((no - 50) * 0.75) + b;
        if (no <= 150)
        {
            printf("your bill is %d pay before due date to avoid late fee", b + (20 * b / 100));
            break;
        }
    case 3:
        b = ((no - 150) * 1.20) + b;
        if (no <= 250)
        {
            printf("your bill is %d pay before due date to avoid late fee", b + (20 * b / 100));
            break;
        }
    case 4:
        b = ((no - 250) * 1.50) + b;
        if (no > 250)
        {
            printf("your bill is %d pay before due date to avoid late fee", b + (20 * b / 100));
            break;
        }

    // default:
    //     printf("invalid unit");
    //     break;
    }
    return 0;
}