#include <stdio.h>
int main()
{
    int age;
    char sol;
    printf(" Enter age: ");
    scanf("%d", &age);
    printf("Are you a Student (Y/N): ");
    scanf(" %c", &sol);
    if (age >= 65 || sol == 'Y')
    {
        printf("Approved\n");
    }
    else if ( sol == 'N')
    {
        printf("Not Approved\n");
    }
    else
    {
        printf("Not Approved");
    }
    return 0;
}