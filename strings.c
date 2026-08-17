#include <stdio.h>
#include <string.h>
int main()
{
    char words[51];
    scanf("%50s", words);
    printf("%s\n", words);
    printf("first word = %c\n",words[0]);
    printf("length of word = %zu\n", strlen(words));
    printf("last word = %c", words[strlen(words)-1]);
    return 0;

}