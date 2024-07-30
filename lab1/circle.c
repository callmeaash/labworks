#include <stdio.h>
#define PI 3.14

int main(void)
{
    float r, area, circumference;

    printf("Radius of circle: ");
    scanf("%f", &r);

    area = PI * r * r;
    circumference = 2 * PI * r;

    printf("Area is %.2f and Circumference is %.2f\n", area, circumference);
    return 0;

}
