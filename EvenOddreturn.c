#include <stdio.h>
int isEven(int n);
int main()
{
    int n;
    printf("The number = ");
    scanf("%d",&n);
    if (isEven(n))
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    return 0;
}
int isEven(int n)
{
    if (n%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
