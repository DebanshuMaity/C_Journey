#include <stdio.h>

void max(int x,int y);
int main()
{
    max(45,56);
    return 0;
}
    
void max(int x,int y)
{
    if (x>y)
    {
        printf("x is greater than y");
    }
    else
    {
        printf("y is greater than x");
    }
}