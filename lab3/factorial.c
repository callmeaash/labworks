#include <stdio.h>

int main(void)
{
    int n,f=1;
    printf("Enter a Number: ");
    scanf("%i", &n);
    
    if (n < 0)
    {
        printf("Invalid");
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            f = f*i;
        }
        printf("Factorial of %i is %i", n, f);
    }
}