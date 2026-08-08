#include <stdio.h>
int factorial(int n);
int main()
{
    int n;
    printf("The number = ");
    scanf("%d",&n);
    printf("The factorial = %d", factorial(n));
    return 0;
}
int factorial(int n)
{
    int i,pro;
    for (i =1 ;i<=n;i++ )
    {
         pro = pro *i;
    }
    return pro;
}