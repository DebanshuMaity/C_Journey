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
    float sum, average;
    sum = 0;
    for (i=0; i<5; i++)
    {
        sum = sum + numbers[i]; 
    }
    average = sum /5;
    printf(" average is = %.2f", average);
}