// 8. Write a function to print PASCAL Triangle. (TSRN)

#include <stdio.h>
int combination(int, int);
void pascal(int);
int fact(int);
int main()
{
    int no;
    printf("enter the no ==>> ");
    scanf("%d", &no);
    pascal(no);
    return 0;
}
int fact(int no)
{
    int f = 1;
    while (no)
    {
        f = f * no;
        no--;
    }
    return f;
}
int combination(int no, int r)
{
    return fact(no) / (fact(r) * fact(no - r));
}
void pascal(int no)
{
    int i, j;
    for (i = 0; i <= no; i++)
    {
        for (j = 0; j <= i; j++)
        {
                printf("%d ", combination(i, j));
        }
        printf("\n");
    }
}
// #include <stdio.h>
// int main() {
//   int no;
//   printf("enter the no ==>> ");
//   scanf("%d", &no);
//   int i, j;
//   for (i = 1; i <= no; i++) {
//     for (j = 1; j <= no*no-1; j++) {
//       if (j >= (no + 1) - i && j <= (no-1)  + i)
//         printf("*");
//       else
//         printf(" ");
//     }
//     printf("\n");
//   }
//   return 0;
// }