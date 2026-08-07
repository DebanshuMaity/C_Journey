#include <stdio.h>
int cube(int n)
{
    return n*n*n;
}
int main()
{
    int x, ans;
    printf("The number : \n");
    scanf("%d",&x);
    ans = cube(x);
    printf("The cube: %d", ans);
    return 0;
}