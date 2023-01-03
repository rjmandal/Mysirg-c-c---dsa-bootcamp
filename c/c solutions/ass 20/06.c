// 6. Write a program to calculate the length of the string using a pointer

#include <stdio.h>
#include <string.h>
int length(char *);
int main()
{
    char str[20];
    printf("enter the string ==>> ");
    scanf("%s", str);
    printf("%d",length(str));
    return 0;
}
int length(char *str)
{
    int i;
    for(i=0;str[i];i++);
    return i;
}