#include <stdio.h>

void checkevenodd(int x);
int main()
{
    int x;
    printf("your no: \n");
    scanf("%d",&x);
    checkevenodd(x);
    return 0;
}
void checkevenodd(int x)
{
    if (x%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
}