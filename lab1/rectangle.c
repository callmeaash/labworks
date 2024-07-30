#include <stdio.h>

int main(void)
{
    float l, b, area;

    printf("Length: ");
    scanf("%f", &l);

    printf("Breadth: ");
    scanf("%f", &b);

    area = l * b;

    printf("Area of rectangle is %.2f\n", area);
    return 0;
}