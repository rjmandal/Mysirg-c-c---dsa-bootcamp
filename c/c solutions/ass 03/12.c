// 12. Write a program to check whether a given alphabet is in uppercase or lowercase.

#include<stdio.h>
int main()
{
    char ch;
    printf("enter the alphabet ==>> ");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
        printf("uppercase");
    else if(ch>='a' && ch<='z')
        printf("lowercase");
    else
        printf("enter valid alphabet");
    return 0;
}