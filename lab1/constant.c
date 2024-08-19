#include <stdio.h>
#define PI 3.14

const int global = 20;

int main(void)
{
    const int CONSTANT = 10;

    printf("Defined PI = %.2f\n", PI);
    printf("Local constant CONSTANT = %i\n", CONSTANT);
    printf("Global constant : %i\n", global);
}
