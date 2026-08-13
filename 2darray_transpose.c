#include <stdio.h>
int main()
{
    int numbers[2][3];
    int transpose[3][2];
    int i,j;
    for (i=0; i<2; i++)
    {
        for (j=0;j<3;j++)
        {
            scanf("%d",&numbers[i][j]);
            transpose[j][i]= numbers[i][j];
        }
    }
    for (i=0; i<3; i++)
    {
        for (j=0;j<2;j++)
        {
            printf("%d ",transpose[j][i]);
        }
        printf("\n");        
    }
    
}