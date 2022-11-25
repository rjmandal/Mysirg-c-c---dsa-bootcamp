#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 4; i++)
    {
        char k = 'A';
        for (j = 1; j <= 7; j++)
        {
            if (j >= i && j <= 8 - i)
            {
                if(j<4)
                printf("%c", k++);
                else
                printf("%c",k--);

            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}