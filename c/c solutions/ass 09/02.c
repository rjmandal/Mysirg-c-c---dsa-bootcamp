// 2. Write a menu driven program with the following options:
// a. Addition
// b. Subtraction
// c. Multiplication
// d. Division
// e. Exit

#include <stdio.h>
#include<stdlib.h>
int main()
{
    while (1)
    {
        printf("a. Addition\nb. Subtraction\nc. Multiplication\nd. Division\ne. Exit\n");
        printf("choose one from the above and enter character belong to your choice==>>");
        char ch;
        int a, b;
        scanf("%c", &ch);
        printf("enter no1 ==> ");
        scanf("%d", &a);
        printf("enter no1 ==> ");
        scanf("%d", &b);
        switch (ch)
        {
        case 'a':
            printf("%d\n", a + b);
            break;
        case 'b':
            printf("%d\n", a - b);
            break;
        case 'c':
            printf("%d\n", a * b);
            break;
        case 'd':
            printf("%d\n", a / b);
            break;
        case 'e':
            exit(0);
            break;

        default:
            printf("invalid choice");
            break;
        }
    }
    return 0;
}