#include <stdio.h>

int main(void)
{
    float f, c;

    printf("Fahrenheit: ");
    scanf("%f",&f);

    c = ((f-32)/180)*100;

    printf("Celsius: %.2f\n", c);
    return 0;

}
