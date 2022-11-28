// 2. Write a function to calculate simple interest. (TSRS)

#include <stdio.h>
float si(int, int, int);
int main()
{
    int p, r, t;
    printf("enter princple amount ==>> ");
    scanf("%d", &p);
    printf("enter rate of interest ==>> ");
    scanf("%d", &r);
    printf("enter time period ==>> ");
    scanf("%d", &t);
    printf("%f", si(p, r, t));
    return 0;
}
float si(int p, int r, int t)
{
    return (p *r* t)/100;
}