// 9. Write a program to check whether a given number is an Armstrong number
// or not

#include <stdio.h>
#include <math.h>
int main()
{
    int no, count, ans, n, r, N;
    for (N = 1; N <= 1000; N++)
    {
        count = 0, ans = 0;
        no = n = N;
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
            printf("%d ", N);
    }
    return 0;
}