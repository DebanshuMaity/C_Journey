#include <stdio.h>
int main()
{
    int i,j;
    int num = 0;
    for (i = 1; i<=5; i++)
    {
        for (j=1; j<=i ;j++ )
        {
            num = num + 1;
            printf("%d",num);
        }
        printf("\n");
    }
}