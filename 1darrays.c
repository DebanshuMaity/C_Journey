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
    int smallest = numbers[0];
    for (i=1; i<5; i++)
    {
        if (numbers[i]< smallest)
        {
            smallest = numbers[i];
        }
    
    }
    printf("smallest number is = %d", smallest);
}