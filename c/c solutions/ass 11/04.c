// 4. Write a function to find the next prime number of a given number. (TSRS)

#include <stdio.h>
int prime(int);
int main()
{
    int no;
    printf("enter the no ==>> ");
    scanf("%d", &no);
    printf("%d", prime(no));
    return 0;
}
int prime(int no)
{
    int i;
    while (1)
    {
        no++;
        for (i = 2; i < no; i++)
            if (no % i == 0)
                break;
        if (no == i)
            return no;
    }
}
