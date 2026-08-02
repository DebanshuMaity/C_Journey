#include <stdio.h>
int main()
{
    int marks;

    printf("Enter the Marks: ");
    scanf("%d", &marks);

    if (marks >= 90)
    {
        printf("Grade A\n");
    }
    else if (marks >= 75)
    {
        printf("Grade B\n");
    }
    else
    {
        printf("Grade C.\n");
    }
    return 0;
}