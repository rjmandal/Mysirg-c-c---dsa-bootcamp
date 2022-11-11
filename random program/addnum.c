#include<stdio.h>
int main()
{
    int no,sum=0;
    while(1)
    {
        printf("enter the no to add ==>> ");
        scanf("%d",&no);
        if(no!=0)
        {
            sum=sum+no;
            printf("sum is %d\n",sum);
        }
        else
        {
            break;
        }
    }
    printf("final result ==> %d",sum);
}


