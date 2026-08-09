#include <stdio.h>
int numbers[5];
int main()
{
    int i;
    printf("The array Numbers\n");
    for (i=0;i<5;i++)
    {
        scanf("%d",&numbers[i]);
    }
    for (i=0;i<5;i++)
    {
        printf("%d ", numbers[i]);
    }
    return 0;
}