#include <stdio.h>
void factorial(int n);
int main()
{
    int n;
    printf("Number Given = ");
    scanf("%d", &n);
    factorial(n);
    return 0;
}
void factorial (int n)
{
    int i;
    int num = 1;
    for (i=1; i<=n; i++ )
    {
        num = num * i;
    }
    printf("The factorial of given number is = %d ", num);
}
