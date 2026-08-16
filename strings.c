#include <stdio.h>
#include <string.h>
int main()
{
    int a;
    char words[6];
    scanf("%s", words);
    printf("%s\n", words);
    a=strlen(words);
    printf("length of word = %d", a);

}