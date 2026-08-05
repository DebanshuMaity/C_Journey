#include <stdio.h>
int main()
{
    int num,i;
    int pro =1;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (i=1; i<=num; i++)
    {
        pro = i*pro; 
    }
    printf("Factorial: %d", pro);
}