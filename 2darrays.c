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
    int largest = numbers[0][0];
    for (i=0;i<2;i++)
    {
        for (j=0; j<3; j++)
        {
           if (numbers[i][j]> largest)
           {
              largest = numbers[i][j];
           }
        }
        
    }
    printf("largest = %d", largest);    
    return 0;
}