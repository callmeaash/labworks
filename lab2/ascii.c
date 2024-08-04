#include <stdio.h>

int main(void)
{
    char c;
    printf("Enter the Character: ");
    scanf("%c", &c);

    if (c >= 65 && c <= 90)
    {
        printf("Capital Letter");
    }
    else if (c >= 97 && c <= 122)
    {
        printf("Small Letter");
    }
    else if (c >= 48 && c <= 57)
    {
        printf("Number");
    }
    else
    {
        printf("Special Character");
    }
    return 0;
}