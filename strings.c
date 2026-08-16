#include <stdio.h>
#include <string.h>
int main()
{
    int a;
    char words[6];
    scanf("%5s", words);
    printf("%s\n", words);
    printf("length of word = %zu", strlen(words));

}