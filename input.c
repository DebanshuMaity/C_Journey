#include <stdio.h>
int main()
{
    int age;
    float marks;
    char grade;
    printf ("Enter your age: \n");
    scanf("%i", &age);
    printf("Enter your marks: \n");
    scanf("%f", &marks);
    printf("Enter your Grade: \n");
    scanf(" %c", &grade);
    printf("Your age is:%i \n", age);
    printf(" Your marks are:%.2f \n", marks);
    printf("Your grade: %c", grade);
    return 0;
}