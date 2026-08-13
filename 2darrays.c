#include <stdio.h>
int main()
{
    int numbers[2][3];
    int i,j;
    printf("Array Number:\n");
    for (i=0;i<2;i++)
    {
        for (j=0; j<3; j++)
        {
            scanf("%d",&numbers[i][j]);
        }
    }
    for (j=0;j<3;j++)
    {
        int sum = 0;
        for (i=0; i<2; i++)
        {
           sum = sum + numbers[i][j];
        }
        printf("column = %d, sum = %d\n",j,sum);        
    }   
    return 0;
}