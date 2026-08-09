#include <stdio.h>
int main()
{
    int numbers[5];
    int i,target;
    printf("Array Numbers = \n ");
    for (i=0; i<5;i++)
    {
        scanf("%d",&numbers[i]);
    }
    printf("target = \n");
    scanf("%d", &target);
    int found = 0;
    for (i=0; i<5; i++)
    {
        if (numbers[i] == target)
        {
            found =1;
        }
    }
    if (found == 1)
    {
        printf("found!");
    }
    else
    {
        printf("not found !!");
    }
    return 0;     
}