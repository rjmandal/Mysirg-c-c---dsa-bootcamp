// 11. Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed.

#include<stdio.h>
int main()
{
    int java,js,c,cpp,python,r,t;
    printf("enter the marks of java ==>> ");
    scanf("%d",&java);
    printf("enter the marks of js ==>> ");
    scanf("%d",&js);
    printf("enter the marks of c ==>> ");
    scanf("%d",&c);
    printf("enter the marks of cpp ==>> ");
    scanf("%d",&cpp);
    printf("enter the marks of python ==>> ");
    scanf("%d",&python);
    r=(java+js+c+cpp+python)/5;
    if(r>=33)
    printf("pass");
    else
    printf("fail");
    return 0;
}