#include <stdio.h>
int main()
{
    int marks;
    int attendance;

    printf("Enter Your Marks : \n");
    scanf("%d", &marks);
    printf("Enter Attendance : \n");
    scanf("%d", &attendance);
    
    if ( marks >= 40  && attendance >=75 )
    {
        printf("Marks :%d\n", marks);
        printf("Attendance :%d\n", attendance);
    }
    else
    {
        printf("You Fail");
    }
    return 0;
}