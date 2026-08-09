#include <stdio.h>
int numbers[5];
int main()
{
    int i,sum;
    sum = 0;
    printf("The array Numbers\n");
    for (i=0;i<5;i++)
    {
        scanf("%d",&numbers[i]);
    }
    for (i=0;i<5;i++)
    {
         sum = sum + numbers[i];
    }
    printf("Sum of the arrays = %d ", sum);
    return 0;
}