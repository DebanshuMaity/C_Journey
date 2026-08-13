#include <stdio.h>
int main()
{
    int numbers[2][3];
    int i,j;
    int sum = 0;
    printf("Array Number:\n");
    for (i=0;i<2;i++)
    {
        for (j=0; j<3; j++)
        {
            scanf("%d",&numbers[i][j]);
        }
    }
    for (i=0;i<2;i++)
    {
        for (j=0; j<3; j++)
        {
           sum = sum + numbers [i][j];
        }
        
    }
    printf("sum = %d", sum);    
    return 0;
}