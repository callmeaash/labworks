#include <stdio.h>
#include <ctype.h>
#include <string.h>

void lower(char *str)
{
    for (int i=0, l = strlen(str); i < l; i++)
    {
        str[i] = tolower(str[i]);
    }
}

void upper(char *str)
{
    for (int i=0, l = strlen(str); i < l; i++)
    {
        str[i] = toupper(str[i]);
    }
}

int main(void)
{
    char str[] = "Aashish";
    lower(str);
    printf("Lower Case: %s\n", str);
    upper(str);
    printf("Upper Case: %s\n", str);
}
