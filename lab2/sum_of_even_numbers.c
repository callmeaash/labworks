#include <stdio.h>

int main(void)
{
    int a,b;
    int sum = 0;

    printf("Enter two numbers: ");
    scanf("%i %i", &a, &b);

    if ( a > b)
    {
        printf("Error");
        return 1;
    }
    for (int i = a; i <= b; i ++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }

    printf("The sum of even numbers between %i and %i is %i\n", a,b,sum);
}