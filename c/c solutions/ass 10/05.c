// 5. Write a function to print first N odd natural numbers. (TSRN)

#include <stdio.h>
void naturalodd(int);
int main()
{
    int n;
    printf("enter the no  ==>> ");
    scanf("%d", &n);
    naturalodd(n);
    return 0;
}
void naturalodd(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        printf("%d ",i*2-1);
    }
}