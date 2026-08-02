#include <stdio.h>
int main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks >= 50)
    {
        printf("You PASSED.\n");
    }
    else
    {
        printf("You FAILED.\n");
    }
    return 0;
}