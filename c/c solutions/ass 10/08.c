// 8. Write a function to calculate the number of arrangements one can make from n items and r selected at a time. (TSRS)

#include <stdio.h>
int permutation(int,int);
int main()
{
    int n,r;
    printf("enter the no of items ==>> ");
    scanf("%d", &n);
    printf("enter the r no of item choosen  ==>> ");
    scanf("%d", &r);
    printf("no of arrangments are %d",permutation(n,r));
    return 0;
}
int permutation(int n,int r)
{
    int nf=1,c,no,nof=1;
    no=n-r;
    while(n)
    {
        nf=nf*n;
        n--;
    }
    while(no)
    {
        nof=nof*no;
        no--;
    }
    c=nf/nof;
    return c;
}