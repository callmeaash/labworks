#include <stdio.h>

int main(void)
{
    int y,l,days;
    printf("Enter your age: ");
    scanf("%i", &y);

    l = y / 4;
    days = (y*365) + l;

    printf("Days Lived: %i\n", days);

}