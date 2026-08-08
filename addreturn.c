#include <stdio.h>
int add(int a, int b);
int main()
{
    int a,b;
    printf("a= ");
    scanf("%d",&a);
    printf("b= ");
    scanf("%d",&b);
    printf( "addition = %d", add(a, b));
    return 0;
}
int add (int a, int b)
{
    return a+b;
}