#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[20];
    printf("Enter a string: ");
    scanf("%s", str);
    // Using builtin function
    printf("Length of string is %i\n", strlen(str));

    // Without using builtin function
    int i = 0, l = 0;
    while (str[i] != '\0')
    {
        l++;
        i++;
    }

    printf("Length of string is %i\n", l);
}