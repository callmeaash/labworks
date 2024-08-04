#include <stdio.h>

int main(void)
{
    int a,b,c,largest, smallest;

    printf("Enter three numbers: ");
    scanf("%i %i %i", &a, &b, &c);

    if (a > b && a > c)
    {
        largest = a;
        if (b < c)
        {
            smallest = b;
        }
        else
        {
            smallest = c;
        }
    }
    else if (b > c && b > a)
    {
        largest = b;
        if (a < c)
        {
            smallest = a;
        }
        else
        {
            smallest = c;
        }
    }
    else
    {
        largest = c;
        if (a < b)
        {
            smallest = a;
        }
        else
        {
            smallest = b;
        }
    }
    printf("Smallest: %i \nLargest: %i\n", smallest, largest);

    if (smallest % 2 == 0)
    {
        printf("smallest is even\n");
    }
    else
    {
        printf("smallest is odd\n");
    }
    if (largest % 2 == 0)
    {
        printf("largest is even\n");
    }
    else
    {
        printf("largest is odd\n");
    }

}