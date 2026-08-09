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
    int largest = numbers[0];
    for (i=1; i<5; i++)
    {
        if (numbers[i]> largest)
        {
            largest = numbers[i];
        }
    
    }
    printf("largest number is = %d", largest);
}