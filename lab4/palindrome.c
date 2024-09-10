#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[20], rev[20];
    printf("Enter a word: ");
    scanf("%s", str);

    for (int i = 0, l = strlen(str)-1; i <= l; i++)
    {
        rev[i] = str[l-i];
    }

    rev[strlen(str)] = '\0';
    
    if (strcmp(str, rev) == 0)
    {
        printf("Palindrome word\n");
    }
    else
    {
        printf("Not a palindrome word\n");
    }
}