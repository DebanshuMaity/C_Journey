#include <stdio.h>
#include <string.h>
int main()
{
    char word[51];
    int i;
    int m = 0;
    int n = 0;
    printf("give the word\n");
    scanf("%s", word);
    for (i=0; i<= strlen(word)-1;i++)
    {
        if (word[i]== 'a' || word[i]== 'e' || word[i]== 'i' || word[i]== 'o' ||word[i]== 'u' )
        {
            n++;
        }
        else
        {
            m++;
        }
                
    }
    printf("no. of vowels = %d\nno. of consonants = %d", n,m);
    return 0;

}