#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter a Number: ");
    scanf("%i", &n);

    if (n == 1 || n == 0)
    {
        printf("Neither nor Composite");
    }
    else
    {
        for (int i = 2; i <= n; i++)
        {
            if (i != n)
            {
                if (n % i == 0)
                {
                    printf("Composite Number");
                    break;
                }
            }

            if (i == n)
            {
                printf("Prime Number");
            }
        }
    }
}