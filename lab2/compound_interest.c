#include <stdio.h>
#include <math.h>

int main(void)
{
    float p, r;
    float i = 0;
    int t;
    printf("Enter amount, rate, time: ");
    scanf("%f %f %i", &p, &r, &t);

    i = (p * pow((1 + r / 100), t)) - p;

    printf("Compound Interest: %.2f\n", i);
}