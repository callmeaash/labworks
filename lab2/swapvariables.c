#include <stdio.h>

int main(void)
{
    int a,b;
    printf("Enter a: ");
    scanf("%i", &a);

    printf("Enter b: ");
    scanf("%i", &b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("a = %i\n", a);
    printf("b = %i\n", b);

    return 0;
}