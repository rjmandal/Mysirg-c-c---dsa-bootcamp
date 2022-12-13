// 7. Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS)

#include <stdio.h>
int combination(int, int);
int fact(int);
int main()
{
    int n, r;
    printf("enter the no of items ==>> ");
    scanf("%d", &n);
    printf("enter the r no of item choosen  ==>> ");
    scanf("%d", &r);
    printf("%d", combination(n, r));
    return 0;
}
int fact(int no)
{
    int f = 1;
    while (no)
    {
        f *= no;
        no--;
    }
}

int combination(int no, int r)
{
    return fact(no) / (fact(r) * fact(no - r));
}