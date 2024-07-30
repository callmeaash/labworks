#include <stdio.h>

int main(void)
{
    int a,b;
    printf("a : ");
    scanf("%i", &a);

    printf("b : ");
    scanf("%i", &b);

    int sum = a + b;
    int dif = a - b;
    int prod = a * b;
    float div = a / (float) b;

    printf("Sum : %i\n", sum);
    printf("Diff : %i\n", dif);
    printf("Product : %i\n", prod);
    printf("Division : %.2f\n", div);
    return 0;
}