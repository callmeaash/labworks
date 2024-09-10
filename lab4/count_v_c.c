#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char str[20];
    int vowel_count = 0, con_count = 0;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(int i = 0, l = strlen(str); i < l; i++)
    {
        if (isalpha(str[i]))
        {
            char s = tolower(str[i]);
            if (s == 'a' || s == 'e' || s == 'i' || s == 'o' || s=='u')
            {
                vowel_count++;
            }
            else
            {
                con_count++;
            }
        }
    }

    printf("Vowel count: %i\n", vowel_count);
    printf("Consonant count: %i\n", con_count);
}