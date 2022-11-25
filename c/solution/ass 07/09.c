// 9. Write a program to check whether a given number is an Armstrong number
// or not

#include <stdio.h>
#include<math.h>
int main()
{
    int no, count=0, ans = 0, n, r, N;
    printf("enter the no ==>> ");
    scanf("%d", &no);
    N = n = no;
    while (no)
    {
        no /= 10;
        count++;
    }
    while (n)
    {
        r = n % 10;
        n /= 10;
        ans = pow(r, count) + ans;
    }
    if (ans == N)
        printf("yes");
    else
        printf("no");
    return 0;
}