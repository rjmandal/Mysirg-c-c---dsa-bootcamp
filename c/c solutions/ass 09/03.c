// 3. Write a program which takes the day number of a week and displays a
// unique greeting message for the day.

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int no;
    printf("enter the day no ==>>");
    printf("enter no1 ==> ");
    scanf("%d", &no);
    switch (no)
    {
    case 1:
        printf("life is unfair get used to it");
        break;
    case 2:
        printf("every second is important use it wisely");
        break;
    case 3:
        printf("life hit you harder in your face every time");
        break;
    case 4:
        printf("life is like roller coster somtime it up somtime it down");
        break;
    case 5:
        printf("money change your appearence don't bother earn money it will take care of your all shit");
        break;
    case 6:
        printf("don't regret do it ");
        break;
    case 7:
        printf("be in the moment ");
        break;

    default:
        printf("invalid week no");
        break;
    }
    return 0;
}