#include <stdio.h>
#define PI 3.14

int main(void)
{
    float r, h, area;

    printf("Radius: ");
    scanf("%f", &r);

    printf("Height: ");
    scanf("%f", &h);

    area = 2 * PI * r * (r+h);

    printf("Total Surface Area of cylinder is %.2f\n", area);
    return 0;
}