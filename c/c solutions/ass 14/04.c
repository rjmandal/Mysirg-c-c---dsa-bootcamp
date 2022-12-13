// 4. Write a program to find the greatest number stored in an array of size 10. Take array
// values from the user.

#include<stdio.h>
int main()
{
    int a[10],i,max=0;
    printf("enter the 10 no ==>> ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(max<a[i])
        max=a[i];
    }
    printf("max no in this array  is %d",max);
    return 0;
}
