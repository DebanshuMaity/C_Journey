#include <stdio.h>
int main()
{
    int numbers[5];
    int i,even,odd;
    printf("Array Numbers = \n ");
    for (i=0; i<5;i++)
    {
        scanf("%d",&numbers[i]);
    }
    even = 0;
    odd = 0;
    for (i=0; i<5; i++)
    {
        if (numbers[i]%2==0)
        {
            even = even +1;
        }
        else
        {
            odd = odd +1;
        }
    }
    printf("no. of even numbers = %d\n", even);
    printf("no. of even numbers = %d", odd);
    return 0;   
}