#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    int number = 0;
    char target;
    char words[51];
    scanf("%50s", &words);
    printf("%s\n", words);
    scanf(" %c", &target);
    for (i=0; words[i]!='\0';i++)
    {
        if (target == words[i])
        {
            number++;
        }
    }
    printf("no. of time it appeared = %d", number);
    return 0;

}