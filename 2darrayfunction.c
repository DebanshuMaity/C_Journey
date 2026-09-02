#include <stdio.h>
int search(int r,int c,int arr[r][c],int s)
{
    int i,j;    
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            {
                if (s== arr[i][j])
                {
                    return 1;
                }
            }            
        }
    }
    return 0;
}
int main()
{
    int i,j,r,c,s;
    printf("rows, column \n");
    scanf("%d %d",&r,&c);
    int numbers[r][c];
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            scanf("%d",&numbers[i][j]);
        }
        printf("\n");
    }
    printf("number = ");
    scanf("%d",&s);
    int result = search(r,c,numbers,s);
    if (result==1)
    {
        printf("Found");
    }
    else
    {
        printf("not found");
    }
    return 0;
}