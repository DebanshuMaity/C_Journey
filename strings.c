#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char words[51];
    scanf("%50s", words);
    printf("%s\n", words);
    for (i= strlen(words)-1 ; i>=0;i--)
    {
        printf("%c", words[i]);       
    }
    return 0;

}