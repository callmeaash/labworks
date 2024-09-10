#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[20];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Using builtin function
    printf("Length of string (builtin fun): %i\n", strlen(str));

    // Without using builtin function
    int i = 0, l = 0;
    while (str[i] != '\0')
    {
        l++;
        i++;
    }

    printf("Length of string is (user-defn): %i\n", l);
}