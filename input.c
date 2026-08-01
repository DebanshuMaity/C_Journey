#include <stdio.h>
int main()
{
    int age;
    float marks;
    printf ("Enter your age: \n");
    scanf("%i", &age);
    printf("Enter your marks: \n");
    scanf("%f", &marks);
    printf("Your age is:%i \n", age);
    printf(" Your marks are:%.2f", marks);
    return 0;
}