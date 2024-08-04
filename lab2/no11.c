#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%i", &n);

    if (n % 5 == 0) {
        if (n % 7 == 0 && n % 11 != 0) {
            printf("Multiple of 5, divisible by 7 but not by 11.\n");
        } else {
            printf("Multiple of 5 only\n");
        }
    } else {
        printf("Not a multiple of 5\n");
    }

    return 0;
}
