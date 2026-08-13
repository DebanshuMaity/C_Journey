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
    int smallest = numbers[0][0];
    for (i=0;i<2;i++)
    {
        for (j=0; j<3; j++)
        {
           if (numbers[i][j]< smallest)
           {
              smallest = numbers[i][j];
           }
        }
        
    }
    printf("smallest = %d", smallest);    
    return 0;
}