#include <stdio.h>

int main(void)
{
    int y,m,d,l,days;
    printf("Enter your age(y m d ): ");
    scanf("%i %i %i", &y, &m, &d);

    days = y*365 + m*30 + d;

    printf("Days Lived: %i\n", days);

}