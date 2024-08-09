#include <stdio.h>

int main(void)
{
    float m, f, d, c, e;
    float per = 0;
    printf("Enter the mark of Math, FA, DL, CS, English : ");
    scanf("%f %f %f %f %f", &m , &f, &d, &c, &e);

    if (m < 40 || f < 40 || d < 40 || c < 40 || e < 40)
    {
        printf("Fail");
        return 1;
    }
    per = ((m + f + d + c + e) / 500) * 100;

    if (per > 100 || per < 0)
    {
        printf("Invalid\n");
        return 1;
    }
    else
    {
        printf("Percentage is %.2f%%\n", per);
    }

    if (per >= 80)
    {
        printf("Distinction\n");
    }

    else if (per >= 60 && per <80)
    {
        printf("First Division\n");
    }

    else if (per >= 40 && per < 60)
    {
        printf("Pass\n");
    }
    else
    {
        printf("Fail\n");
    }
    return 0;
}
