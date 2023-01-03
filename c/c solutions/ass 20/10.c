// 10. Write a program to print a string in reverse using a pointer

#include <stdio.h>
#include <string.h>
void rev(char *);
int main()
{
    int i;
    char str[20];
    printf("enter the string ==>> ");
    scanf("%s", str);
    rev(str);
    printf("%s", str);
    return 0;
}
void rev(char *str)
{
    int i,l = strlen(str);
    char t;
    for (i = 0; i < l / 2; i++)
    {
        t=str[i];
        str[i]= str[l - i - 1];
        str[l - i - 1]= t;
    }
}