#include <stdio.h>
#include <string.h>

int main(void)
{
    char marital[10], gender[10];
    int s;
    float tax = 0;

    printf("Enter the martial status: ");
    scanf("%s", marital);

    printf("Enter the gender: ");
    scanf("%s", gender);

    printf("Enter the Annual Income: ");
    scanf("%i", &s);

    if (strcmp(marital, "married") == 0)
    {
        if (s < 450000)
            tax = 0.01 * s;
        else if (s > 450000 && s <= 550000)

            tax = 450000 * 0.01 + (s - 450000) * 0.1;
        else if (s > 550000 && s <= 750000)

            tax = 450000 * 0.01 + 100000 * 0.1 + (s - 550000) * 0.2;

        else if (s > 750000 && s <= 1300000)
            tax = (450000 * 0.01) + (100000 * 0.1) + (200000 * 0.2) + ((s - 750000) * 0.3);

        else
            tax = (450000 * 0.01) + (100000 * 0.1) + (200000 * 0.2) + (550000 * 0.3) + (s - 1300000) * 0.35;

    }
    else
    {
        if (s < 400000)
            tax = 0.01 * s;
        else if (s > 400000 && s <= 500000)

            tax = 400000 * 0.01 + (s - 400000) * 0.1;
        else if (s > 500000 && s <= 750000)

            tax = 400000 * 0.01 + 100000 * 0.1 + (s - 500000) * 0.2;

        else if (s > 750000 && s <= 1300000)
            tax = (400000 * 0.01) + (100000 * 0.1) + (250000 * 0.2) + ((s - 750000) * 0.3);

        else
            tax = (400000 * 0.01) + (100000 * 0.1) + (250000 * 0.2) + (550000 * 0.3) + (s - 1300000) * 0.35;
    }

    if (strcmp(gender, "female") == 0)
        tax = tax - tax * 0.1;

    printf("Tax is : %.2f\n", tax);

}
