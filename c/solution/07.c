// 7. Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS)

#include <stdio.h>
int combination(int,int);
int main()
{
    int n,r;
    printf("enter the no of items ==>> ");
    scanf("%d", &n);
    printf("enter the r no of item choosen  ==>> ");
    scanf("%d", &r);
    printf("%d",combination(n,r));
    return 0;
}
int combination(int n,int r)
{
    int nf=1,c,no,nof=1,rf=1;
    no=n-r;
    while(n)
    {
        nf=nf*n;
        n--;
    }
    while(r)
    {
        rf=rf*r;
        --r;
    }
    while(no)
    {
        nof=nof*no;
        no--;
    }
    c=nf/(rf*nof);
    return c;
}