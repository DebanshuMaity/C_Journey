#include <stdio.h>
void display(int r,int c,int arr[r][c])
{
    int i,j;
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
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
        }
    }
    display(r,c,numbers);
    return 0;
}