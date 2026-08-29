#include <stdio.h>
void display(int arr[],int size)
{
    int i;
    for (i=0 ; i< size; i++ )
    {
        arr[i] = arr[i]*2;
        printf("%d ",arr[i]);
    }
}
int main()
{
    int i;
    int size;
    printf("size: ");
    scanf("%d ",&size);
    int numbers[i];
    for (i=0;i<size;i++)
    {
        scanf("%d",&numbers[i]);
    }
    display(numbers , 5);
    return 0;
}