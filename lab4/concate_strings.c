#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[20], str2[20];
    printf("Enter first string: ");
    scanf("%s", str1);
    getchar();

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    strcat(str1, str2);
    printf("Concated string: %s", str1);
}