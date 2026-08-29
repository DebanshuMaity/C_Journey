#include <stdio.h>
int max(int arr[],int size)
{
    int largest = arr[0];
    for (int i = 1 ; i<size; i++)
    {
        if(largest < arr[i])
        {
            largest = arr[i];
        }
    }
    return largest;
}
int main()
{
    int i,size;
    printf("size: ");
    scanf("%d",&size);
    int numbers[i];
    for (i=0;i<size;i++)
    {
        scanf("%d",&numbers[i]);
    }
    printf("%d",max(numbers,size));
    return 0;
}
