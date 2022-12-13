#include<stdio.h>
int main()
{
    char str[10]="bhopal";
    int i,count=0;
    for(i=0;str[i];i++)
    {
        count++;
    }
    printf("%d",count);
    return 0;
}