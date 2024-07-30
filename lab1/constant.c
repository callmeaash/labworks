#include <stdio.h>
#define PI 3.14

int main(void)
{
    const int CONSTANT = 10;
    printf("Global constant PI = %.2f\n", PI);
    printf("Local constant CONSTANT = %i\n", CONSTANT);
}
