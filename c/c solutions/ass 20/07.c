// 7. Write a program to count the number of vowels and consonants in a string using a
// pointer.

#include <stdio.h>
#include <string.h>
void count(char *);
int main()
{
    char str[20];
    printf("enter the string ==>> ");
    scanf("%s", str);
    count(str);
    return 0;
}
void count(char *str)
{
    int i,v=0,c=0;
    for(i=0;str[i];i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            v++;
        }
        else if(str[i]>='a'&&str[i]<='z')
        {
            c++;
        }
    }
    printf("v==>> %d\nc==>> %d",v,c);   
}