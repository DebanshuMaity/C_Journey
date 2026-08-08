#include <stdio.h>
int max(int a, int b);
int main()
{
    int a,b;
    printf("a= ");
    scanf("%d",&a);
    printf("b = ");
    scanf("%d", &b);
    printf("The maximum number = %d", max(a,b));
    return 0;
}
int max(int a, int b)
{
    if (a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}