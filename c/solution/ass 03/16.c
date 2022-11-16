// 16. Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character.

#include<stdio.h>
int main()
{
    int ch;
    printf("enter the character ==>> ");
    scanf("%c",&ch);
    printf("%d\n",ch);
    if (ch>='A'&& ch<='Z')
        printf("upercase alphabet");
    else if (ch>='a'&& ch<='z')
        printf("lowercase alphabet");
    else if (ch>='0' && ch<='9')
        printf("digit");
    else
        printf("special character");
    return 0;
}