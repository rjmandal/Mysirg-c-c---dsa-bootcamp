// 4. Write a function to print first N natural numbers (TSRN)

#include <stdio.h>
void natural(int);
int main()
{
    int n;
    printf("enter the no  ==>> ");
    scanf("%d", &n);
    natural(n);
    return 0;
}
void natural(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        printf("%d ",i);
    }
}