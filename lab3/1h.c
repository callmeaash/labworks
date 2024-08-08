#include <stdio.h>

int main(void)
{
    char str[] = "abcde";
    for(int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c\t", str[j-1]);
        }
        printf("\n");
    }
}