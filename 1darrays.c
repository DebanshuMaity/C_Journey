#include <stdio.h>
int main()
{
    int numbers[5];
    int i;
    printf("Array Numbers = \n ");
    for (i=0; i<5;i++)
    {
        scanf("%d",&numbers[i]);
    }
    printf("Reversed Array = \n");
    for (i=4;i>=0; i--)
    {
        printf("%d\n", numbers[i]);
    }
    return 0;
}