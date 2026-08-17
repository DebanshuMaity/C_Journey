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
    for (i=0; words[i]!='\0';i++)
    {
        if (words[i]== 'a' || words[i]== 'e' || words[i]== 'i' || words[i]== 'o' || words[i]== 'u' )
        {
            number++;
        }
    }
    printf("no. of time vowels appeared = %d", number);
    return 0;

}