// 3. Write a function to check whether a given number is Prime or not. (TSRS)

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
    for(i=2;i<no;i++)
    {
        if(no%i==0)
        {
            return 0;
        }
    }
    return 1;
}
