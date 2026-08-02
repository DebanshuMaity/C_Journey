#include <stdio.h>
int main()
{
    int isOpen;
    printf("Is the shop open (1/0): ");
    scanf("%d", &isOpen);
    if (!isOpen)
    {
        printf("Shop is closed\n");
    }
    else
    {
        printf("Shop is Open\n");
    }
    return 0;
}