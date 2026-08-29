#include <stdio.h>
int max(int r,int c,int arr[r][c])
{
    int i,j;
    int largest = arr[0][0];
    
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            if (largest<arr[i][j])
            {
                largest = arr[i][j];
            }            
        }
    }
    return largest;
}
int main()
{
    int i,j,r,c;
    printf("rows, column \n");
    scanf("%d %d",&r,&c);
    int numbers[r][c];
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            scanf("%d",&numbers[i][j]);
            printf("%d ",numbers[i][j]);
        }
        printf("\n");
    }
    printf("largest is %d",max(r,c,numbers));
    return 0;
}