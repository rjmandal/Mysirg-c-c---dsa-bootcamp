// 10. Write a function to print all prime factors of a given number. For example, if the number is 36 then your result should be 2, 2, 3, 3. (TSRN)

#include <stdio.h>
void primefactors(int);
int main()
{
    int n, d;
    printf("enter the no  ==>> ");
    scanf("%d", &n);
    primefactors(n);
    return 0;
}
void primefactors(int n)
{
    int i = 2;
    while (i <= n)
    {
        if (n % i == 0)
        {
            n /= i;
            printf("%d ",i);
        }
        else
            i++;
    }
}