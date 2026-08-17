#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    int palindrome = 1;
    char words[51];
    scanf("%50s", words);
    printf("%s\n", words);
    for (i= 0; i< (strlen(words)/2) ;i++)
    {
        if (words[i]!= words[strlen(words)-1-i])
        {
            palindrome = 0;
        }       
    }
    if (palindrome == 1)
    {
        printf("It's a palindrome");
    }
    else
    {
        printf("It's not a palindrome");
    }
    return 0;

}